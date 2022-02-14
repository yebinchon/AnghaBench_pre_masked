
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_source_device {int dev; } ;
struct stm_source_data {struct stm_source_device* src; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct stm_source_device*) ;

void FUNC_2(struct stm_source_data *VAR_0)
{
 struct stm_source_device *VAR_1 = VAR_0->src;

 FUNC_1(VAR_1);

 FUNC_0(&VAR_1->dev);
}
