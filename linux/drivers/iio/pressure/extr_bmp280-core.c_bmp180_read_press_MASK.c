
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bmp280_data {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct bmp280_data*,int ) ;
 int FUNC_1 (struct bmp280_data*,int *) ;
 int FUNC_2 (struct bmp280_data*,int *) ;

__attribute__((used)) static int FUNC_3(struct bmp280_data *VAR_1,
        int *VAR_2, int *VAR_3)
{
 int VAR_4;
 s32 VAR_5;
 u32 VAR_6;


 VAR_4 = FUNC_2(VAR_1, ((void*)0));
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_6 = FUNC_0(VAR_1, VAR_5);

 *VAR_2 = VAR_6;
 *VAR_3 = 1000;

 return VAR_0;
}
