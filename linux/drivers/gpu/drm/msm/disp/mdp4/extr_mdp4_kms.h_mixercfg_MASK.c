
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum mdp_mixer_stage_id { ____Placeholder_mdp_mixer_stage_id } mdp_mixer_stage_id ;
typedef enum mdp4_pipe { ____Placeholder_mdp4_pipe } mdp4_pipe ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int) ;
 int VAR_12 ;
 int VAR_13 ;







 int FUNC_8 (int,char*) ;

__attribute__((used)) static inline uint32_t FUNC_9(uint32_t VAR_14, int VAR_15,
  enum mdp4_pipe VAR_16, enum mdp_mixer_stage_id VAR_17)
{
 switch (VAR_16) {
 case 131:
  VAR_14 &= ~(VAR_1 |
    VAR_0);
  VAR_14 |= FUNC_1(VAR_17) |
   FUNC_0(VAR_15 == 1, VAR_0);
  break;
 case 130:
  VAR_14 &= ~(VAR_3 |
    VAR_2);
  VAR_14 |= FUNC_2(VAR_17) |
   FUNC_0(VAR_15 == 1, VAR_2);
  break;
 case 134:
  VAR_14 &= ~(VAR_5 |
    VAR_4);
  VAR_14 |= FUNC_3(VAR_17) |
   FUNC_0(VAR_15 == 1, VAR_4);
  break;
 case 133:
  VAR_14 &= ~(VAR_7 |
    VAR_6);
  VAR_14 |= FUNC_4(VAR_17) |
   FUNC_0(VAR_15 == 1, VAR_6);
  break;
 case 132:
  VAR_14 &= ~(VAR_9 |
    VAR_8);
  VAR_14 |= FUNC_5(VAR_17) |
   FUNC_0(VAR_15 == 1, VAR_8);
  break;
 case 129:
  VAR_14 &= ~(VAR_11 |
    VAR_10);
  VAR_14 |= FUNC_6(VAR_17) |
   FUNC_0(VAR_15 == 1, VAR_10);
  break;
 case 128:
  VAR_14 &= ~(VAR_13 |
    VAR_12);
  VAR_14 |= FUNC_7(VAR_17) |
   FUNC_0(VAR_15 == 1, VAR_12);
  break;
 default:
  FUNC_8(1, "invalid pipe");
  break;
 }

 return VAR_14;
}
