
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ix_sa_dir {int npe_ctx_idx; int npe_mode; int * npe_ctx; } ;
struct ixp_ctx {struct ix_sa_dir decrypt; struct ix_sa_dir encrypt; } ;
struct crypto_tfm {int crt_flags; } ;
typedef int cipher_cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct crypto_tfm*,int const*) ;
 struct ixp_ctx* FUNC_4 (struct crypto_tfm*) ;
 int FUNC_5 (struct crypto_tfm*) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static int FUNC_8(struct crypto_tfm *VAR_9, int VAR_10,
  const u8 *VAR_11, int VAR_12)
{
 u8 *VAR_13;
 u32 VAR_14;
 u32 VAR_15 = 0;
 struct ix_sa_dir *VAR_16;
 struct ixp_ctx *VAR_17 = FUNC_4(VAR_9);
 u32 *VAR_18 = &VAR_9->crt_flags;

 VAR_16 = VAR_10 ? &VAR_17->encrypt : &VAR_17->decrypt;
 VAR_13 = VAR_16->npe_ctx;

 if (VAR_10) {
  VAR_14 = FUNC_1(VAR_9);
  VAR_16->npe_mode |= VAR_8;
 } else {
  VAR_14 = FUNC_0(VAR_9);
 }
 if (VAR_14 & VAR_3) {
  switch (VAR_12) {
  case 16: VAR_15 = VAR_4; break;
  case 24: VAR_15 = VAR_5; break;
  case 32: VAR_15 = VAR_6; break;
  default:
   *VAR_18 |= VAR_0;
   return -VAR_2;
  }
  VAR_14 |= VAR_15;
 } else {
  FUNC_3(VAR_9, VAR_11);
 }

 *(u32*)VAR_13 = FUNC_2(VAR_14);
 VAR_13 += sizeof(VAR_14);


 FUNC_6(VAR_13, VAR_11, VAR_12);

 if (VAR_12 < VAR_1 && !(VAR_14 & VAR_3)) {
  FUNC_7(VAR_13 + VAR_12, 0, VAR_1 -VAR_12);
  VAR_12 = VAR_1;
 }
 VAR_16->npe_ctx_idx = sizeof(VAR_14) + VAR_12;
 VAR_16->npe_mode |= VAR_7;
 if ((VAR_14 & VAR_3) && !VAR_10) {
  return FUNC_5(VAR_9);
 }
 return 0;
}
