
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_conf {char* csums_alg; char* verify_alg; char* integrity_alg; scalar_t__* cram_hmac_alg; } ;
struct crypto {int cram_hmac_tfm; int integrity_tfm; int verify_tfm; int csums_tfm; } ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (char*,int,char*,scalar_t__*) ;

__attribute__((used)) static enum drbd_ret_code
FUNC_2(struct crypto *VAR_6, struct net_conf *VAR_7)
{
 char VAR_8[VAR_0];
 enum drbd_ret_code VAR_9;

 VAR_9 = FUNC_0(&VAR_6->csums_tfm, VAR_7->csums_alg,
    VAR_2);
 if (VAR_9 != VAR_5)
  return VAR_9;
 VAR_9 = FUNC_0(&VAR_6->verify_tfm, VAR_7->verify_alg,
    VAR_4);
 if (VAR_9 != VAR_5)
  return VAR_9;
 VAR_9 = FUNC_0(&VAR_6->integrity_tfm, VAR_7->integrity_alg,
    VAR_3);
 if (VAR_9 != VAR_5)
  return VAR_9;
 if (VAR_7->cram_hmac_alg[0] != 0) {
  FUNC_1(VAR_8, VAR_0, "hmac(%s)",
    VAR_7->cram_hmac_alg);

  VAR_9 = FUNC_0(&VAR_6->cram_hmac_tfm, VAR_8,
     VAR_1);
 }

 return VAR_9;
}
