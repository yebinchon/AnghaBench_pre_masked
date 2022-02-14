
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int tfm; } ;
typedef TYPE_2__ u8 ;
struct iproc_ctx_s {TYPE_2__* shash; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_8__ {int flags; } ;
struct ahash_request {int result; int nbytes; scalar_t__ src; TYPE_1__ base; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ahash_request*) ;
 struct iproc_ctx_s* FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__,int,TYPE_2__*,int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (struct iproc_ctx_s*) ;

__attribute__((used)) static int FUNC_10(struct ahash_request *VAR_6)
{
 struct crypto_ahash *VAR_7 = FUNC_2(VAR_6);
 struct iproc_ctx_s *VAR_8 = FUNC_1(VAR_7);
 u8 *VAR_9;
 int VAR_10;
 int VAR_11;
 gfp_t VAR_12;

 if (FUNC_9(VAR_8)) {





  if (VAR_6->src) {
   VAR_11 = FUNC_8(VAR_6->src);
  } else {
   VAR_10 = -VAR_2;
   goto ahash_finup_exit;
  }


  VAR_12 = (VAR_6->base.flags & (VAR_0 |
         VAR_1)) ? VAR_5 : VAR_4;
  VAR_9 = FUNC_6(VAR_6->nbytes, VAR_12);
  if (!VAR_9) {
   VAR_10 = -VAR_3;
   goto ahash_finup_exit;
  }

  if (FUNC_7(VAR_6->src, VAR_11, VAR_9, VAR_6->nbytes) !=
    VAR_6->nbytes) {
   VAR_10 = -VAR_2;
   goto ahash_finup_free;
  }


  VAR_10 = FUNC_4(VAR_8->shash, VAR_9, VAR_6->nbytes,
      VAR_6->result);
 } else {

  return FUNC_0(VAR_6);
 }
ahash_finup_free:
 FUNC_5(VAR_9);

ahash_finup_exit:

 FUNC_3(VAR_8->shash->tfm);
 FUNC_5(VAR_8->shash);
 return VAR_10;
}
