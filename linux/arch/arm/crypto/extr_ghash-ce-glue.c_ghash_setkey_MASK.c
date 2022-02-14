
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ghash_key {int h4; int k; int h3; int h2; int h; } ;
struct crypto_shash {int dummy; } ;
typedef int be128 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct ghash_key* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct crypto_shash *VAR_3,
   const u8 *VAR_4, unsigned int VAR_5)
{
 struct ghash_key *VAR_6 = FUNC_0(VAR_3);
 be128 VAR_7;

 if (VAR_5 != VAR_2) {
  FUNC_1(VAR_3, VAR_0);
  return -VAR_1;
 }


 FUNC_4(&VAR_6->k, VAR_4, VAR_2);
 FUNC_3(VAR_6->h, &VAR_6->k);

 VAR_7 = VAR_6->k;
 FUNC_2(&VAR_7, &VAR_6->k);
 FUNC_3(VAR_6->h2, &VAR_7);

 FUNC_2(&VAR_7, &VAR_6->k);
 FUNC_3(VAR_6->h3, &VAR_7);

 FUNC_2(&VAR_7, &VAR_6->k);
 FUNC_3(VAR_6->h4, &VAR_7);

 return 0;
}
