
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfl_fpga_enum_dfl {scalar_t__ ioaddr; } ;
struct build_feature_devs_info {int dev; int feature_dev; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (struct build_feature_devs_info*,struct dfl_fpga_enum_dfl*,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,char*,unsigned long long) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct build_feature_devs_info *VAR_1,
     struct dfl_fpga_enum_dfl *VAR_2,
     resource_size_t VAR_3)
{
 if (!VAR_1->feature_dev) {
  FUNC_1(VAR_1->dev, "the private feature %llx does not belong to any AFU.\n",
   (unsigned long long)FUNC_2(VAR_2->ioaddr + VAR_3));
  return -VAR_0;
 }

 return FUNC_0(VAR_1, VAR_2, VAR_3, 0, 0);
}
