
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sram_bank_info {struct sram_bank_info* pool_name; int sram_virt; int gpool; int node; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sram_bank_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sram_bank_info* FUNC_6 (struct platform_device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct sram_bank_info *VAR_3;

 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_4(&VAR_1);
 FUNC_3(&VAR_3->node);
 FUNC_5(&VAR_1);

 FUNC_0(VAR_3->gpool);
 FUNC_1(VAR_3->sram_virt);
 FUNC_2(VAR_3->pool_name);
 FUNC_2(VAR_3);
 return 0;
}
