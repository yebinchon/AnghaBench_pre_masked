
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mv_xor_device {struct mv_xor_chan** channels; } ;
struct mv_xor_chan {void* saved_int_mask_reg; void* saved_config_reg; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (struct mv_xor_chan*) ;
 int FUNC_1 (struct mv_xor_chan*) ;
 struct mv_xor_device* FUNC_2 (struct platform_device*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1, pm_message_t VAR_2)
{
 struct mv_xor_device *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct mv_xor_chan *VAR_5 = VAR_3->channels[VAR_4];

  if (!VAR_5)
   continue;

  VAR_5->saved_config_reg =
   FUNC_3(FUNC_0(VAR_5));
  VAR_5->saved_int_mask_reg =
   FUNC_3(FUNC_1(VAR_5));
 }

 return 0;
}
