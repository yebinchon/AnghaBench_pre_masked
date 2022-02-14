
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
 int FUNC_1 (struct fimc_context*,int ) ;
 int FUNC_2 (struct fimc_context*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct fimc_context *VAR_14, u32 VAR_15)
{
 u32 VAR_16;

 FUNC_0(VAR_14->dev, "fmt[0x%x]\n", VAR_15);


 VAR_16 = FUNC_1(VAR_14, VAR_0);
 VAR_16 &= ~VAR_3;

 switch (VAR_15) {
 case 138:
  VAR_16 |= VAR_1;
  FUNC_2(VAR_14, VAR_16, VAR_0);
  return;
 case 137:
 case 134:
  VAR_16 |= VAR_2;
  FUNC_2(VAR_14, VAR_16, VAR_0);
  return;
 default:

  break;
 }


 VAR_16 = FUNC_1(VAR_14, VAR_4);
 VAR_16 &= ~(VAR_9 |
  VAR_5 |
  VAR_12);

 switch (VAR_15) {
 case 130:
  VAR_16 |= VAR_12;
  break;
 case 128:
  VAR_16 |= VAR_13;
  break;
 case 136:
  VAR_16 |= VAR_10;
  break;
 case 135:
 case 131:
  VAR_16 |= VAR_11;
  break;
 case 140:
 case 139:
  VAR_16 |= (VAR_8 |
   VAR_5);
  break;
 case 132:
 case 133:
 case 129:
  VAR_16 |= VAR_6;
  break;
 case 142:
 case 141:
  VAR_16 |= (VAR_7 |
   VAR_5);
  break;
 }

 FUNC_2(VAR_14, VAR_16, VAR_4);
}
