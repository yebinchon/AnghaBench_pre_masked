
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
 int FUNC_1 (struct fimc_context*,int) ;
 int FUNC_2 (struct fimc_context*,int ) ;
 int FUNC_3 (struct fimc_context*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct fimc_context *VAR_13, u32 VAR_14, bool VAR_15)
{
 u32 VAR_16;

 FUNC_0(VAR_13->dev, "fmt[0x%x]\n", VAR_14);

 VAR_16 = FUNC_2(VAR_13, VAR_5);

 if (VAR_14 == VAR_0) {
  VAR_16 |= VAR_6;
  FUNC_3(VAR_13, VAR_16, VAR_5);
 } else {
  VAR_16 &= ~VAR_6;
  FUNC_3(VAR_13, VAR_16, VAR_5);

  VAR_16 = FUNC_2(VAR_13, VAR_7);
  VAR_16 &= ~VAR_8;

  switch (VAR_14) {
  case 137:
  case 136:
  case 133:
   VAR_16 |= VAR_9;
   break;
  case 130:
  case 128:
  case 135:
  case 134:
   VAR_16 |= VAR_12;
   break;
  case 140:
  case 138:
  case 131:
   VAR_16 |= VAR_11;
   break;
  case 132:
  case 129:
  case 141:
  case 139:
   VAR_16 |= VAR_10;
   break;
  }

  FUNC_3(VAR_13, VAR_16, VAR_7);
 }

 VAR_16 = FUNC_2(VAR_13, VAR_1);
 VAR_16 &= ~VAR_4;

 if (VAR_15)
  VAR_16 |= VAR_2;
 else
  VAR_16 |= VAR_3;

 FUNC_3(VAR_13, VAR_16, VAR_1);

 FUNC_1(VAR_13, VAR_14);
}
