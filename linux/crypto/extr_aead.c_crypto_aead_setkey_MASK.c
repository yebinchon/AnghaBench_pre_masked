
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int (* setkey ) (struct crypto_aead*,int const*,unsigned int) ;} ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct crypto_aead*) ;
 unsigned long FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int ) ;
 int FUNC_3 (struct crypto_aead*,int ) ;
 int FUNC_4 (struct crypto_aead*,int const*,unsigned int) ;
 int FUNC_5 (struct crypto_aead*,int const*,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct crypto_aead *VAR_1,
         const u8 *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 if ((unsigned long)VAR_2 & VAR_4)
  VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3);
 else
  VAR_5 = FUNC_0(VAR_1)->setkey(VAR_1, VAR_2, VAR_3);

 if (FUNC_6(VAR_5)) {
  FUNC_3(VAR_1, VAR_0);
  return VAR_5;
 }

 FUNC_2(VAR_1, VAR_0);
 return 0;
}
