
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_pma_portcounters_ext {int dummy; } ;
struct ib_pma_portcounters {int dummy; } ;
struct TYPE_2__ {scalar_t__ attr_id; } ;
struct ib_mad {scalar_t__ data; TYPE_1__ mad_hdr; } ;
struct ib_class_port_info {int capability_mask; } ;
typedef int cpi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__,struct ib_class_port_info*,int) ;
 int FUNC_4 (struct mlx5_core_dev*,int,void*,int) ;
 int FUNC_5 (struct mlx5_core_dev*,int ,int ,int,void*,int) ;
 struct mlx5_core_dev* FUNC_6 (struct mlx5_ib_dev*,int,int*) ;
 int FUNC_7 (struct mlx5_ib_dev*,int) ;
 int FUNC_8 (struct ib_pma_portcounters*,void*) ;
 int FUNC_9 (struct ib_pma_portcounters_ext*,void*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(struct mlx5_ib_dev *VAR_9, u8 VAR_10,
      const struct ib_mad *VAR_11, struct ib_mad *VAR_12)
{
 struct mlx5_core_dev *VAR_13;
 bool VAR_14 = 1;
 u8 VAR_15;
 void *VAR_16;
 int VAR_17;

 VAR_13 = FUNC_6(VAR_9, VAR_10, &VAR_15);
 if (!VAR_13) {




  VAR_14 = 0;
  VAR_13 = VAR_9->mdev;
  VAR_15 = 1;
 }

 if (VAR_11->mad_hdr.attr_id == VAR_5) {
  struct ib_class_port_info VAR_18 = {};

  VAR_18.capability_mask = VAR_4;
  FUNC_3((VAR_12->data + 40), &VAR_18, sizeof(VAR_18));
  VAR_17 = VAR_3 | VAR_2;
  goto done;
 }

 if (VAR_11->mad_hdr.attr_id == VAR_6) {
  struct ib_pma_portcounters_ext *VAR_19 =
   (struct ib_pma_portcounters_ext *)(VAR_12->data + 40);
  int VAR_20 = FUNC_0(VAR_8);

  VAR_16 = FUNC_2(VAR_20, VAR_0);
  if (!VAR_16) {
   VAR_17 = VAR_1;
   goto done;
  }

  VAR_17 = FUNC_5(VAR_13, 0, 0,
          VAR_15, VAR_16, VAR_20);
  if (!VAR_17)
   FUNC_9(VAR_19, VAR_16);
 } else {
  struct ib_pma_portcounters *VAR_21 =
   (struct ib_pma_portcounters *)(VAR_12->data + 40);
  int VAR_22 = FUNC_0(VAR_7);

  VAR_16 = FUNC_2(VAR_22, VAR_0);
  if (!VAR_16) {
   VAR_17 = VAR_1;
   goto done;
  }

  VAR_17 = FUNC_4(VAR_13, VAR_15,
            VAR_16, VAR_22);
  if (!VAR_17)
   FUNC_8(VAR_21, VAR_16);
 }
 FUNC_1(VAR_16);
 VAR_17 = VAR_17 ? VAR_1 :
      VAR_3 | VAR_2;
done:
 if (VAR_14)
  FUNC_7(VAR_9, VAR_10);
 return VAR_17;
}
