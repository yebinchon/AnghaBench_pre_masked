
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha256_state {int count; int * state; } ;
struct octeon_cop2_state {int dummy; } ;
typedef int bits ;
typedef int __be64 ;
typedef int __be32 ;


 int FUNC_0 (struct sha256_state*,int const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sha256_state*,int ,int) ;
 int FUNC_4 (struct octeon_cop2_state*,unsigned long) ;
 unsigned long FUNC_5 (struct octeon_cop2_state*) ;
 int FUNC_6 (struct sha256_state*) ;
 int FUNC_7 (struct sha256_state*) ;
 struct sha256_state* FUNC_8 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_9(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct sha256_state *VAR_2 = FUNC_8(VAR_0);
 static const u8 VAR_3[64] = { 0x80, };
 struct octeon_cop2_state VAR_4;
 __be32 *VAR_5 = (__be32 *)VAR_1;
 unsigned int VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;
 __be64 VAR_9;
 int VAR_10;


 VAR_9 = FUNC_2(VAR_2->count << 3);


 VAR_8 = VAR_2->count & 0x3f;
 VAR_6 = (VAR_8 < 56) ? (56 - VAR_8) : ((64+56) - VAR_8);

 VAR_7 = FUNC_5(&VAR_4);
 FUNC_7(VAR_2);

 FUNC_0(VAR_2, VAR_3, VAR_6);


 FUNC_0(VAR_2, (const u8 *)&VAR_9, sizeof(VAR_9));

 FUNC_6(VAR_2);
 FUNC_4(&VAR_4, VAR_7);


 for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
  VAR_5[VAR_10] = FUNC_1(VAR_2->state[VAR_10]);


 FUNC_3(VAR_2, 0, sizeof(*VAR_2));

 return 0;
}
