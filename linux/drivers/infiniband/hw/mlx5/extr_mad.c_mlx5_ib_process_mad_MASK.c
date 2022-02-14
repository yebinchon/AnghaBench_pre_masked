
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_wc {int dummy; } ;
struct ib_mad_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ mgmt_class; scalar_t__ method; } ;
struct ib_mad {TYPE_1__ mad_hdr; int data; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ib_device*,int,int ,struct ib_wc const*,struct ib_grh const*,struct ib_mad const*,struct ib_mad*) ;
 int FUNC_4 (struct mlx5_ib_dev*,int ,struct ib_mad const*,struct ib_mad*) ;
 struct mlx5_ib_dev* FUNC_5 (struct ib_device*) ;
 int VAR_3 ;

int FUNC_6(struct ib_device *VAR_4, int VAR_5, u8 VAR_6,
   const struct ib_wc *VAR_7, const struct ib_grh *VAR_8,
   const struct ib_mad_hdr *VAR_9, size_t VAR_10,
   struct ib_mad_hdr *VAR_11, size_t *VAR_12,
   u16 *VAR_13)
{
 struct mlx5_ib_dev *VAR_14 = FUNC_5(VAR_4);
 const struct ib_mad *VAR_15 = (const struct ib_mad *)VAR_9;
 struct ib_mad *VAR_16 = (struct ib_mad *)VAR_11;
 int VAR_17;

 if (FUNC_1(VAR_10 != sizeof(*VAR_15) ||
    *VAR_12 != sizeof(*VAR_16)))
  return VAR_0;

 FUNC_2(VAR_16->data, 0, sizeof(VAR_16->data));

 if (FUNC_0(VAR_14->mdev, VAR_3) &&
     VAR_15->mad_hdr.mgmt_class == VAR_1 &&
     VAR_15->mad_hdr.method == VAR_2) {
  VAR_17 = FUNC_4(VAR_14, VAR_6, VAR_15, VAR_16);
 } else {
  VAR_17 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
       VAR_15, VAR_16);
 }
 return VAR_17;
}
