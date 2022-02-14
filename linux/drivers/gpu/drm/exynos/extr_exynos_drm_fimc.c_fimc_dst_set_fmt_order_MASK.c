
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_context {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct fimc_context*,int ) ;
 int FUNC_2 (struct fimc_context*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct fimc_context *VAR_18, u32 VAR_19)
{
 u32 VAR_20;

 FUNC_0(VAR_18->dev, "fmt[0x%x]\n", VAR_19);


 VAR_20 = FUNC_1(VAR_18, VAR_13);
 VAR_20 &= ~VAR_17;

 switch (VAR_19) {
 case 137:
  VAR_20 |= VAR_15;
  FUNC_2(VAR_18, VAR_20, VAR_13);
  return;
 case 136:
  VAR_20 |= VAR_16;
  FUNC_2(VAR_18, VAR_20, VAR_13);
  return;
 case 133:
  VAR_20 |= (VAR_16 |
   VAR_14);
  FUNC_2(VAR_18, VAR_20, VAR_13);
  break;
 default:

  break;
 }


 VAR_20 = FUNC_1(VAR_18, VAR_0);
 VAR_20 &= ~(VAR_4 |
  VAR_7 |
  VAR_12);

 switch (VAR_19) {
 case 133:
  VAR_20 |= VAR_1;
  break;
 case 130:
  VAR_20 |= VAR_8;
  break;
 case 128:
  VAR_20 |= VAR_9;
  break;
 case 135:
  VAR_20 |= VAR_5;
  break;
 case 134:
  VAR_20 |= VAR_6;
  break;
 case 139:
 case 138:
  VAR_20 |= VAR_3;
  VAR_20 |= VAR_10;
  break;
 case 131:
 case 132:
 case 129:
  VAR_20 |= VAR_11;
  break;
 case 141:
 case 140:
  VAR_20 |= VAR_2;
  VAR_20 |= VAR_10;
  break;
 }

 FUNC_2(VAR_18, VAR_20, VAR_0);
}
