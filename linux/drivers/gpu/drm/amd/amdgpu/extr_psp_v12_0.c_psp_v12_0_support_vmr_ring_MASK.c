
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_context {int sos_fw_version; int adev; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct psp_context *VAR_0)
{
 if (FUNC_0(VAR_0->adev) && VAR_0->sos_fw_version > 0x80045)
  return 1;
 return 0;
}
