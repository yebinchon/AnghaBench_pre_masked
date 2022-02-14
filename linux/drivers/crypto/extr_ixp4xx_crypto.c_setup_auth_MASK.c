
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ix_sa_dir {unsigned char* npe_ctx; int npe_ctx_idx; int npe_ctx_phys; int npe_mode; } ;
struct ixp_ctx {struct ix_sa_dir decrypt; struct ix_sa_dir encrypt; } ;
struct ix_hash_algo {unsigned int cfgword; int icv; } ;
struct crypto_tfm {int dummy; } ;
typedef int cfgword ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct ixp_ctx* FUNC_1 (struct crypto_tfm*) ;
 struct ix_hash_algo* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (unsigned char*,int ,unsigned int) ;
 int FUNC_4 (struct crypto_tfm*,int ,int,int,int,int const*,int) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_4, int VAR_5, unsigned VAR_6,
  const u8 *VAR_7, int VAR_8, unsigned VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;
 unsigned char *VAR_13;
 int VAR_14, VAR_15 = 0;
 u32 VAR_16;
 struct ix_sa_dir *VAR_17;
 struct ixp_ctx *VAR_18 = FUNC_1(VAR_4);
 const struct ix_hash_algo *VAR_19;

 VAR_17 = VAR_5 ? &VAR_18->encrypt : &VAR_18->decrypt;
 VAR_13 = VAR_17->npe_ctx + VAR_17->npe_ctx_idx;
 VAR_19 = FUNC_2(VAR_4);


 VAR_16 = VAR_19->cfgword | ( VAR_6 << 6);

 VAR_16 ^= 0xAA000000;

 *(u32*)VAR_13 = FUNC_0(VAR_16);
 VAR_13 += sizeof(VAR_16);


 FUNC_3(VAR_13, VAR_19->icv, VAR_9);
 VAR_13 += VAR_9;

 VAR_10 = VAR_17->npe_ctx_phys + VAR_17->npe_ctx_idx
    + sizeof(VAR_19->cfgword);
 VAR_11 = VAR_10 + VAR_9;
 VAR_14 = VAR_13 - (VAR_17->npe_ctx + VAR_17->npe_ctx_idx);
 VAR_12 = VAR_17->npe_ctx_phys + VAR_17->npe_ctx_idx;

 VAR_17->npe_ctx_idx += VAR_14;
 VAR_17->npe_mode |= VAR_2;

 if (!VAR_5)
  VAR_17->npe_mode |= VAR_3;

 VAR_15 = FUNC_4(VAR_4, VAR_1, VAR_11,
   VAR_14, VAR_12, VAR_7, VAR_8);
 if (VAR_15)
  return VAR_15;
 return FUNC_4(VAR_4, VAR_0, VAR_10,
   VAR_14, VAR_12, VAR_7, VAR_8);
}
