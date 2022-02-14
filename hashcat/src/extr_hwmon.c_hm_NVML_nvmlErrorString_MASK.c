
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvmlReturn_t ;
struct TYPE_3__ {char const* (* nvmlErrorString ) (int const) ;} ;
typedef TYPE_1__ NVML_PTR ;


 char const* FUNC_0 (int const) ;

__attribute__((used)) static const char *FUNC_1 (NVML_PTR *VAR_0, const nvmlReturn_t VAR_1)
{
  return VAR_0->nvmlErrorString (VAR_1);
}
