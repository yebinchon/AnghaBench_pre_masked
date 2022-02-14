
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct ib_gid_attr {scalar_t__ gid_type; } ;
struct hns_roce_dev {int dev; } ;
typedef enum hns_roce_sgid_type { ____Placeholder_hns_roce_sgid_type } hns_roce_sgid_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hns_roce_dev*,int,union ib_gid const*,int) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct hns_roce_dev *VAR_6, u8 VAR_7,
          int VAR_8, const union ib_gid *VAR_9,
          const struct ib_gid_attr *VAR_10)
{
 enum hns_roce_sgid_type VAR_11 = VAR_1;
 int VAR_12;

 if (!VAR_9 || !VAR_10)
  return -VAR_0;

 if (VAR_10->gid_type == VAR_4)
  VAR_11 = VAR_1;

 if (VAR_10->gid_type == VAR_5) {
  if (FUNC_2((void *)VAR_9))
   VAR_11 = VAR_2;
  else
   VAR_11 = VAR_3;
 }

 VAR_12 = FUNC_1(VAR_6, VAR_8, VAR_9, VAR_11);
 if (VAR_12)
  FUNC_0(VAR_6->dev, "Configure sgid table failed(%d)!\n", VAR_12);

 return VAR_12;
}
