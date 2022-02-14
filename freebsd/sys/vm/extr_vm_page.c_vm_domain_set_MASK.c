
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_domain {int vmd_minset; int vmd_severeset; int vmd_domain; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct vm_domain*) ;
 scalar_t__ FUNC_4 (struct vm_domain*) ;
 int VAR_2 ;

void
FUNC_5(struct vm_domain *VAR_3)
{

 FUNC_1(&VAR_0);
 if (!VAR_3->vmd_minset && FUNC_3(VAR_3)) {
  VAR_3->vmd_minset = 1;
  FUNC_0(VAR_3->vmd_domain, &VAR_1);
 }
 if (!VAR_3->vmd_severeset && FUNC_4(VAR_3)) {
  VAR_3->vmd_severeset = 1;
  FUNC_0(VAR_3->vmd_domain, &VAR_2);
 }
 FUNC_2(&VAR_0);
}
