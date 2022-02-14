
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef unsigned int u16 ;
struct stb0899_internal {int lock; } ;
struct stb0899_state {int delsys; int verbose; struct stb0899_internal internal; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,int,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct stb0899_state*,int ) ;
 int FUNC_6 (struct stb0899_state*,int ,int *,int) ;
 void* FUNC_7 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_13, u16 *VAR_14)
{
 struct stb0899_state *VAR_15 = VAR_13->demodulator_priv;
 struct stb0899_internal *VAR_16 = &VAR_15->internal;

 unsigned int VAR_17, VAR_18, VAR_19 = -1, VAR_20, VAR_21 = -1;
 u8 VAR_22[2];
 u32 VAR_23;

 *VAR_14 = 0;
 VAR_23 = FUNC_5(VAR_15, VAR_5);
 switch (VAR_15->delsys) {
 case 129:
 case 130:
  if (VAR_16->lock) {
   if (FUNC_2(VAR_9, VAR_23)) {

    FUNC_6(VAR_15, VAR_3, VAR_22, 2);
    VAR_17 = FUNC_1(VAR_22[0], VAR_22[1]);

    *VAR_14 = FUNC_7(VAR_10, FUNC_0(VAR_10) - 1, VAR_17);
    FUNC_4(VAR_15->verbose, VAR_2, 1, "NIR = 0x%02x%02x = %u, C/N = %d * 0.1 dBm\n",
     VAR_22[0], VAR_22[1], VAR_17, *VAR_14);
   }
  }
  break;
 case 128:
  if (VAR_16->lock) {
   VAR_23 = FUNC_3(VAR_4, VAR_6);
   VAR_18 = FUNC_2(VAR_7, VAR_23);
   VAR_23 = FUNC_3(VAR_4, VAR_8);
   VAR_20 = FUNC_2(VAR_1, VAR_23);
   if (VAR_20 == 1)
    VAR_17 = 301;
   else if (VAR_20 == 2)
    VAR_17 = 270;
   else {

    VAR_19 = FUNC_7(VAR_12, FUNC_0(VAR_12) - 1, VAR_18 * 100);

    VAR_21 = FUNC_7(VAR_11, FUNC_0(VAR_11) - 1, VAR_20);

    VAR_17 = (VAR_19 - VAR_21) / 10;
   }
   *VAR_14 = VAR_17;
   FUNC_4(VAR_15->verbose, VAR_2, 1, "Es/N0 quant = %d (%d) estimate = %u (%d), C/N = %d * 0.1 dBm",
    VAR_18, VAR_19, VAR_20, VAR_21, VAR_17);
  }
  break;
 default:
  FUNC_4(VAR_15->verbose, VAR_2, 1, "Unsupported delivery system");
  return -VAR_0;
 }

 return 0;
}
