
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct parser_exec_state {struct intel_vgpu* vgpu; } ;
struct mi_display_flip_command_info {int dummy; } ;
struct intel_vgpu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct parser_exec_state*,struct mi_display_flip_command_info*) ;
 int FUNC_3 (struct parser_exec_state*) ;
 int FUNC_4 (struct parser_exec_state*,int) ;
 int FUNC_5 (struct parser_exec_state*,struct mi_display_flip_command_info*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct parser_exec_state*,int ,int ) ;
 int FUNC_9 (struct parser_exec_state*,struct mi_display_flip_command_info*) ;

__attribute__((used)) static int FUNC_10(struct parser_exec_state *VAR_1)
{
 struct mi_display_flip_command_info VAR_2;
 struct intel_vgpu *VAR_3 = VAR_1->vgpu;
 int VAR_4;
 int VAR_5;
 int VAR_6 = FUNC_3(VAR_1);
 u32 VAR_7 = FUNC_0(1);


 if (FUNC_1(2, 1, 0) == 2)
  VAR_7++;
 VAR_4 = FUNC_6(FUNC_3(VAR_1),
   VAR_7);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_1, &VAR_2);
 if (VAR_4) {
  FUNC_7("fail to decode MI display flip command\n");
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_1, &VAR_2);
 if (VAR_4) {
  FUNC_7("invalid MI display flip command\n");
  return VAR_4;
 }

 VAR_4 = FUNC_9(VAR_1, &VAR_2);
 if (VAR_4) {
  FUNC_7("fail to update plane mmio\n");
  return VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  FUNC_8(VAR_1, FUNC_4(VAR_1, VAR_5), VAR_0);
 return 0;
}
