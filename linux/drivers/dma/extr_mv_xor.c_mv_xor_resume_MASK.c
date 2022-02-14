
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mv_xor_device {scalar_t__ xor_type; struct mv_xor_chan** channels; } ;
struct mv_xor_chan {int saved_int_mask_reg; int saved_config_reg; } ;
struct mbus_dram_target_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mv_xor_chan*) ;
 int FUNC_1 (struct mv_xor_chan*) ;
 struct mbus_dram_target_info* FUNC_2 () ;
 int FUNC_3 (struct mv_xor_device*,struct mbus_dram_target_info const*) ;
 int FUNC_4 (struct mv_xor_device*) ;
 struct mv_xor_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct mv_xor_device *VAR_3 = FUNC_5(VAR_2);
 const struct mbus_dram_target_info *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct mv_xor_chan *VAR_6 = VAR_3->channels[VAR_5];

  if (!VAR_6)
   continue;

  FUNC_6(VAR_6->saved_config_reg,
          FUNC_0(VAR_6));
  FUNC_6(VAR_6->saved_int_mask_reg,
          FUNC_1(VAR_6));
 }

 if (VAR_3->xor_type == VAR_1) {
  FUNC_4(VAR_3);
  return 0;
 }

 VAR_4 = FUNC_2();
 if (VAR_4)
  FUNC_3(VAR_3, VAR_4);

 return 0;
}
