
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;
typedef int BIGNUM ;



__attribute__((used)) static BN_ULONG
FUNC_0(BIGNUM *VAR_0, BN_ULONG VAR_1)
{
 BN_ULONG VAR_2;

 VAR_2 = *VAR_0 % VAR_1;
 *VAR_0 /= VAR_1;
 return VAR_2;
}
