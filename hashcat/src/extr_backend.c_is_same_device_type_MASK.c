
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_cuda; scalar_t__ is_opencl; scalar_t__ device_processors; scalar_t__ device_maxclock_frequency; scalar_t__ device_maxworkgroup_size; scalar_t__ sm_major; scalar_t__ sm_minor; scalar_t__ kernel_exec_timeout; int opencl_driver_version; int opencl_device_version; int opencl_device_vendor; int device_name; } ;
typedef TYPE_1__ hc_device_param_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1 (const hc_device_param_t *VAR_0, const hc_device_param_t *VAR_1)
{
  if (FUNC_0 (VAR_0->device_name, VAR_1->device_name) != 0) return 0;

  if (VAR_0->is_cuda != VAR_1->is_cuda) return 0;
  if (VAR_0->is_opencl != VAR_1->is_opencl) return 0;

  if (VAR_0->is_cuda == 1)
  {
    if (FUNC_0 (VAR_0->opencl_device_vendor, VAR_1->opencl_device_vendor) != 0) return 0;
    if (FUNC_0 (VAR_0->opencl_device_version, VAR_1->opencl_device_version) != 0) return 0;
    if (FUNC_0 (VAR_0->opencl_driver_version, VAR_1->opencl_driver_version) != 0) return 0;
  }

  if (VAR_0->device_processors != VAR_1->device_processors) return 0;
  if (VAR_0->device_maxclock_frequency != VAR_1->device_maxclock_frequency) return 0;
  if (VAR_0->device_maxworkgroup_size != VAR_1->device_maxworkgroup_size) return 0;





  if (VAR_0->sm_major != VAR_1->sm_major) return 0;
  if (VAR_0->sm_minor != VAR_1->sm_minor) return 0;

  if (VAR_0->kernel_exec_timeout != VAR_1->kernel_exec_timeout) return 0;

  return 1;
}
