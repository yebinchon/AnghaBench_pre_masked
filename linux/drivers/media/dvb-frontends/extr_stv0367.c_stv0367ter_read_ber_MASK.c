
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0367ter_state {int pBER; } ;
struct stv0367_state {struct stv0367ter_state* ter_state; } ;
struct dvb_frontend {struct stv0367_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct stv0367_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_6, u32 *VAR_7)
{
 struct stv0367_state *VAR_8 = VAR_6->demodulator_priv;
 struct stv0367ter_state *VAR_9 = VAR_8->ter_state;
 u32 VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 int VAR_13 = 0, VAR_14 = 0;



 if (FUNC_0(VAR_8, VAR_5) == 0)
  VAR_10 = ((u32)FUNC_0(VAR_8, VAR_0)
   * (1 << 16))
   + ((u32)FUNC_0(VAR_8, VAR_1)
   * (1 << 8))
   + ((u32)FUNC_0(VAR_8,
      VAR_2));

 else {
  VAR_11 = VAR_9->pBER;
  return 0;
 }

 VAR_13 = FUNC_0(VAR_8, VAR_3);
 VAR_14 = FUNC_0(VAR_8, VAR_4);

 if (VAR_10 == 0) {
  VAR_11 = 0;
 } else if (VAR_13 == 0x7) {
  if (VAR_10 <= 4) {
   VAR_12 = (VAR_10 * 1000000000) / (8 * (1 << 14));
  } else if (VAR_10 <= 42) {
   VAR_12 = (VAR_10 * 100000000) / (8 * (1 << 14));
   VAR_12 = VAR_12 * 10;
  } else if (VAR_10 <= 429) {
   VAR_12 = (VAR_10 * 10000000) / (8 * (1 << 14));
   VAR_12 = VAR_12 * 100;
  } else if (VAR_10 <= 4294) {
   VAR_12 = (VAR_10 * 1000000) / (8 * (1 << 14));
   VAR_12 = VAR_12 * 1000;
  } else if (VAR_10 <= 42949) {
   VAR_12 = (VAR_10 * 100000) / (8 * (1 << 14));
   VAR_12 = VAR_12 * 10000;
  } else if (VAR_10 <= 429496) {
   VAR_12 = (VAR_10 * 10000) / (8 * (1 << 14));
   VAR_12 = VAR_12 * 100000;
  } else {
   VAR_12 = (VAR_10 * 1000) / (8 * (1 << 14));
   VAR_12 = VAR_12 * 100000;
  }


  if (VAR_14 == 2)

   VAR_11 = VAR_12;
  else if (VAR_14 == 3)

   VAR_11 = VAR_12 / 4;
  else if (VAR_14 == 4)

   VAR_11 = VAR_12 / 16;
  else if (VAR_14 == 5)

   VAR_11 = VAR_12 / 64;
  else if (VAR_14 == 6)

   VAR_11 = VAR_12 / 256;
  else

   VAR_11 = 0;

  if ((VAR_10 < 4294967) && (VAR_10 > 429496))
   VAR_11 *= 10;

 }


 VAR_9->pBER = VAR_11;

 (*VAR_7) = VAR_11;

 return 0;
}
