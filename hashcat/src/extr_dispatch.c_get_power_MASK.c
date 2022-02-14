
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int kernel_power; scalar_t__ hardware_power; } ;
typedef TYPE_1__ hc_device_param_t ;
struct TYPE_6__ {int kernel_power_final; double hardware_power_all; } ;
typedef TYPE_2__ backend_ctx_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const,scalar_t__) ;
 int FUNC_2 (int const,int) ;

__attribute__((used)) static u64 FUNC_3 (backend_ctx_t *VAR_0, hc_device_param_t *VAR_1)
{
  const u64 VAR_2 = VAR_0->kernel_power_final;

  if (VAR_2)
  {
    const double VAR_3 = (double) VAR_1->hardware_power / VAR_0->hardware_power_all;

    const u64 VAR_4 = (u64) FUNC_0 (VAR_2 * VAR_3);



    const u64 VAR_5 = FUNC_1 (VAR_4, VAR_1->hardware_power);



    const u64 VAR_6 = FUNC_2 (VAR_5, VAR_1->kernel_power);

    return VAR_6;
  }

  return VAR_1->kernel_power;
}
