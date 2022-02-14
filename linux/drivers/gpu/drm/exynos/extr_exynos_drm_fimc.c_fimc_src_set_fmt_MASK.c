
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
 int FUNC_1 (struct fimc_context*,int ) ;
 int FUNC_2 (struct fimc_context*,int) ;
 int FUNC_3 (struct fimc_context*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct fimc_context *VAR_9, u32 VAR_10, bool VAR_11)
{
 u32 VAR_12;

 FUNC_0(VAR_9->dev, "fmt[0x%x]\n", VAR_10);

 VAR_12 = FUNC_1(VAR_9, VAR_4);
 VAR_12 &= ~VAR_5;

 switch (VAR_10) {
 case 138:
 case 137:
 case 134:
  VAR_12 |= VAR_5;
  break;
 case 131:
  VAR_12 |= VAR_6;
  break;
 case 130:
 case 128:
 case 136:
 case 135:
  VAR_12 |= VAR_8;
  break;
 case 141:
 case 139:
 case 132:
  VAR_12 |= VAR_7;
  break;
 case 133:
 case 129:
 case 142:
 case 140:
  VAR_12 |= VAR_6;
  break;
 }

 FUNC_3(VAR_9, VAR_12, VAR_4);

 VAR_12 = FUNC_1(VAR_9, VAR_0);
 VAR_12 &= ~VAR_3;

 if (VAR_11)
  VAR_12 |= VAR_1;
 else
  VAR_12 |= VAR_2;

 FUNC_3(VAR_9, VAR_12, VAR_0);

 FUNC_2(VAR_9, VAR_10);
}
