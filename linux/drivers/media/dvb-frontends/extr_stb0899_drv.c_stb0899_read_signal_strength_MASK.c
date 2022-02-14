
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct stb0899_internal {int lock; } ;
struct stb0899_state {int delsys; int verbose; struct stb0899_internal internal; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;
typedef int s8 ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_3 (int ,int ,int,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct stb0899_state*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_10, u16 *VAR_11)
{
 struct stb0899_state *VAR_12 = VAR_10->demodulator_priv;
 struct stb0899_internal *VAR_13 = &VAR_12->internal;

 int VAR_14;
 u32 VAR_15;
 *VAR_11 = 0;
 switch (VAR_12->delsys) {
 case 129:
 case 130:
  if (VAR_13->lock) {
   VAR_15 = FUNC_4(VAR_12, VAR_6);
   if (FUNC_1(VAR_7, VAR_15)) {

    VAR_15 = FUNC_4(VAR_12, VAR_4);
    VAR_14 = (s32)(s8)FUNC_1(VAR_0, VAR_15);

    *VAR_11 = FUNC_5(VAR_9, FUNC_0(VAR_9) - 1, VAR_14);
    *VAR_11 += 750;
    FUNC_3(VAR_12->verbose, VAR_2, 1, "AGCIQVALUE = 0x%02x, C = %d * 0.1 dBm",
     VAR_14 & 0xff, *VAR_11);
   }
  }
  break;
 case 128:
  if (VAR_13->lock) {
   VAR_15 = FUNC_2(VAR_5, VAR_3);
   VAR_14 = FUNC_1(VAR_3, VAR_15);

   *VAR_11 = FUNC_5(VAR_8, FUNC_0(VAR_8) - 1, VAR_14);
   *VAR_11 += 950;
   FUNC_3(VAR_12->verbose, VAR_2, 1, "IF_AGC_GAIN = 0x%04x, C = %d * 0.1 dBm",
    VAR_14 & 0x3fff, *VAR_11);
  }
  break;
 default:
  FUNC_3(VAR_12->verbose, VAR_2, 1, "Unsupported delivery system");
  return -VAR_1;
 }

 return 0;
}
