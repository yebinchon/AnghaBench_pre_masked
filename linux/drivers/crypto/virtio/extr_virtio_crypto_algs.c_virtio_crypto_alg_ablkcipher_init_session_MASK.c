
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {void* op; void* keylen; void* algo; } ;
struct TYPE_17__ {TYPE_2__ para; } ;
struct TYPE_18__ {TYPE_3__ cipher; } ;
struct TYPE_19__ {TYPE_4__ u; void* op_type; } ;
struct TYPE_20__ {TYPE_5__ sym_create_session; } ;
struct TYPE_15__ {void* algo; scalar_t__ queue_id; void* opcode; } ;
struct TYPE_23__ {int session_id; void* status; TYPE_6__ u; TYPE_1__ header; } ;
typedef TYPE_9__ uint8_t ;
typedef int uint32_t ;
struct TYPE_22__ {void* session_id; } ;
struct TYPE_21__ {void* session_id; } ;
struct virtio_crypto_ablkcipher_ctx {TYPE_8__ dec_sess_info; TYPE_7__ enc_sess_info; struct virtio_crypto* vcrypto; } ;
struct virtio_crypto {int ctrl_lock; TYPE_9__ input; int ctrl_vq; TYPE_9__ ctrl; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 void* FUNC_1 (int) ;
 TYPE_9__* FUNC_2 (TYPE_9__ const*,unsigned int,int ) ;
 int FUNC_3 (TYPE_9__*) ;
 scalar_t__ FUNC_4 (void*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (struct scatterlist*,TYPE_9__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,struct scatterlist**,unsigned int,unsigned int,struct virtio_crypto*,int ) ;
 int FUNC_11 (int ,unsigned int*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(
  struct virtio_crypto_ablkcipher_ctx *VAR_9,
  uint32_t VAR_10, const uint8_t *VAR_11,
  unsigned int VAR_12,
  int VAR_13)
{
 struct scatterlist VAR_14, VAR_15, VAR_16, *VAR_17[3];
 unsigned int VAR_18;
 struct virtio_crypto *VAR_19 = VAR_9->vcrypto;
 int VAR_20 = VAR_13 ? VAR_7 : VAR_6;
 int VAR_21;
 unsigned int VAR_22 = 0, VAR_23 = 0;





 uint8_t *VAR_24 = FUNC_2(VAR_11, VAR_12, VAR_2);

 if (!VAR_24)
  return -VAR_1;

 FUNC_8(&VAR_19->ctrl_lock);

 VAR_19->ctrl.header.opcode =
  FUNC_1(VAR_3);
 VAR_19->ctrl.header.algo = FUNC_1(VAR_10);

 VAR_19->ctrl.header.queue_id = 0;

 VAR_19->input.status = FUNC_1(VAR_4);

 VAR_19->ctrl.u.sym_create_session.op_type =
  FUNC_1(VAR_8);
 VAR_19->ctrl.u.sym_create_session.u.cipher.para.algo =
  VAR_19->ctrl.header.algo;
 VAR_19->ctrl.u.sym_create_session.u.cipher.para.keylen =
  FUNC_1(VAR_12);
 VAR_19->ctrl.u.sym_create_session.u.cipher.para.op =
  FUNC_1(VAR_20);

 FUNC_7(&VAR_14, &VAR_19->ctrl, sizeof(VAR_19->ctrl));
 VAR_17[VAR_22++] = &VAR_14;


 FUNC_7(&VAR_15, VAR_24, VAR_12);
 VAR_17[VAR_22++] = &VAR_15;


 FUNC_7(&VAR_16, &VAR_19->input, sizeof(VAR_19->input));
 VAR_17[VAR_22 + VAR_23++] = &VAR_16;

 VAR_21 = FUNC_10(VAR_19->ctrl_vq, VAR_17, VAR_22,
    VAR_23, VAR_19, VAR_2);
 if (VAR_21 < 0) {
  FUNC_9(&VAR_19->ctrl_lock);
  FUNC_3(VAR_24);
  return VAR_21;
 }
 FUNC_13(VAR_19->ctrl_vq);





 while (!FUNC_11(VAR_19->ctrl_vq, &VAR_18) &&
        !FUNC_12(VAR_19->ctrl_vq))
  FUNC_0();

 if (FUNC_4(VAR_19->input.status) != VAR_5) {
  FUNC_9(&VAR_19->ctrl_lock);
  FUNC_6("virtio_crypto: Create session failed status: %u\n",
   FUNC_4(VAR_19->input.status));
  FUNC_3(VAR_24);
  return -VAR_0;
 }

 if (VAR_13)
  VAR_9->enc_sess_info.session_id =
   FUNC_5(VAR_19->input.session_id);
 else
  VAR_9->dec_sess_info.session_id =
   FUNC_5(VAR_19->input.session_id);

 FUNC_9(&VAR_19->ctrl_lock);

 FUNC_3(VAR_24);
 return 0;
}
