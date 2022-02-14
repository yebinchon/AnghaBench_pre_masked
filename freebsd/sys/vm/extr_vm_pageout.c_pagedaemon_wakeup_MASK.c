
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_domain {int vmd_pageout_wanted; } ;


 struct vm_domain* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct vm_domain*) ;
 int FUNC_4 (struct vm_domain*) ;
 int FUNC_5 (struct vm_domain*) ;
 int FUNC_6 (int *) ;

void
FUNC_7(int VAR_2)
{
 struct vm_domain *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 FUNC_3(VAR_3);
 if (VAR_0 == VAR_1)
  return;

 if (FUNC_1(&VAR_3->vmd_pageout_wanted, 1) == 0) {
  FUNC_4(VAR_3);
  FUNC_2(&VAR_3->vmd_pageout_wanted, 1);
  FUNC_6(&VAR_3->vmd_pageout_wanted);
  FUNC_5(VAR_3);
 }
}
