
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_context {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct gsc_context *VAR_22, u32 VAR_23, bool VAR_24)
{
 u32 VAR_25;

 FUNC_0(VAR_22->dev, "fmt[0x%x]\n", VAR_23);

 VAR_25 = FUNC_2(VAR_5);
 VAR_25 &= ~(VAR_11 | VAR_19 |
   VAR_3 | VAR_6 |
   VAR_4 | VAR_9 |
   VAR_7);

 switch (VAR_23) {
 case 136:
  VAR_25 |= VAR_10;
  break;
 case 142:
 case 133:
  VAR_25 |= (VAR_13 | FUNC_1(0xff));
  break;
 case 141:
  VAR_25 |= (VAR_13 | VAR_8);
  break;
 case 130:
  VAR_25 |= (VAR_16 |
   VAR_18 |
   VAR_1);
  break;
 case 128:
  VAR_25 |= (VAR_16 |
   VAR_18 |
   VAR_2);
  break;
 case 135:
  VAR_25 |= (VAR_16 |
   VAR_17 |
   VAR_1);
  break;
 case 134:
  VAR_25 |= (VAR_16 |
   VAR_17 |
   VAR_2);
  break;
 case 138:
  VAR_25 |= (VAR_2 | VAR_14);
  break;
 case 137:
  VAR_25 |= (VAR_2 | VAR_20);
  break;
 case 131:
  VAR_25 |= VAR_21;
  break;
 case 132:
  VAR_25 |= (VAR_1 | VAR_15);
  break;
 case 129:
  VAR_25 |= (VAR_2 | VAR_15);
  break;
 case 140:
  VAR_25 |= (VAR_1 | VAR_14);
  break;
 case 139:
  VAR_25 |= (VAR_1 | VAR_20);
  break;
 }

 if (VAR_24)
  VAR_25 |= (VAR_0 | VAR_12);

 FUNC_3(VAR_25, VAR_5);
}
