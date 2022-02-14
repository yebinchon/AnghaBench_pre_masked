
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct atmel_aes_gcm_ctx {scalar_t__ textlen; int dst; int src; } ;
struct TYPE_2__ {scalar_t__ has_dualbuff; } ;
struct atmel_aes_dev {scalar_t__ datalen; int data; int (* resume ) (struct atmel_aes_dev*) ;TYPE_1__ caps; int areq; int ctx; } ;
struct aead_request {int assoclen; int dst; int src; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct aead_request* FUNC_1 (int ) ;
 int FUNC_2 (struct atmel_aes_dev*,struct scatterlist*,struct scatterlist*,scalar_t__,int (*) (struct atmel_aes_dev*)) ;
 int FUNC_3 (struct atmel_aes_dev*,struct scatterlist*,struct scatterlist*,scalar_t__,int (*) (struct atmel_aes_dev*)) ;
 struct atmel_aes_gcm_ctx* FUNC_4 (int ) ;
 int FUNC_5 (struct atmel_aes_dev*) ;
 int FUNC_6 (struct atmel_aes_dev*,int ) ;
 int FUNC_7 (struct atmel_aes_dev*,int ,int) ;
 int FUNC_8 (struct atmel_aes_dev*,int ,int) ;
 struct scatterlist* FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct atmel_aes_dev *VAR_10)
{
 struct atmel_aes_gcm_ctx *VAR_11 = FUNC_4(VAR_10->ctx);
 struct aead_request *VAR_12 = FUNC_1(VAR_10->areq);
 bool VAR_13 = (VAR_11->textlen >= VAR_8);
 struct scatterlist *VAR_14, *VAR_15;
 u32 VAR_16, VAR_17;


 while (VAR_10->datalen > 0) {
  FUNC_8(VAR_10, FUNC_0(0), VAR_10->data);
  VAR_10->data += 4;
  VAR_10->datalen -= VAR_0;

  VAR_16 = FUNC_6(VAR_10, VAR_3);
  if (!(VAR_16 & VAR_2)) {
   VAR_10->resume = FUNC_11;
   FUNC_7(VAR_10, VAR_1, VAR_2);
   return -VAR_9;
  }
 }


 if (FUNC_10(VAR_11->textlen == 0))
  return FUNC_5(VAR_10);


 VAR_14 = FUNC_9(VAR_11->src, VAR_12->src, VAR_12->assoclen);
 VAR_15 = ((VAR_12->src == VAR_12->dst) ? VAR_14 :
        FUNC_9(VAR_11->dst, VAR_12->dst, VAR_12->assoclen));

 if (VAR_13) {

  VAR_17 = FUNC_6(VAR_10, VAR_4);
  VAR_17 &= ~(VAR_7 | VAR_5);
  VAR_17 |= VAR_6;
  if (VAR_10->caps.has_dualbuff)
   VAR_17 |= VAR_5;
  FUNC_7(VAR_10, VAR_4, VAR_17);

  return FUNC_3(VAR_10, VAR_14, VAR_15, VAR_11->textlen,
        FUNC_5);
 }

 return FUNC_2(VAR_10, VAR_14, VAR_15, VAR_11->textlen,
       FUNC_5);
}
