
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct skcipher_request {unsigned int cryptlen; TYPE_1__ base; int dst; int src; } ;
struct crypto_skcipher {int dummy; } ;
struct adiantum_tfm_ctx {int streamcipher; int blockcipher; } ;
struct TYPE_5__ {int streamcipher_req; } ;
struct TYPE_6__ {scalar_t__* words; int bytes; int bignum; } ;
struct adiantum_request_ctx {int enc; TYPE_2__ u; TYPE_3__ rbuf; int header_hash; } ;
typedef int le128 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (struct skcipher_request*,int ,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 struct adiantum_tfm_ctx* FUNC_6 (struct crypto_skcipher*) ;
 scalar_t__ FUNC_7 (int *) ;
 struct crypto_skcipher* FUNC_8 (struct skcipher_request*) ;
 int FUNC_9 (int *,int *,int *) ;
 unsigned int FUNC_10 (unsigned int,int ) ;
 int FUNC_11 (int *,int ,unsigned int const,int,int ) ;
 struct adiantum_request_ctx* FUNC_12 (struct skcipher_request*) ;
 int FUNC_13 (int *,int ,int ,struct skcipher_request*) ;
 int FUNC_14 (int *,int ,int ,unsigned int,TYPE_3__*) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static int FUNC_16(struct skcipher_request *VAR_5, bool VAR_6)
{
 struct crypto_skcipher *VAR_7 = FUNC_8(VAR_5);
 const struct adiantum_tfm_ctx *VAR_8 = FUNC_6(VAR_7);
 struct adiantum_request_ctx *VAR_9 = FUNC_12(VAR_5);
 const unsigned int VAR_10 = VAR_5->cryptlen - VAR_0;
 unsigned int VAR_11;
 le128 VAR_12;
 int VAR_13;

 if (VAR_5->cryptlen < VAR_0)
  return -VAR_2;

 VAR_9->enc = VAR_6;






 FUNC_2(VAR_5);
 VAR_13 = FUNC_3(VAR_5, VAR_5->src, &VAR_12);
 if (VAR_13)
  return VAR_13;
 FUNC_9(&VAR_12, &VAR_12, &VAR_9->header_hash);
 FUNC_11(&VAR_9->rbuf.bignum, VAR_5->src,
     VAR_10, VAR_0, 0);
 FUNC_9(&VAR_9->rbuf.bignum, &VAR_9->rbuf.bignum, &VAR_12);


 if (VAR_6)
  FUNC_5(VAR_8->blockcipher, VAR_9->rbuf.bytes,
       VAR_9->rbuf.bytes);


 FUNC_0(VAR_0 != 16);
 FUNC_0(VAR_3 != 32);
 VAR_9->rbuf.words[4] = FUNC_4(1);
 VAR_9->rbuf.words[5] = 0;
 VAR_9->rbuf.words[6] = 0;
 VAR_9->rbuf.words[7] = 0;
 VAR_11 = VAR_10;
 if (FUNC_10(VAR_11, VAR_1) <= VAR_5->cryptlen)
  VAR_11 = FUNC_10(VAR_11, VAR_1);

 FUNC_15(&VAR_9->u.streamcipher_req, VAR_8->streamcipher);
 FUNC_14(&VAR_9->u.streamcipher_req, VAR_5->src,
       VAR_5->dst, VAR_11, &VAR_9->rbuf);
 FUNC_13(&VAR_9->u.streamcipher_req,
          VAR_5->base.flags,
          VAR_4, VAR_5);
 return FUNC_7(&VAR_9->u.streamcipher_req) ?:
  FUNC_1(VAR_5);
}
