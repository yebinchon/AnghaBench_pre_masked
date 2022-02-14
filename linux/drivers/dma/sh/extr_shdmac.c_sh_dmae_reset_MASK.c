
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_dmae_device {int shdma_dev; } ;


 int FUNC_0 (struct sh_dmae_device*) ;
 int FUNC_1 (struct sh_dmae_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct sh_dmae_device *VAR_0)
{
 bool VAR_1;


 FUNC_0(VAR_0);


 VAR_1 = FUNC_2(&VAR_0->shdma_dev);

 FUNC_1(VAR_0);

 return VAR_1;
}
