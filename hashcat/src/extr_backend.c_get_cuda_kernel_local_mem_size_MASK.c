
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int hashcat_ctx_t ;
typedef int CUfunction ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int ,int ) ;

__attribute__((used)) static int FUNC_1 (hashcat_ctx_t *VAR_1, CUfunction VAR_2, u64 *VAR_3)
{
  int VAR_4;

  if (FUNC_0 (VAR_1, &VAR_4, VAR_0, VAR_2) == -1) return -1;

  *VAR_3 = (u64) VAR_4;

  return 0;
}
