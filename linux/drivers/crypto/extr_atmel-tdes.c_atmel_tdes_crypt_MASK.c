
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_tdes_reqctx {unsigned long mode; } ;
struct atmel_tdes_ctx {int dd; void* block_size; } ;
struct ablkcipher_request {int nbytes; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void*) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 struct atmel_tdes_reqctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (int ,struct ablkcipher_request*) ;
 struct atmel_tdes_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct ablkcipher_request*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct ablkcipher_request *VAR_8, unsigned long VAR_9)
{
 struct atmel_tdes_ctx *VAR_10 = FUNC_3(
   FUNC_4(VAR_8));
 struct atmel_tdes_reqctx *VAR_11 = FUNC_1(VAR_8);

 if (VAR_9 & VAR_7) {
  if (!FUNC_0(VAR_8->nbytes, VAR_2)) {
   FUNC_5("request size is not exact amount of CFB8 blocks\n");
   return -VAR_4;
  }
  VAR_10->block_size = VAR_2;
 } else if (VAR_9 & VAR_5) {
  if (!FUNC_0(VAR_8->nbytes, VAR_0)) {
   FUNC_5("request size is not exact amount of CFB16 blocks\n");
   return -VAR_4;
  }
  VAR_10->block_size = VAR_0;
 } else if (VAR_9 & VAR_6) {
  if (!FUNC_0(VAR_8->nbytes, VAR_1)) {
   FUNC_5("request size is not exact amount of CFB32 blocks\n");
   return -VAR_4;
  }
  VAR_10->block_size = VAR_1;
 } else {
  if (!FUNC_0(VAR_8->nbytes, VAR_3)) {
   FUNC_5("request size is not exact amount of DES blocks\n");
   return -VAR_4;
  }
  VAR_10->block_size = VAR_3;
 }

 VAR_11->mode = VAR_9;

 return FUNC_2(VAR_10->dd, VAR_8);
}
