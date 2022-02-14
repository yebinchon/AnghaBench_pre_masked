
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s390_xts_ctx {unsigned long fc; unsigned int key_len; int pcc_key; int key; } ;
struct crypto_tfm {int crt_flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,unsigned long) ;
 struct s390_xts_ctx* FUNC_1 (struct crypto_tfm*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (struct crypto_tfm*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_6, const u8 *VAR_7,
      unsigned int VAR_8)
{
 struct s390_xts_ctx *VAR_9 = FUNC_1(VAR_6);
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_6, VAR_7, VAR_8);
 if (VAR_11)
  return VAR_11;


 if (VAR_4 && VAR_8 != 32 && VAR_8 != 64) {
  VAR_6->crt_flags |= VAR_2;
  return -VAR_3;
 }


 VAR_10 = (VAR_8 == 32) ? VAR_0 :
      (VAR_8 == 64) ? VAR_1 : 0;


 VAR_9->fc = (VAR_10 && FUNC_0(&VAR_5, VAR_10)) ? VAR_10 : 0;
 if (!VAR_9->fc)
  return 0;


 VAR_8 = VAR_8 / 2;
 VAR_9->key_len = VAR_8;
 FUNC_2(VAR_9->key, VAR_7, VAR_8);
 FUNC_2(VAR_9->pcc_key, VAR_7 + VAR_8, VAR_8);
 return 0;
}
