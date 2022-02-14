
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hwrng {int dummy; } ;


 int FUNC_0 (char*,size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,size_t) ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_1, void *VAR_2, size_t VAR_3, bool VAR_4)
{
 size_t VAR_5 = VAR_3 <= VAR_0 ? VAR_3 : VAR_0;

 FUNC_1((u8 *) VAR_2, VAR_5);

 FUNC_0("trng_hwrng_read()=%zu\n", VAR_5);

 return VAR_5;
}
