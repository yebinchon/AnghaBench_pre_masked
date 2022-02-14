
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct ib_port_immutable {int core_cap_flags; int gid_tbl_len; int pkey_tbl_len; void* max_mad_size; } ;
struct ib_port_attr {int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int flags; int flags2; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ib_device*,int ,struct ib_port_attr*) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;
 struct mlx4_ib_dev* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_8, u8 VAR_9,
          struct ib_port_immutable *VAR_10)
{
 struct ib_port_attr VAR_11;
 struct mlx4_ib_dev *VAR_12 = FUNC_2(VAR_8);
 int VAR_13;

 if (FUNC_1(VAR_8, VAR_9) == VAR_0) {
  VAR_10->core_cap_flags = VAR_4;
  VAR_10->max_mad_size = VAR_1;
 } else {
  if (VAR_12->dev->caps.flags & VAR_3)
   VAR_10->core_cap_flags = VAR_5;
  if (VAR_12->dev->caps.flags2 & VAR_2)
   VAR_10->core_cap_flags = VAR_5 |
    VAR_6;
  VAR_10->core_cap_flags |= VAR_7;
  if (VAR_10->core_cap_flags & (VAR_5 |
      VAR_6))
   VAR_10->max_mad_size = VAR_1;
 }

 VAR_13 = FUNC_0(VAR_8, VAR_9, &VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_10->pkey_tbl_len = VAR_11.pkey_tbl_len;
 VAR_10->gid_tbl_len = VAR_11.gid_tbl_len;

 return 0;
}
