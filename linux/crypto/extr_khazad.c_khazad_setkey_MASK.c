
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct khazad_ctx {int* E; int* D; } ;
struct crypto_tfm {int dummy; } ;
typedef int __be32 ;
typedef scalar_t__ K1 ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_0 (int const) ;
 int* VAR_9 ;
 struct khazad_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_10, const u8 *VAR_11,
    unsigned int VAR_12)
{
 struct khazad_ctx *VAR_13 = FUNC_1(VAR_10);
 const __be32 *VAR_14 = (const __be32 *)VAR_11;
 int VAR_15;
 const u64 *VAR_16 = VAR_8;
 u64 VAR_17, VAR_18;


 VAR_17 = ((u64)FUNC_0(VAR_14[0]) << 32) | FUNC_0(VAR_14[1]);
 VAR_18 = ((u64)FUNC_0(VAR_14[2]) << 32) | FUNC_0(VAR_14[3]);


 for (VAR_15 = 0; VAR_15 <= VAR_0; VAR_15++) {
  VAR_13->E[VAR_15] = VAR_1[(int)(VAR_18 >> 56) ] ^
       VAR_2[(int)(VAR_18 >> 48) & 0xff] ^
       VAR_3[(int)(VAR_18 >> 40) & 0xff] ^
       VAR_4[(int)(VAR_18 >> 32) & 0xff] ^
       VAR_5[(int)(VAR_18 >> 24) & 0xff] ^
       VAR_6[(int)(VAR_18 >> 16) & 0xff] ^
       VAR_7[(int)(VAR_18 >> 8) & 0xff] ^
       VAR_8[(int)(VAR_18 ) & 0xff] ^
       VAR_9[VAR_15] ^ VAR_17;
  VAR_17 = VAR_18;
  VAR_18 = VAR_13->E[VAR_15];
 }

 VAR_13->D[0] = VAR_13->E[VAR_0];
 for (VAR_15 = 1; VAR_15 < VAR_0; VAR_15++) {
  VAR_18 = VAR_13->E[VAR_0 - VAR_15];
  VAR_13->D[VAR_15] = VAR_1[(int)VAR_16[(int)(VAR_18 >> 56) ] & 0xff] ^
       VAR_2[(int)VAR_16[(int)(VAR_18 >> 48) & 0xff] & 0xff] ^
       VAR_3[(int)VAR_16[(int)(VAR_18 >> 40) & 0xff] & 0xff] ^
       VAR_4[(int)VAR_16[(int)(VAR_18 >> 32) & 0xff] & 0xff] ^
       VAR_5[(int)VAR_16[(int)(VAR_18 >> 24) & 0xff] & 0xff] ^
       VAR_6[(int)VAR_16[(int)(VAR_18 >> 16) & 0xff] & 0xff] ^
       VAR_7[(int)VAR_16[(int)(VAR_18 >> 8) & 0xff] & 0xff] ^
       VAR_8[(int)VAR_16[(int)(VAR_18 ) & 0xff] & 0xff];
 }
 VAR_13->D[VAR_0] = VAR_13->E[0];

 return 0;

}
