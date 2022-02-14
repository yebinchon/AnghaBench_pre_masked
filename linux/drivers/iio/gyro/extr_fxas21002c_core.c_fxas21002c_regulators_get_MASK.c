
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {void* vddio; void* vdd; int regmap; } ;
struct device {int parent; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,char*) ;
 struct device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct fxas21002c_data *VAR_0)
{
 struct device *VAR_1 = FUNC_4(VAR_0->regmap);

 VAR_0->vdd = FUNC_3(VAR_1->parent, "vdd");
 if (FUNC_0(VAR_0->vdd))
  return FUNC_1(VAR_0->vdd);

 VAR_0->vddio = FUNC_3(VAR_1->parent, "vddio");

 return FUNC_2(VAR_0->vddio);
}
