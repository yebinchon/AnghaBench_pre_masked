
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable_guc; char const* huc_firmware_path; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static const char *FUNC_0(void)
{
 if (VAR_1.enable_guc & VAR_0)
  return VAR_1.huc_firmware_path;
 return "";
}
