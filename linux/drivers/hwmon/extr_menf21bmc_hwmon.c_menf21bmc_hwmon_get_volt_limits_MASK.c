
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menf21bmc_hwmon {int* in_min; int* in_max; int i2c_client; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct menf21bmc_hwmon *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_2(VAR_1->i2c_client,
            FUNC_1(VAR_2));
  if (VAR_3 < 0)
   return VAR_3;

  VAR_1->in_min[VAR_2] = VAR_3;

  VAR_3 = FUNC_2(VAR_1->i2c_client,
            FUNC_0(VAR_2));
  if (VAR_3 < 0)
   return VAR_3;

  VAR_1->in_max[VAR_2] = VAR_3;
 }
 return 0;
}
