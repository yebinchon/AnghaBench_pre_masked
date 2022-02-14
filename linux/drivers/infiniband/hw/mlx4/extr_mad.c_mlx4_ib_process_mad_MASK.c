
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mlx4_ib_dev {int dev; } ;
struct ib_wc {int dummy; } ;
struct ib_mad_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ mgmt_class; scalar_t__ attr_id; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ib_device*,int,int ,struct ib_wc const*,struct ib_grh const*,struct ib_mad const*,struct ib_mad*) ;
 int FUNC_2 (struct ib_device*,int,int ,struct ib_wc const*,struct ib_grh const*,struct ib_mad const*,struct ib_mad*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ib_device*,int ) ;
 struct mlx4_ib_dev* FUNC_5 (struct ib_device*) ;

int FUNC_6(struct ib_device *VAR_8, int VAR_9, u8 VAR_10,
   const struct ib_wc *VAR_11, const struct ib_grh *VAR_12,
   const struct ib_mad_hdr *VAR_13, size_t VAR_14,
   struct ib_mad_hdr *VAR_15, size_t *VAR_16,
   u16 *VAR_17)
{
 struct mlx4_ib_dev *VAR_18 = FUNC_5(VAR_8);
 const struct ib_mad *VAR_19 = (const struct ib_mad *)VAR_13;
 struct ib_mad *VAR_20 = (struct ib_mad *)VAR_15;
 enum rdma_link_layer VAR_21 = FUNC_4(VAR_8, VAR_10);

 if (FUNC_0(VAR_14 != sizeof(*VAR_19) ||
    *VAR_16 != sizeof(*VAR_20)))
  return VAR_3;




 if (VAR_21 == VAR_2) {
  if (FUNC_3(VAR_18->dev) &&
      (VAR_19->mad_hdr.mgmt_class == VAR_4 &&
       (VAR_19->mad_hdr.attr_id == VAR_6 ||
        VAR_19->mad_hdr.attr_id == VAR_7 ||
        VAR_19->mad_hdr.attr_id == VAR_5)))
   return FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11,
      VAR_12, VAR_19, VAR_20);

  return FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11,
          VAR_12, VAR_19, VAR_20);
 }

 if (VAR_21 == VAR_1)
  return FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11,
     VAR_12, VAR_19, VAR_20);

 return -VAR_0;
}
