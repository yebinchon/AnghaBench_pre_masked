
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_dev {int kgd; int compute_profile; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct kfd_dev *VAR_0)
{
 if (FUNC_1(&VAR_0->compute_profile) == 1)
  FUNC_0(VAR_0->kgd, 0);
}
