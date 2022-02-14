
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct hifn_request_context {unsigned int ivsize; scalar_t__ iv; scalar_t__ type; scalar_t__ mode; scalar_t__ op; } ;
struct hifn_context {int keysize; } ;
struct TYPE_2__ {int tfm; } ;
struct ablkcipher_request {scalar_t__ info; TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 struct hifn_request_context* FUNC_0 (struct ablkcipher_request*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct ablkcipher_request*) ;
 struct hifn_context* FUNC_3 (int ) ;
 int FUNC_4 (struct ablkcipher_request*) ;

__attribute__((used)) static int FUNC_5(struct ablkcipher_request *VAR_9, u8 VAR_10,
  u8 VAR_11, u8 VAR_12)
{
 struct hifn_context *VAR_13 = FUNC_3(VAR_9->base.tfm);
 struct hifn_request_context *VAR_14 = FUNC_0(VAR_9);
 unsigned VAR_15;

 VAR_15 = FUNC_1(FUNC_2(VAR_9));

 if (VAR_9->info && VAR_12 != VAR_0) {
  if (VAR_11 == VAR_2)
   VAR_15 = VAR_7;
  else if (VAR_11 == VAR_5)
   VAR_15 = VAR_8;
  else if (VAR_11 == VAR_1)
   VAR_15 = VAR_6;
 }

 if (VAR_13->keysize != 16 && VAR_11 == VAR_2) {
  if (VAR_13->keysize == 24)
   VAR_11 = VAR_3;
  else if (VAR_13->keysize == 32)
   VAR_11 = VAR_4;
 }

 VAR_14->op = VAR_10;
 VAR_14->mode = VAR_12;
 VAR_14->type = VAR_11;
 VAR_14->iv = VAR_9->info;
 VAR_14->ivsize = VAR_15;







 return FUNC_4(VAR_9);
}
