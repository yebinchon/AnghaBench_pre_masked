
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {void* dst_data_len; void* src_data_len; void* iv_len; } ;
struct TYPE_14__ {TYPE_4__ para; } ;
struct TYPE_15__ {TYPE_5__ cipher; } ;
struct TYPE_16__ {TYPE_6__ u; void* op_type; } ;
struct TYPE_17__ {TYPE_7__ sym_req; } ;
struct TYPE_12__ {void* opcode; void* session_id; } ;
struct virtio_crypto_op_data_req {TYPE_8__ u; TYPE_3__ header; } ;
typedef struct virtio_crypto_op_data_req uint8_t ;
typedef unsigned int uint32_t ;
typedef int u64 ;
struct virtio_crypto_request {struct scatterlist** sgs; struct virtio_crypto_op_data_req status; struct virtio_crypto_op_data_req* req_data; } ;
struct virtio_crypto_sym_request {unsigned int type; struct virtio_crypto_op_data_req* iv; scalar_t__ encrypt; struct virtio_crypto_request base; struct virtio_crypto_ablkcipher_ctx* ablkcipher_ctx; } ;
struct TYPE_11__ {int session_id; } ;
struct TYPE_10__ {int session_id; } ;
struct virtio_crypto_ablkcipher_ctx {TYPE_2__ dec_sess_info; TYPE_1__ enc_sess_info; struct virtio_crypto* vcrypto; } ;
struct virtio_crypto {scalar_t__ max_size; TYPE_9__* vdev; } ;
struct scatterlist {int dummy; } ;
struct data_queue {int lock; int vq; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {unsigned int nbytes; struct scatterlist* dst; struct scatterlist* src; int info; } ;
struct TYPE_18__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 void* FUNC_0 (unsigned int) ;
 void* FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (int *) ;
 struct scatterlist** FUNC_5 (int,int,int ,int ) ;
 int FUNC_6 (struct scatterlist**) ;
 struct virtio_crypto_op_data_req* FUNC_7 (unsigned int,int ,int ) ;
 int FUNC_8 (struct virtio_crypto_op_data_req*) ;
 int FUNC_9 (struct virtio_crypto_op_data_req*,int ,unsigned int) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct scatterlist*,struct virtio_crypto_op_data_req*,int) ;
 int FUNC_13 (struct scatterlist*) ;
 int FUNC_14 (struct scatterlist*,unsigned int) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (struct scatterlist*) ;
 int FUNC_19 (int ,struct scatterlist**,unsigned int,unsigned int,struct virtio_crypto_request*,int ) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int
FUNC_21(struct virtio_crypto_sym_request *VAR_8,
  struct ablkcipher_request *VAR_9,
  struct data_queue *VAR_10)
{
 struct crypto_ablkcipher *VAR_11 = FUNC_3(VAR_9);
 struct virtio_crypto_ablkcipher_ctx *VAR_12 = VAR_8->ablkcipher_ctx;
 struct virtio_crypto_request *VAR_13 = &VAR_8->base;
 unsigned int VAR_14 = FUNC_2(VAR_11);
 struct virtio_crypto *VAR_15 = VAR_12->vcrypto;
 struct virtio_crypto_op_data_req *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;
 unsigned long VAR_20;
 struct scatterlist VAR_21, VAR_22, VAR_23, **VAR_24;
 int VAR_25;
 u64 VAR_26;
 unsigned int VAR_27 = 0, VAR_28 = 0;
 int VAR_29;
 uint8_t *VAR_30;

 VAR_17 = FUNC_14(VAR_9->src, VAR_9->nbytes);
 VAR_18 = FUNC_13(VAR_9->dst);

 FUNC_10("virtio_crypto: Number of sgs (src_nents: %d, dst_nents: %d)\n",
   VAR_17, VAR_18);


 VAR_29 = VAR_17 + VAR_18 + 3;
 VAR_24 = FUNC_5(VAR_29, sizeof(*VAR_24), VAR_3,
    FUNC_4(&VAR_15->vdev->dev));
 if (!VAR_24)
  return -VAR_1;

 VAR_16 = FUNC_7(sizeof(*VAR_16), VAR_3,
    FUNC_4(&VAR_15->vdev->dev));
 if (!VAR_16) {
  FUNC_6(VAR_24);
  return -VAR_1;
 }

 VAR_13->req_data = VAR_16;
 VAR_8->type = VAR_7;

 if (VAR_8->encrypt) {
  VAR_16->header.session_id =
   FUNC_1(VAR_12->enc_sess_info.session_id);
  VAR_16->header.opcode =
   FUNC_0(VAR_6);
 } else {
  VAR_16->header.session_id =
   FUNC_1(VAR_12->dec_sess_info.session_id);
  VAR_16->header.opcode =
   FUNC_0(VAR_5);
 }
 VAR_16->u.sym_req.op_type = FUNC_0(VAR_7);
 VAR_16->u.sym_req.u.cipher.para.iv_len = FUNC_0(VAR_14);
 VAR_16->u.sym_req.u.cipher.para.src_data_len =
   FUNC_0(VAR_9->nbytes);

 VAR_26 = FUNC_18(VAR_9->dst);
 if (FUNC_17(VAR_26 > VAR_4)) {
  FUNC_11("virtio_crypto: The dst_len is beyond U32_MAX\n");
  VAR_19 = -VAR_0;
  goto free;
 }

 FUNC_10("virtio_crypto: src_len: %u, dst_len: %llu\n",
   VAR_9->nbytes, VAR_26);

 if (FUNC_17(VAR_9->nbytes + VAR_26 + VAR_14 +
  sizeof(VAR_13->status) > VAR_15->max_size)) {
  FUNC_11("virtio_crypto: The length is too big\n");
  VAR_19 = -VAR_0;
  goto free;
 }

 VAR_16->u.sym_req.u.cipher.para.dst_data_len =
   FUNC_0((uint32_t)VAR_26);


 FUNC_12(&VAR_21, VAR_16, sizeof(*VAR_16));
 VAR_24[VAR_27++] = &VAR_21;







 VAR_30 = FUNC_7(VAR_14, VAR_2,
    FUNC_4(&VAR_15->vdev->dev));
 if (!VAR_30) {
  VAR_19 = -VAR_1;
  goto free;
 }
 FUNC_9(VAR_30, VAR_9->info, VAR_14);
 FUNC_12(&VAR_22, VAR_30, VAR_14);
 VAR_24[VAR_27++] = &VAR_22;
 VAR_8->iv = VAR_30;


 for (VAR_25 = 0; VAR_25 < VAR_17; VAR_25++)
  VAR_24[VAR_27++] = &VAR_9->src[VAR_25];


 for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++)
  VAR_24[VAR_27 + VAR_28++] = &VAR_9->dst[VAR_25];


 FUNC_12(&VAR_23, &VAR_13->status, sizeof(VAR_13->status));
 VAR_24[VAR_27 + VAR_28++] = &VAR_23;

 VAR_13->sgs = VAR_24;

 FUNC_15(&VAR_10->lock, VAR_20);
 VAR_19 = FUNC_19(VAR_10->vq, VAR_24, VAR_27,
    VAR_28, VAR_13, VAR_2);
 FUNC_20(VAR_10->vq);
 FUNC_16(&VAR_10->lock, VAR_20);
 if (FUNC_17(VAR_19 < 0))
  goto free_iv;

 return 0;

free_iv:
 FUNC_8(VAR_30);
free:
 FUNC_8(VAR_16);
 FUNC_6(VAR_24);
 return VAR_19;
}
