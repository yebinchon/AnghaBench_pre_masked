
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct spu_queue {int tail; int lock; struct cwq_initial_entry* q; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_7__ {int nbytes; int result; int src; TYPE_1__ base; } ;
struct n2_hash_req_ctx {TYPE_3__ fallback_req; } ;
struct n2_hash_ctx {int fallback_tfm; } ;
struct cwq_initial_entry {int control; unsigned long auth_key_addr; unsigned long auth_iv_addr; unsigned long final_auth_state_addr; unsigned long enc_key_addr; unsigned long enc_iv_addr; unsigned long dest_addr; void* src_addr; } ;
struct crypto_hash_walk {void* data; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct ahash_request {int nbytes; int result; int src; TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (void*) ;
 struct n2_hash_req_ctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int,unsigned int,int ,unsigned int,unsigned int,int,int,int,int,int) ;
 struct spu_queue** VAR_7 ;
 struct n2_hash_ctx* FUNC_4 (struct crypto_ahash*) ;
 int FUNC_5 (TYPE_3__*) ;
 struct crypto_ahash* FUNC_6 (struct ahash_request*) ;
 int FUNC_7 (struct crypto_hash_walk*,int ) ;
 int FUNC_8 (struct ahash_request*,struct crypto_hash_walk*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,void*,unsigned int) ;
 int FUNC_11 () ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 struct cwq_initial_entry* FUNC_14 (struct spu_queue*,struct cwq_initial_entry*) ;
 scalar_t__ FUNC_15 (struct spu_queue*,struct cwq_initial_entry*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct ahash_request *VAR_8,
         unsigned int VAR_9, unsigned int VAR_10,
         unsigned int VAR_11, void *VAR_12,
         unsigned long VAR_13, unsigned int VAR_14)
{
 struct crypto_ahash *VAR_15 = FUNC_6(VAR_8);
 struct cwq_initial_entry *VAR_16;
 struct crypto_hash_walk VAR_17;
 struct spu_queue *VAR_18;
 unsigned long VAR_19;
 int VAR_20 = -VAR_3;
 int VAR_21, VAR_22;




 if (FUNC_16(VAR_8->nbytes > (1 << 16))) {
  struct n2_hash_req_ctx *VAR_23 = FUNC_1(VAR_8);
  struct n2_hash_ctx *VAR_24 = FUNC_4(VAR_15);

  FUNC_2(&VAR_23->fallback_req, VAR_24->fallback_tfm);
  VAR_23->fallback_req.base.flags =
   VAR_8->base.flags & VAR_1;
  VAR_23->fallback_req.nbytes = VAR_8->nbytes;
  VAR_23->fallback_req.src = VAR_8->src;
  VAR_23->fallback_req.result = VAR_8->result;

  return FUNC_5(&VAR_23->fallback_req);
 }

 VAR_21 = FUNC_8(VAR_8, &VAR_17);

 VAR_22 = FUNC_9();
 VAR_18 = VAR_7[VAR_22];
 if (!VAR_18)
  goto out;

 FUNC_12(&VAR_18->lock, VAR_19);




 VAR_16 = VAR_18->q + VAR_18->tail;

 VAR_16->control = FUNC_3(VAR_21, VAR_14, 0,
      VAR_9, VAR_10,
      0, 1, 0, 0,
      VAR_6 |
      VAR_5);
 VAR_16->src_addr = FUNC_0(VAR_17.data);
 VAR_16->auth_key_addr = VAR_13;
 VAR_16->auth_iv_addr = FUNC_0(VAR_12);
 VAR_16->final_auth_state_addr = 0UL;
 VAR_16->enc_key_addr = 0UL;
 VAR_16->enc_iv_addr = 0UL;
 VAR_16->dest_addr = FUNC_0(VAR_12);

 VAR_21 = FUNC_7(&VAR_17, 0);
 while (VAR_21 > 0) {
  VAR_16 = FUNC_14(VAR_18, VAR_16);

  VAR_16->control = (VAR_21 - 1);
  VAR_16->src_addr = FUNC_0(VAR_17.data);
  VAR_16->auth_key_addr = 0UL;
  VAR_16->auth_iv_addr = 0UL;
  VAR_16->final_auth_state_addr = 0UL;
  VAR_16->enc_key_addr = 0UL;
  VAR_16->enc_iv_addr = 0UL;
  VAR_16->dest_addr = 0UL;

  VAR_21 = FUNC_7(&VAR_17, 0);
 }
 VAR_16->control |= VAR_0;

 if (FUNC_15(VAR_18, VAR_16) != VAR_4)
  VAR_20 = -VAR_2;
 else
  VAR_20 = 0;

 FUNC_13(&VAR_18->lock, VAR_19);

 if (!VAR_20)
  FUNC_10(VAR_8->result, VAR_12, VAR_11);
out:
 FUNC_11();

 return VAR_20;
}
