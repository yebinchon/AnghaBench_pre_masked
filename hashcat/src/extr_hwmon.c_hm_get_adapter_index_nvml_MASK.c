
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int hashcat_ctx_t ;
typedef int HM_ADAPTER_NVML ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,unsigned int*) ;
 int FUNC_2 (int *,unsigned int,int *) ;

__attribute__((used)) static int FUNC_3 (hashcat_ctx_t *VAR_0, HM_ADAPTER_NVML *VAR_1)
{
  unsigned int VAR_2 = 0;

  FUNC_1 (VAR_0, &VAR_2);

  if (VAR_2 == 0)
  {
    FUNC_0 (VAR_0, "No NVML adapters found.");

    return 0;
  }

  for (u32 VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  {
    if (FUNC_2 (VAR_0, VAR_3, &VAR_1[VAR_3]) == -1) break;




  }

  return (VAR_2);
}
