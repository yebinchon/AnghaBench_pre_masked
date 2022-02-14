
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menf21bmc_hwmon {int valid; int* in_val; scalar_t__ last_update; int i2c_client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct menf21bmc_hwmon* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 struct menf21bmc_hwmon* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct menf21bmc_hwmon *FUNC_5(struct device *VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct menf21bmc_hwmon *VAR_6 = FUNC_2(VAR_3);
 struct menf21bmc_hwmon *VAR_7 = VAR_6;

 if (FUNC_4(VAR_2, VAR_6->last_update + VAR_1)
     || !VAR_6->valid) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   VAR_5 = FUNC_3(VAR_6->i2c_client,
             FUNC_1(VAR_4));
   if (VAR_5 < 0) {
    VAR_7 = FUNC_0(VAR_5);
    goto abort;
   }
   VAR_6->in_val[VAR_4] = VAR_5;
  }
  VAR_6->last_update = VAR_2;
  VAR_6->valid = 1;
 }
abort:
 return VAR_7;
}
