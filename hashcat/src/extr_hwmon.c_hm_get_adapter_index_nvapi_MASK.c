
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashcat_ctx_t ;
typedef scalar_t__ NvU32 ;
typedef int HM_ADAPTER_NVAPI ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,scalar_t__*) ;

__attribute__((used)) static int FUNC_2 (hashcat_ctx_t *VAR_0, HM_ADAPTER_NVAPI *VAR_1)
{
  NvU32 VAR_2;

  if (FUNC_1 (VAR_0, VAR_1, &VAR_2) == -1) return 0;

  if (VAR_2 == 0)
  {
    FUNC_0 (VAR_0, "No NvAPI adapters found.");

    return 0;
  }

  return (VAR_2);
}
