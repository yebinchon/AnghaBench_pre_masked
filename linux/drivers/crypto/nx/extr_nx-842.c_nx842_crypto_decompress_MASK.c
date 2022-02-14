
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct nx842_crypto_param {unsigned int iremain; unsigned int oremain; unsigned int ototal; int * out; int * in; } ;
struct nx842_crypto_header_group {int uncompressed_length; int compressed_length; int padding; } ;
struct nx842_crypto_header {int groups; struct nx842_crypto_header_group* group; int ignore; int magic; } ;
struct nx842_crypto_ctx {int lock; struct nx842_crypto_header header; TYPE_1__* driver; } ;
struct nx842_constraints {int dummy; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_2__ {struct nx842_constraints* constraints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct nx842_constraints*) ;
 int FUNC_3 (unsigned int) ;
 struct nx842_crypto_ctx* FUNC_4 (struct crypto_tfm*) ;
 int FUNC_5 (struct nx842_crypto_ctx*,struct nx842_crypto_param*,struct nx842_crypto_header_group*,struct nx842_constraints*,scalar_t__) ;
 int FUNC_6 (struct nx842_crypto_header*,int const*,int) ;
 int FUNC_7 (char*,unsigned int,unsigned int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct crypto_tfm *VAR_4,
       const u8 *VAR_5, unsigned int VAR_6,
       u8 *VAR_7, unsigned int *VAR_8)
{
 struct nx842_crypto_ctx *VAR_9 = FUNC_4(VAR_4);
 struct nx842_crypto_header *VAR_10;
 struct nx842_crypto_param VAR_11;
 struct nx842_constraints VAR_12 = *VAR_9->driver->constraints;
 int VAR_13, VAR_14, VAR_15;
 u16 VAR_16 = 0;

 FUNC_2(&VAR_12);

 VAR_11.in = (u8 *)VAR_5;
 VAR_11.iremain = VAR_6;
 VAR_11.out = VAR_7;
 VAR_11.oremain = *VAR_8;
 VAR_11.ototal = 0;

 *VAR_8 = 0;

 VAR_10 = (struct nx842_crypto_header *)VAR_5;

 FUNC_9(&VAR_9->lock);




 if (FUNC_1(VAR_10->magic) != VAR_3) {
  struct nx842_crypto_header_group VAR_17 = {
   .padding = 0,
   .compressed_length = FUNC_3(VAR_11.iremain),
   .uncompressed_length = FUNC_3(VAR_11.oremain),
  };

  VAR_14 = FUNC_5(VAR_9, &VAR_11, &VAR_17, &VAR_12, 0);
  if (VAR_14)
   goto unlock;

  goto success;
 }

 if (!VAR_10->groups) {
  FUNC_8("header has no groups\n");
  VAR_14 = -VAR_0;
  goto unlock;
 }
 if (VAR_10->groups > VAR_2) {
  FUNC_8("header has too many groups %x, max %x\n",
         VAR_10->groups, VAR_2);
  VAR_14 = -VAR_0;
  goto unlock;
 }

 VAR_15 = FUNC_0(VAR_10->groups);
 if (VAR_15 > VAR_6) {
  VAR_14 = -VAR_1;
  goto unlock;
 }

 FUNC_6(&VAR_9->header, VAR_5, VAR_15);
 VAR_10 = &VAR_9->header;

 for (VAR_13 = 0; VAR_13 < VAR_10->groups; VAR_13++) {

  if (VAR_13 + 1 == VAR_10->groups)
   VAR_16 = FUNC_1(VAR_10->ignore);

  VAR_14 = FUNC_5(VAR_9, &VAR_11, &VAR_10->group[VAR_13], &VAR_12, VAR_16);
  if (VAR_14)
   goto unlock;
 }

success:
 *VAR_8 = VAR_11.ototal;

 FUNC_7("decompress total slen %x dlen %x\n", VAR_6, *VAR_8);

 VAR_14 = 0;

unlock:
 FUNC_10(&VAR_9->lock);

 return VAR_14;
}
