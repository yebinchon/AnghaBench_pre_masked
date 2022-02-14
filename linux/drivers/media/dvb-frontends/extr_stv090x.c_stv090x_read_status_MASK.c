
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv090x_state {int dummy; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,int,char*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_17, enum fe_status *VAR_18)
{
 struct stv090x_state *VAR_19 = VAR_17->demodulator_priv;
 u32 VAR_20, VAR_21;
 u8 VAR_22;

 *VAR_18 = 0;

 VAR_21 = FUNC_1(VAR_19, VAR_2);
 if (FUNC_0(VAR_21, VAR_0))
  *VAR_18 |= VAR_6 | VAR_4;

 VAR_20 = FUNC_1(VAR_19, VAR_1);
 VAR_22 = FUNC_0(VAR_20, VAR_9);

 switch (VAR_22) {
 case 0:
 case 1:
 default:
  FUNC_2(VAR_3, 1, "Status: Unlocked (Searching ..)");
  break;

 case 2:
  FUNC_2(VAR_3, 1, "Delivery system: DVB-S2");
  if (FUNC_0(VAR_21, VAR_11)) {
   VAR_20 = FUNC_1(VAR_19, VAR_12);
   if (FUNC_0(VAR_20, VAR_13)) {
    *VAR_18 |= VAR_8;
    VAR_20 = FUNC_1(VAR_19, VAR_15);
    if (FUNC_0(VAR_20, VAR_14))
     *VAR_18 |= VAR_7 | VAR_5;
   }
  }
  break;

 case 3:
  FUNC_2(VAR_3, 1, "Delivery system: DVB-S");
  if (FUNC_0(VAR_21, VAR_11)) {
   VAR_20 = FUNC_1(VAR_19, VAR_16);
   if (FUNC_0(VAR_20, VAR_10)) {
    *VAR_18 |= VAR_8;
    VAR_20 = FUNC_1(VAR_19, VAR_15);
    if (FUNC_0(VAR_20, VAR_14))
     *VAR_18 |= VAR_7 | VAR_5;
   }
  }
  break;
 }

 return 0;
}
