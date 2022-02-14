
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable_guc; char const* guc_firmware_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static const char *FUNC_0(void)
{
 if (VAR_2.enable_guc & (VAR_1 |
      VAR_0))
  return VAR_2.guc_firmware_path;
 return "";
}
