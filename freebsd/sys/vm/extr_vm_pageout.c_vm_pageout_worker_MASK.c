
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct vm_domain {scalar_t__ vmd_segs; scalar_t__ vmd_free_count; int vmd_pid; int vmd_pageout_wanted; int vmd_last_active_scan; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 struct vm_domain* FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int *,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int ,int,char*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct vm_domain*) ;
 int FUNC_9 (struct vm_domain*) ;
 int FUNC_10 (struct vm_domain*) ;
 int FUNC_11 (struct vm_domain*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (struct vm_domain*,int) ;
 int FUNC_14 (struct vm_domain*,int,int*) ;
 scalar_t__ FUNC_15 (struct vm_domain*,scalar_t__) ;

__attribute__((used)) static void
FUNC_16(void *VAR_7)
{
 struct vm_domain *VAR_8;
 u_int VAR_9;
 int VAR_10, VAR_11, VAR_12;
 bool VAR_13;

 VAR_11 = (uintptr_t)VAR_7;
 VAR_8 = FUNC_2(VAR_11);
 VAR_12 = 0;
 VAR_13 = 1;







 FUNC_0(VAR_8->vmd_segs != 0, ("domain without segments"));
 VAR_8->vmd_last_active_scan = VAR_5;




 while (VAR_2) {
  FUNC_8(VAR_8);






  FUNC_3(&VAR_8->vmd_pageout_wanted, 0);




  if (FUNC_15(VAR_8, VAR_8->vmd_free_count)) {





   FUNC_10(VAR_8);
   if (!VAR_13)
    FUNC_6("pwait", VAR_4 / VAR_3);
  } else {




   if (FUNC_5(&VAR_8->vmd_pageout_wanted,
       FUNC_9(VAR_8), VAR_0 | VAR_1,
       "psleep", VAR_4 / VAR_3) == 0)
    FUNC_1(VAR_6);
  }


  FUNC_3(&VAR_8->vmd_pageout_wanted, 1);







  VAR_12 = FUNC_7(&VAR_8->vmd_pid, VAR_8->vmd_free_count);
  if (VAR_12 > 0) {
   VAR_9 = VAR_8->vmd_free_count;
   if (FUNC_12() && VAR_8->vmd_free_count > VAR_9)
    VAR_12 -= FUNC_4(VAR_8->vmd_free_count - VAR_9,
        (u_int)VAR_12);
   VAR_13 = FUNC_14(VAR_8, VAR_12,
       &VAR_10);
  } else
   VAR_10 = 0;






  VAR_12 = FUNC_11(VAR_8) + VAR_10;
  FUNC_13(VAR_8, VAR_12);
 }
}
