
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {int * regmap_fields; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 unsigned int* VAR_3 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct fxas21002c_data *VAR_4,
       unsigned int VAR_5)
{
 int VAR_6 = FUNC_0(VAR_3);
 bool VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  if (VAR_3[VAR_10] == VAR_5) {
   VAR_7 = 1;
   break;
  }

 if (!VAR_7)
  return -VAR_0;

 if (VAR_5 > VAR_1)
  VAR_8 = 1;

 VAR_9 = FUNC_1(VAR_4->regmap_fields[VAR_2], VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 return VAR_10;
}
