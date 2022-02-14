
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_dev {int kgd; int compute_profile; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct kfd_dev *VAR_0)
{
 int VAR_1 = FUNC_2(&VAR_0->compute_profile);

 if (VAR_1 == 0)
  FUNC_1(VAR_0->kgd, 1);
 FUNC_0(VAR_1 < 0, "Compute profile ref. count error");
}
