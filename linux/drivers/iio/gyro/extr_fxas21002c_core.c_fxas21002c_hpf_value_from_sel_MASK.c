
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {int dummy; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 unsigned int* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct fxas21002c_data *VAR_2,
      unsigned int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  if (VAR_1[VAR_5] == VAR_3)
   return VAR_5;

 return -VAR_0;
}
