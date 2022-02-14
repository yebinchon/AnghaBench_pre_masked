
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ether_type; } ;
struct TYPE_5__ {scalar_t__ ether_type; } ;
struct TYPE_7__ {TYPE_2__ val; TYPE_1__ mask; } ;
union ib_flow_spec {int type; int size; TYPE_3__ eth; } ;
typedef scalar_t__ u16 ;
struct mlx5_core_dev {int dummy; } ;
struct ib_flow_attr {unsigned int num_of_specs; } ;
struct TYPE_8__ {int outer_ip_version; int inner_ip_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 TYPE_4__ VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct mlx5_core_dev *VAR_9,
          const struct ib_flow_attr *VAR_10,
          bool VAR_11)
{
 union ib_flow_spec *VAR_12 = (union ib_flow_spec *)(VAR_10 + 1);
 int VAR_13 = VAR_11 ?
   FUNC_0(VAR_9,
     VAR_8.inner_ip_version) :
   FUNC_0(VAR_9,
     VAR_8.outer_ip_version);
 int VAR_14 = VAR_11 ? VAR_5 : 0;
 bool VAR_15, VAR_16;
 unsigned int VAR_17 = 0;
 bool VAR_18 = 0;
 unsigned int VAR_19;
 bool VAR_20 = 1;
 u16 VAR_21 = 0;
 bool VAR_22;


 for (VAR_19 = 0; VAR_19 < VAR_10->num_of_specs; VAR_19++) {
  if ((VAR_12->type == (VAR_4 | VAR_14)) &&
      VAR_12->eth.mask.ether_type) {
   VAR_20 = (VAR_12->eth.mask.ether_type ==
          FUNC_1(0xffff));
   VAR_18 = 1;
   VAR_21 = FUNC_2(VAR_12->eth.val.ether_type);
  } else if ((VAR_12->type == (VAR_6 | VAR_14)) ||
      (VAR_12->type == (VAR_7 | VAR_14))) {
   VAR_17 = VAR_12->type;
  }
  VAR_12 = (void *)VAR_12 + VAR_12->size;
 }

 VAR_22 = (!VAR_18) || (!VAR_17);
 if (!VAR_22 && VAR_20) {
  VAR_15 = (VAR_21 == VAR_0) &&
   (VAR_17 == (VAR_6 | VAR_14));
  VAR_16 = (VAR_21 == VAR_1) &&
   (VAR_17 == (VAR_7 | VAR_14));

  VAR_22 = (VAR_15) || (VAR_16) ||
        (((VAR_21 == VAR_3) ||
          (VAR_21 == VAR_2)) && VAR_13);
 }

 return VAR_22;
}
