
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_waiting_lock {scalar_t__ nw_waiting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct nlm_waiting_lock*,int ) ;
 int FUNC_1 (struct nlm_waiting_lock*,int ) ;
 int FUNC_2 (struct nlm_waiting_lock*,int *,int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;

int
FUNC_7(void *VAR_7, int VAR_8)
{
 struct nlm_waiting_lock *VAR_9 = VAR_7;
 int VAR_10, VAR_11;





 FUNC_3(&VAR_4);
 VAR_10 = 0;
 if (VAR_9->nw_waiting) {
  VAR_11 = FUNC_6(VAR_3);
  VAR_10 = FUNC_2(VAR_9, &VAR_4, VAR_2, "nlmlock", VAR_8);
  FUNC_5(VAR_11);
 }
 FUNC_0(&VAR_5, VAR_9, VAR_6);
 if (VAR_10) {





  if (!VAR_9->nw_waiting)
   VAR_10 = 0;
 } else {





  if (VAR_9->nw_waiting)
   VAR_10 = VAR_0;
 }
 FUNC_4(&VAR_4);

 FUNC_1(VAR_9, VAR_1);

 return (VAR_10);
}
