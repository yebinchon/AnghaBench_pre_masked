
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int crt_flags; } ;


 int FUNC_0 (int ,int const*,unsigned int,int *) ;
 int FUNC_1 (struct crypto_tfm*) ;

int FUNC_2(struct crypto_tfm *VAR_0, const u8 *VAR_1, unsigned int VAR_2)
{
 return FUNC_0(FUNC_1(VAR_0), VAR_1, VAR_2,
         &VAR_0->crt_flags);
}
