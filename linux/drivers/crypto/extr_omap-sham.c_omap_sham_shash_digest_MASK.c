
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct crypto_shash {int dummy; } ;
struct TYPE_4__ {struct crypto_shash* tfm; } ;


 int FUNC_0 (TYPE_1__*,struct crypto_shash*) ;
 int FUNC_1 (TYPE_1__*,int const*,unsigned int,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct crypto_shash *VAR_1, u32 VAR_2,
      const u8 *VAR_3, unsigned int VAR_4, u8 *VAR_5)
{
 FUNC_0(VAR_0, VAR_1);

 VAR_0->tfm = VAR_1;

 return FUNC_1(VAR_0, VAR_3, VAR_4, VAR_5);
}
