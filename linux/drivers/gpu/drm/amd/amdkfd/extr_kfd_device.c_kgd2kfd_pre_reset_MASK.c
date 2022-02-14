
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_dev {int dqm; int init_complete; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kfd_dev*) ;
 int FUNC_2 (struct kfd_dev*) ;

int FUNC_3(struct kfd_dev *VAR_0)
{
 if (!VAR_0->init_complete)
  return 0;
 FUNC_2(VAR_0);


 FUNC_0(VAR_0->dqm);

 FUNC_1(VAR_0);
 return 0;
}
