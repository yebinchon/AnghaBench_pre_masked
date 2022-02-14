
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_ctr32; } ;
struct atmel_aes_dev {scalar_t__ total; TYPE_1__ caps; int areq; int ctx; } ;
struct atmel_aes_ctr_ctx {scalar_t__ offset; int * iv; int dst; int src; } ;
struct ablkcipher_request {scalar_t__ nbytes; int dst; int src; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t,int) ;
 struct ablkcipher_request* FUNC_1 (int ) ;
 int FUNC_2 (struct atmel_aes_dev*,struct scatterlist*,struct scatterlist*,size_t,int (*) (struct atmel_aes_dev*)) ;
 struct atmel_aes_ctr_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct atmel_aes_dev*,struct scatterlist*,struct scatterlist*,size_t,int (*) (struct atmel_aes_dev*)) ;
 int FUNC_5 (struct atmel_aes_dev*) ;
 int FUNC_6 (struct atmel_aes_dev*,int,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int) ;
 struct scatterlist* FUNC_10 (int ,int ,size_t) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct atmel_aes_dev *VAR_2)
{
 struct atmel_aes_ctr_ctx *VAR_3 = FUNC_3(VAR_2->ctx);
 struct ablkcipher_request *VAR_4 = FUNC_1(VAR_2->areq);
 struct scatterlist *VAR_5, *VAR_6;
 u32 VAR_7, VAR_8;
 size_t VAR_9;
 bool VAR_10, VAR_11 = 0;


 VAR_3->offset += VAR_2->total;
 if (VAR_3->offset >= VAR_4->nbytes)
  return FUNC_5(VAR_2);


 VAR_9 = VAR_4->nbytes - VAR_3->offset;
 VAR_8 = FUNC_0(VAR_9, VAR_0);
 VAR_7 = FUNC_7(VAR_3->iv[3]);
 if (VAR_2->caps.has_ctr32) {

  u32 VAR_12 = VAR_7;
  u32 VAR_13 = VAR_12 + VAR_8 - 1;

  if (VAR_13 < VAR_12) {
   VAR_7 |= 0xffffffff;
   VAR_9 = VAR_0 * -VAR_12;
   VAR_11 = 1;
  }
 } else {

  u16 VAR_14 = VAR_7 & 0xffff;
  u16 VAR_15 = VAR_14 + (u16)VAR_8 - 1;

  if (VAR_8 >> 16 || VAR_15 < VAR_14) {
   VAR_7 |= 0xffff;
   VAR_9 = VAR_0 * (0x10000-VAR_14);
   VAR_11 = 1;
  }
 }
 VAR_10 = (VAR_9 >= VAR_1);


 VAR_5 = FUNC_10(VAR_3->src, VAR_4->src, VAR_3->offset);
 VAR_6 = ((VAR_4->src == VAR_4->dst) ? VAR_5 :
        FUNC_10(VAR_3->dst, VAR_4->dst, VAR_3->offset));


 FUNC_6(VAR_2, VAR_10, VAR_3->iv);
 if (FUNC_11(VAR_11)) {




  VAR_3->iv[3] = FUNC_8(VAR_7);
  FUNC_9((u8 *)VAR_3->iv, VAR_0);
 }

 if (VAR_10)
  return FUNC_4(VAR_2, VAR_5, VAR_6, VAR_9,
        FUNC_12);

 return FUNC_2(VAR_2, VAR_5, VAR_6, VAR_9,
       FUNC_12);
}
