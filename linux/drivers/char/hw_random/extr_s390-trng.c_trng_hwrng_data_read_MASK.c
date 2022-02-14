
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hwrng {int dummy; } ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int *,size_t) ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_0, u32 *VAR_1)
{
 size_t VAR_2 = sizeof(*VAR_1);

 FUNC_1((u8 *) VAR_1, VAR_2);

 FUNC_0("trng_hwrng_data_read()=%zu\n", VAR_2);

 return VAR_2;
}
