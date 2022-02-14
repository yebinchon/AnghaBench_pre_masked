
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum mdp_mixer_stage_id { ____Placeholder_mdp_mixer_stage_id } mdp_mixer_stage_id ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static u32 FUNC_2(enum mdp5_pipe VAR_11,
  enum mdp_mixer_stage_id VAR_12)
{
 if (VAR_12 < VAR_10 && (VAR_11 != 139 && VAR_11 != 138))
  return 0;

 switch (VAR_11) {
 case 131: return VAR_6;
 case 130: return VAR_7;
 case 129: return VAR_8;
 case 135: return VAR_2;
 case 134: return VAR_3;
 case 133: return VAR_4;
 case 137: return VAR_0;
 case 136: return VAR_1;
 case 128: return VAR_9;
 case 132: return VAR_5;
 case 139: return FUNC_0(VAR_12);
 case 138: return FUNC_1(VAR_12);
 default: return 0;
 }
}
