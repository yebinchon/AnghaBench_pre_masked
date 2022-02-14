
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int* kernel_params_buf32; int const hardware_power; double spin_damp; } ;
typedef TYPE_1__ hc_device_param_t ;
struct TYPE_10__ {scalar_t__ attack_exec; int opti_type; } ;
typedef TYPE_2__ hashconfig_t ;
struct TYPE_11__ {TYPE_2__* hashconfig; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 double FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,int ,int const,int,int ) ;

__attribute__((used)) static double FUNC_2 (hashcat_ctx_t *VAR_5, hc_device_param_t *VAR_6, const u32 VAR_7, const u32 VAR_8)
{
  hashconfig_t *VAR_9 = VAR_5->hashconfig;

  VAR_6->kernel_params_buf32[28] = 0;
  VAR_6->kernel_params_buf32[29] = VAR_8;
  VAR_6->kernel_params_buf32[30] = VAR_8;

  const u32 VAR_10 = VAR_6->hardware_power * VAR_7;

  const double VAR_11 = VAR_6->spin_damp;

  VAR_6->spin_damp = 0;

  if (VAR_9->attack_exec == VAR_0)
  {
    if (VAR_9->opti_type & VAR_4)
    {
      FUNC_1 (VAR_5, VAR_6, VAR_1, VAR_10, 1, 0);
    }
    else
    {
      FUNC_1 (VAR_5, VAR_6, VAR_3, VAR_10, 1, 0);
    }
  }
  else
  {
    FUNC_1 (VAR_5, VAR_6, VAR_2, VAR_10, 1, 0);
  }

  VAR_6->spin_damp = VAR_11;

  const double VAR_12 = FUNC_0 (VAR_6, 1);

  return VAR_12;
}
