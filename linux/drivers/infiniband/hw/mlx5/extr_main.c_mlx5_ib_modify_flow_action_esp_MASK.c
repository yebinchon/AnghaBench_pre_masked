
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uverbs_attr_bundle {int dummy; } ;
struct TYPE_3__ {int ib_flags; TYPE_2__* ctx; } ;
struct mlx5_ib_flow_action {TYPE_1__ esp_aes_gcm; } ;
struct mlx5_accel_esp_xfrm_attrs {int flags; int esn; } ;
struct ib_flow_action_attrs_esp {int flags; int esn; scalar_t__ hard_limit_pkts; scalar_t__ tfc_pad; scalar_t__ seq; scalar_t__ spi; scalar_t__ encap; scalar_t__ replay; scalar_t__ keymat; } ;
struct ib_flow_action {int dummy; } ;
typedef int accel_attrs ;
struct TYPE_4__ {int attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlx5_accel_esp_xfrm_attrs*,int *,int) ;
 int FUNC_1 (TYPE_2__*,struct mlx5_accel_esp_xfrm_attrs*) ;
 struct mlx5_ib_flow_action* FUNC_2 (struct ib_flow_action*) ;

__attribute__((used)) static int
FUNC_3(struct ib_flow_action *VAR_6,
          const struct ib_flow_action_attrs_esp *VAR_7,
          struct uverbs_attr_bundle *VAR_8)
{
 struct mlx5_ib_flow_action *VAR_9 = FUNC_2(VAR_6);
 struct mlx5_accel_esp_xfrm_attrs VAR_10;
 int VAR_11 = 0;

 if (VAR_7->keymat || VAR_7->replay || VAR_7->encap ||
     VAR_7->spi || VAR_7->seq || VAR_7->tfc_pad ||
     VAR_7->hard_limit_pkts ||
     (VAR_7->flags & ~(VAR_2 |
        VAR_3 |
        VAR_4)))
  return -VAR_1;




 if (!(VAR_9->esp_aes_gcm.ib_flags &
       VAR_2) &&
     VAR_7->flags & (VAR_2 |
      VAR_4))
  return -VAR_0;

 FUNC_0(&VAR_10, &VAR_9->esp_aes_gcm.ctx->attrs,
        sizeof(VAR_10));

 VAR_10.esn = VAR_7->esn;
 if (VAR_7->flags & VAR_4)
  VAR_10.flags |= VAR_5;
 else
  VAR_10.flags &= ~VAR_5;

 VAR_11 = FUNC_1(VAR_9->esp_aes_gcm.ctx,
      &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_9->esp_aes_gcm.ib_flags &=
  ~VAR_4;
 VAR_9->esp_aes_gcm.ib_flags |=
  VAR_7->flags & VAR_4;

 return 0;
}
