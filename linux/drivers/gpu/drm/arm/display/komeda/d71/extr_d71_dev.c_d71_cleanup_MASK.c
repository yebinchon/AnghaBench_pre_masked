
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_dev {struct d71_dev* chip_data; int dev; } ;
struct d71_dev {int dummy; } ;


 int FUNC_0 (int ,struct d71_dev*) ;

__attribute__((used)) static void FUNC_1(struct komeda_dev *VAR_0)
{
 struct d71_dev *VAR_1 = VAR_0->chip_data;

 if (!VAR_1)
  return;

 FUNC_0(VAR_0->dev, VAR_1);
 VAR_0->chip_data = ((void*)0);
}
