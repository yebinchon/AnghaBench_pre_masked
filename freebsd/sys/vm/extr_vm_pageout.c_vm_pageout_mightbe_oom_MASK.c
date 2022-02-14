
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_domain {scalar_t__ vmd_oom_seq; void* vmd_oom; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(struct vm_domain *VAR_6, int VAR_7,
    int VAR_8)
{
 int VAR_9;

 if (VAR_8 <= 0 || VAR_8 !=
     VAR_7)
  VAR_6->vmd_oom_seq = 0;
 else
  VAR_6->vmd_oom_seq++;
 if (VAR_6->vmd_oom_seq < VAR_4) {
  if (VAR_6->vmd_oom) {
   VAR_6->vmd_oom = VAR_0;
   FUNC_1(&VAR_5, 1);
  }
  return;
 }





 VAR_6->vmd_oom_seq = 0;

 if (VAR_6->vmd_oom)
  return;

 VAR_6->vmd_oom = VAR_1;
 VAR_9 = FUNC_0(&VAR_5, 1);
 if (VAR_9 != VAR_3 - 1)
  return;






 FUNC_2(VAR_2);







 VAR_6->vmd_oom = VAR_0;
 FUNC_1(&VAR_5, 1);
}
