
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_ib_rss {int base_qpn_tbl_sz; int flags; int rss_key; } ;
struct mlx4_ib_dev {TYPE_4__* dev; } ;
struct mlx4_ib_create_qp_rss {scalar_t__ rx_hash_function; int rx_hash_fields_mask; int rx_hash_key; } ;
struct ib_qp_init_attr {TYPE_2__* rwq_ind_tbl; } ;
struct TYPE_7__ {int flags2; int flags; scalar_t__ tunnel_offload_mode; } ;
struct TYPE_8__ {TYPE_3__ caps; } ;
struct TYPE_6__ {int log_ind_tbl_size; TYPE_1__** ind_tbl; } ;
struct TYPE_5__ {int wq_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct mlx4_ib_dev *VAR_22, struct mlx4_ib_rss *VAR_23,
        struct ib_qp_init_attr *VAR_24,
        struct mlx4_ib_create_qp_rss *VAR_25)
{
 VAR_23->base_qpn_tbl_sz = VAR_24->rwq_ind_tbl->ind_tbl[0]->wq_num |
  (VAR_24->rwq_ind_tbl->log_ind_tbl_size << 24);

 if ((VAR_25->rx_hash_function == VAR_8) &&
     (VAR_22->dev->caps.flags2 & VAR_1)) {
  FUNC_0(VAR_23->rss_key, VAR_25->rx_hash_key,
         VAR_3);
 } else {
  FUNC_1("RX Hash function is not supported\n");
  return (-VAR_0);
 }

 if (VAR_25->rx_hash_fields_mask & ~(VAR_10 |
       VAR_4 |
       VAR_11 |
       VAR_5 |
       VAR_12 |
       VAR_6 |
       VAR_13 |
       VAR_7 |
       VAR_9)) {
  FUNC_1("RX Hash fields_mask has unsupported mask (0x%llx)\n",
    VAR_25->rx_hash_fields_mask);
  return (-VAR_0);
 }

 if ((VAR_25->rx_hash_fields_mask & VAR_10) &&
     (VAR_25->rx_hash_fields_mask & VAR_4)) {
  VAR_23->flags = VAR_15;
 } else if ((VAR_25->rx_hash_fields_mask & VAR_10) ||
     (VAR_25->rx_hash_fields_mask & VAR_4)) {
  FUNC_1("RX Hash fields_mask is not supported - both IPv4 SRC and DST must be set\n");
  return (-VAR_0);
 }

 if ((VAR_25->rx_hash_fields_mask & VAR_11) &&
     (VAR_25->rx_hash_fields_mask & VAR_5)) {
  VAR_23->flags |= VAR_16;
 } else if ((VAR_25->rx_hash_fields_mask & VAR_11) ||
     (VAR_25->rx_hash_fields_mask & VAR_5)) {
  FUNC_1("RX Hash fields_mask is not supported - both IPv6 SRC and DST must be set\n");
  return (-VAR_0);
 }

 if ((VAR_25->rx_hash_fields_mask & VAR_13) &&
     (VAR_25->rx_hash_fields_mask & VAR_7)) {
  if (!(VAR_22->dev->caps.flags & VAR_2)) {
   FUNC_1("RX Hash fields_mask for UDP is not supported\n");
   return (-VAR_0);
  }

  if (VAR_23->flags & VAR_15)
   VAR_23->flags |= VAR_19;
  if (VAR_23->flags & VAR_16)
   VAR_23->flags |= VAR_20;
  if (!(VAR_23->flags & (VAR_16 | VAR_15))) {
   FUNC_1("RX Hash fields_mask is not supported - UDP must be set with IPv4 or IPv6\n");
   return (-VAR_0);
  }
 } else if ((VAR_25->rx_hash_fields_mask & VAR_13) ||
     (VAR_25->rx_hash_fields_mask & VAR_7)) {
  FUNC_1("RX Hash fields_mask is not supported - both UDP SRC and DST must be set\n");
  return (-VAR_0);
 }

 if ((VAR_25->rx_hash_fields_mask & VAR_12) &&
     (VAR_25->rx_hash_fields_mask & VAR_6)) {
  if (VAR_23->flags & VAR_15)
   VAR_23->flags |= VAR_17;
  if (VAR_23->flags & VAR_16)
   VAR_23->flags |= VAR_18;
  if (!(VAR_23->flags & (VAR_16 | VAR_15))) {
   FUNC_1("RX Hash fields_mask is not supported - TCP must be set with IPv4 or IPv6\n");
   return (-VAR_0);
  }
 } else if ((VAR_25->rx_hash_fields_mask & VAR_12) ||
     (VAR_25->rx_hash_fields_mask & VAR_6)) {
  FUNC_1("RX Hash fields_mask is not supported - both TCP SRC and DST must be set\n");
  return (-VAR_0);
 }

 if (VAR_25->rx_hash_fields_mask & VAR_9) {
  if (VAR_22->dev->caps.tunnel_offload_mode ==
      VAR_21) {




   VAR_23->flags |= VAR_14;
  } else {
   FUNC_1("RSS Hash for inner headers isn't supported\n");
   return (-VAR_0);
  }
 }

 return 0;
}
