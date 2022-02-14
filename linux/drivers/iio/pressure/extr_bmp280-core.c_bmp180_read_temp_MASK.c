
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bmp280_data {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct bmp280_data*,int) ;
 int FUNC_1 (struct bmp280_data*,int*) ;

__attribute__((used)) static int FUNC_2(struct bmp280_data *VAR_1, int *VAR_2)
{
 int VAR_3;
 s32 VAR_4, VAR_5;

 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_5 = FUNC_0(VAR_1, VAR_4);





 if (VAR_2) {
  *VAR_2 = VAR_5 * 100;
  return VAR_0;
 }

 return 0;
}
