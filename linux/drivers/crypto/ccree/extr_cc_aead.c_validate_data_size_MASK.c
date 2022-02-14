
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct cc_aead_ctx {unsigned int authsize; int flow_mode; int cipher_mode; int drvdata; } ;
struct aead_request {unsigned int cryptlen; } ;
struct aead_req_ctx {unsigned int assoclen; int is_single_pass; int plaintext_authenticate_only; } ;
typedef enum drv_crypto_direction { ____Placeholder_drv_crypto_direction } drv_crypto_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int,int) ;


 struct aead_req_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct cc_aead_ctx *VAR_8,
         enum drv_crypto_direction VAR_9,
         struct aead_request *VAR_10)
{
 struct aead_req_ctx *VAR_11 = FUNC_1(VAR_10);
 struct device *VAR_12 = FUNC_3(VAR_8->drvdata);
 unsigned int VAR_13 = VAR_11->assoclen;
 unsigned int VAR_14 = (VAR_9 == VAR_6) ?
   (VAR_10->cryptlen - VAR_8->authsize) : VAR_10->cryptlen;

 if (VAR_9 == VAR_6 &&
     VAR_10->cryptlen < VAR_8->authsize)
  goto data_size_err;

 VAR_11->is_single_pass = 1;

 switch (VAR_8->flow_mode) {
 case 129:
  if (VAR_8->cipher_mode == VAR_2 &&
      !FUNC_0(VAR_14, VAR_0))
   goto data_size_err;
  if (VAR_8->cipher_mode == VAR_3)
   break;
  if (VAR_8->cipher_mode == VAR_5) {
   if (VAR_11->plaintext_authenticate_only)
    VAR_11->is_single_pass = 0;
   break;
  }

  if (!FUNC_0(VAR_13, sizeof(u32)))
   VAR_11->is_single_pass = 0;

  if (VAR_8->cipher_mode == VAR_4 &&
      !FUNC_0(VAR_14, sizeof(u32)))
   VAR_11->is_single_pass = 0;

  break;
 case 128:
  if (!FUNC_0(VAR_14, VAR_1))
   goto data_size_err;
  if (!FUNC_0(VAR_13, VAR_1))
   VAR_11->is_single_pass = 0;
  break;
 default:
  FUNC_2(VAR_12, "Unexpected flow mode (%d)\n", VAR_8->flow_mode);
  goto data_size_err;
 }

 return 0;

data_size_err:
 return -VAR_7;
}
