
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_dev {int gws; int kgd; int gtt_mem; int dqm; scalar_t__ init_complete; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct kfd_dev*) ;
 int FUNC_4 (struct kfd_dev*) ;
 int FUNC_5 (struct kfd_dev*) ;
 int FUNC_6 (struct kfd_dev*) ;
 int FUNC_7 (struct kfd_dev*) ;
 int FUNC_8 (struct kfd_dev*) ;

void FUNC_9(struct kfd_dev *VAR_1)
{
 if (VAR_1->init_complete) {
  FUNC_8(VAR_1);
  FUNC_2(VAR_1->dqm);
  FUNC_5(VAR_1);
  FUNC_6(VAR_1);
  FUNC_3(VAR_1);
  FUNC_4(VAR_1);
  FUNC_0(VAR_1->kgd, VAR_1->gtt_mem);
  if (VAR_0)
   FUNC_1(VAR_1->kgd, VAR_1->gws);
 }

 FUNC_7(VAR_1);
}
