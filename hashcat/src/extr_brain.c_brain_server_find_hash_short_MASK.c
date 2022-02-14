
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int i64 ;
typedef int brain_server_hash_short_t ;


 int FUNC_0 (int const*,int const*) ;

i64 FUNC_1 (const u32 *VAR_0, const brain_server_hash_short_t *VAR_1, const i64 VAR_2)
{
  for (i64 VAR_3 = 0, VAR_4 = VAR_2; VAR_4; VAR_4 >>= 1)
  {
    const i64 VAR_5 = VAR_4 >> 1;
    const i64 VAR_6 = VAR_3 + VAR_5;

    const int VAR_7 = FUNC_0 (VAR_0, VAR_1 + VAR_6);

    if (VAR_7 > 0)
    {
      VAR_3 += VAR_5 + 1;

      VAR_4--;
    }

    if (VAR_7 == 0) return VAR_6;
  }

  return -1;
}
