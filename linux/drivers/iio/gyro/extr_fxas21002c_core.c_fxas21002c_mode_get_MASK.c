
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {int * regmap_fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct fxas21002c_data *VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5->regmap_fields[VAR_3], &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_6)
  return VAR_0;

 VAR_8 = FUNC_0(VAR_5->regmap_fields[VAR_4], &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_7)
  return VAR_1;

 return VAR_2;
}
