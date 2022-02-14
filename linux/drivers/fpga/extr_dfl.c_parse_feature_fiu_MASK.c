
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct dfl_fpga_enum_dfl {scalar_t__ ioaddr; } ;
struct build_feature_devs_info {int dev; } ;
typedef scalar_t__ resource_size_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct build_feature_devs_info*,int ,scalar_t__) ;
 int FUNC_2 (struct build_feature_devs_info*,struct dfl_fpga_enum_dfl*,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct build_feature_devs_info*,struct dfl_fpga_enum_dfl*,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct build_feature_devs_info *VAR_4,
        struct dfl_fpga_enum_dfl *VAR_5,
        resource_size_t VAR_6)
{
 u32 VAR_7, VAR_8;
 u64 VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_6(VAR_5->ioaddr + VAR_6 + VAR_0);
 VAR_7 = FUNC_0(VAR_1, VAR_9);


 VAR_10 = FUNC_1(VAR_4, FUNC_4(VAR_7),
        VAR_5->ioaddr + VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, 0, 0);
 if (VAR_10)
  return VAR_10;




 VAR_9 = FUNC_6(VAR_5->ioaddr + VAR_6 + VAR_2);

 VAR_8 = FUNC_0(VAR_3, VAR_9);
 if (VAR_8)
  return FUNC_5(VAR_4, VAR_5, VAR_6 + VAR_8);

 FUNC_3(VAR_4->dev, "No AFUs detected on FIU %d\n", VAR_7);

 return VAR_10;
}
