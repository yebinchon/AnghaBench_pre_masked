
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nhpoly1305_key {int * nh_key; int poly_key; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nhpoly1305_key* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int const*) ;

int FUNC_3(struct crypto_shash *VAR_4,
        const u8 *VAR_5, unsigned int VAR_6)
{
 struct nhpoly1305_key *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 if (VAR_6 != VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_7->poly_key, VAR_5);
 VAR_5 += VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_7->nh_key[VAR_8] = FUNC_1(VAR_5 + VAR_8 * sizeof(u32));

 return 0;
}
