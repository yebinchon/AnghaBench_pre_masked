
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct dfl_fpga_enum_dfl {int dummy; } ;
struct build_feature_devs_info {scalar_t__ ioaddr; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct build_feature_devs_info*,struct dfl_fpga_enum_dfl*,int ,int,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct build_feature_devs_info *VAR_3,
      struct dfl_fpga_enum_dfl *VAR_4,
      resource_size_t VAR_5)
{
 u64 VAR_6 = FUNC_3(VAR_3->ioaddr + VAR_2);
 u32 VAR_7 = FUNC_0(VAR_1, VAR_6) << 10;

 FUNC_1(!VAR_7);

 return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7, VAR_0);
}
