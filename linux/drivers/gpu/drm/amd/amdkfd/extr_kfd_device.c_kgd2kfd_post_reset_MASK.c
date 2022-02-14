
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_dev {int sram_ecc_flag; int dqm; int init_complete; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct kfd_dev*) ;

int FUNC_4(struct kfd_dev *VAR_1)
{
 int VAR_2, VAR_3;

 if (!VAR_1->init_complete)
  return 0;

 FUNC_2(VAR_1->dqm);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_3 = FUNC_0(&VAR_0);

 FUNC_1(&VAR_1->sram_ecc_flag, 0);

 return 0;
}
