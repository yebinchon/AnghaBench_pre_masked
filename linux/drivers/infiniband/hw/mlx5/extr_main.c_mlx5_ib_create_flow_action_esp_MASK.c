
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct uverbs_attr_bundle {int dummy; } ;
struct ib_flow_action {int dummy; } ;
struct TYPE_10__ {int ib_flags; int ctx; } ;
struct mlx5_ib_flow_action {struct ib_flow_action ib_action; TYPE_5__ esp_aes_gcm; } ;
struct mlx5_ib_dev {int mdev; } ;
struct TYPE_8__ {int key_len; int icv_len; int iv_algo; int seq_iv; int salt; int aes_key; } ;
struct TYPE_9__ {TYPE_3__ aes_gcm; } ;
struct mlx5_accel_esp_xfrm_attrs {int action; int flags; int esn; int keymat_type; TYPE_4__ keymat; } ;
struct ib_uverbs_flow_action_esp_keymat_aes_gcm {int icv_len; scalar_t__ iv_algo; int key_len; int iv; int salt; int aes_key; } ;
struct ib_flow_action_attrs_esp {int flags; int esn; TYPE_2__* keymat; scalar_t__ hard_limit_pkts; scalar_t__ tfc_pad; scalar_t__ seq; scalar_t__ spi; scalar_t__ encap; scalar_t__ replay; } ;
struct ib_device {int dummy; } ;
struct TYPE_6__ {struct ib_uverbs_flow_action_esp_keymat_aes_gcm aes_gcm; } ;
struct TYPE_7__ {scalar_t__ protocol; TYPE_1__ keymat; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_flow_action* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_ib_flow_action*) ;
 struct mlx5_ib_flow_action* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ,struct mlx5_accel_esp_xfrm_attrs*,int ) ;
 int FUNC_7 (int ) ;
 struct mlx5_ib_dev* FUNC_8 (struct ib_device*) ;
 int FUNC_9 (int *,struct uverbs_attr_bundle*,int ,int) ;

__attribute__((used)) static struct ib_flow_action *
FUNC_10(struct ib_device *VAR_15,
          const struct ib_flow_action_attrs_esp *VAR_16,
          struct uverbs_attr_bundle *VAR_17)
{
 struct mlx5_ib_dev *VAR_18 = FUNC_8(VAR_15);
 struct ib_uverbs_flow_action_esp_keymat_aes_gcm *VAR_19;
 struct mlx5_accel_esp_xfrm_attrs VAR_20 = {};
 struct mlx5_ib_flow_action *VAR_21;
 u64 VAR_22;
 u64 VAR_23;
 int VAR_24 = 0;

 VAR_24 = FUNC_9(
  &VAR_22, VAR_17, VAR_14,
  ((VAR_13 << 1) - 1));
 if (VAR_24)
  return FUNC_0(VAR_24);

 VAR_23 = FUNC_7(VAR_22);





 if (!VAR_16->keymat || VAR_16->replay || VAR_16->encap ||
     VAR_16->spi || VAR_16->seq || VAR_16->tfc_pad ||
     VAR_16->hard_limit_pkts ||
     (VAR_16->flags & ~(VAR_3 |
        VAR_4)))
  return FUNC_0(-VAR_1);

 if (VAR_16->keymat->protocol !=
     VAR_6)
  return FUNC_0(-VAR_1);

 VAR_19 = &VAR_16->keymat->keymat.aes_gcm;

 if (VAR_19->icv_len != 16 ||
     VAR_19->iv_algo != VAR_7)
  return FUNC_0(-VAR_1);

 VAR_21 = FUNC_4(sizeof(*VAR_21), VAR_2);
 if (!VAR_21)
  return FUNC_0(-VAR_0);

 VAR_21->esp_aes_gcm.ib_flags = VAR_16->flags;
 FUNC_5(&VAR_20.keymat.aes_gcm.aes_key, &VAR_19->aes_key,
        sizeof(VAR_20.keymat.aes_gcm.aes_key));
 VAR_20.keymat.aes_gcm.key_len = VAR_19->key_len * 8;
 FUNC_5(&VAR_20.keymat.aes_gcm.salt, &VAR_19->salt,
        sizeof(VAR_20.keymat.aes_gcm.salt));
 FUNC_5(&VAR_20.keymat.aes_gcm.seq_iv, &VAR_19->iv,
        sizeof(VAR_20.keymat.aes_gcm.seq_iv));
 VAR_20.keymat.aes_gcm.icv_len = VAR_19->icv_len * 8;
 VAR_20.keymat.aes_gcm.iv_algo = VAR_9;
 VAR_20.keymat_type = VAR_12;

 VAR_20.esn = VAR_16->esn;
 if (VAR_16->flags & VAR_3)
  VAR_20.flags |= VAR_11;
 if (VAR_16->flags & VAR_5)
  VAR_20.flags |= VAR_10;

 if (VAR_16->flags & VAR_4)
  VAR_20.action |= VAR_8;

 VAR_21->esp_aes_gcm.ctx =
  FUNC_6(VAR_18->mdev, &VAR_20, VAR_23);
 if (FUNC_1(VAR_21->esp_aes_gcm.ctx)) {
  VAR_24 = FUNC_2(VAR_21->esp_aes_gcm.ctx);
  goto err_parse;
 }

 VAR_21->esp_aes_gcm.ib_flags = VAR_16->flags;

 return &VAR_21->ib_action;

err_parse:
 FUNC_3(VAR_21);
 return FUNC_0(VAR_24);
}
