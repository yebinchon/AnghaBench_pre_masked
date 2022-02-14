
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha256_state {int count; scalar_t__ state; } ;
typedef int bits ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct shash_desc*,int const*,int) ;
 scalar_t__ FUNC_3 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct sha256_state *VAR_2 =
  (struct sha256_state *)FUNC_3(VAR_0);
 unsigned int VAR_3, VAR_4;
 __be64 VAR_5;
 static const u8 VAR_6[64] = { 0x80, };

 VAR_5 = FUNC_0(VAR_2->count << 3);


 VAR_3 = VAR_2->count & 0x3f;
 VAR_4 = (VAR_3 < 56) ? (56 - VAR_3) : ((64+56) - VAR_3);
 FUNC_2(VAR_0, VAR_6, VAR_4);


 FUNC_2(VAR_0, (const u8 *)&VAR_5, sizeof(VAR_5));


 FUNC_1((uint32_t *)(VAR_2->state), (uint32_t *)VAR_1, 8);

 return 0;
}
