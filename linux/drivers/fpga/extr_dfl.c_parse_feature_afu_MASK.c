
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dfl_fpga_enum_dfl {int dummy; } ;
struct build_feature_devs_info {TYPE_1__* feature_dev; int dev; } ;
typedef int resource_size_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct build_feature_devs_info*,struct dfl_fpga_enum_dfl*,int ) ;

__attribute__((used)) static int FUNC_4(struct build_feature_devs_info *VAR_1,
        struct dfl_fpga_enum_dfl *VAR_2,
        resource_size_t VAR_3)
{
 if (!VAR_1->feature_dev) {
  FUNC_0(VAR_1->dev, "this AFU does not belong to any FIU.\n");
  return -VAR_0;
 }

 switch (FUNC_2(VAR_1->feature_dev)) {
 case 128:
  return FUNC_3(VAR_1, VAR_2, VAR_3);
 default:
  FUNC_1(VAR_1->dev, "AFU belonging to FIU %s is not supported yet.\n",
    VAR_1->feature_dev->name);
 }

 return 0;
}
