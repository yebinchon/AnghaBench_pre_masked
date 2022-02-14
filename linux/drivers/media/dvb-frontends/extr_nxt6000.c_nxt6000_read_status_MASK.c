
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nxt6000_state {int dummy; } ;
struct dvb_frontend {struct nxt6000_state* demodulator_priv; } ;
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
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct nxt6000_state*) ;
 int FUNC_1 (struct nxt6000_state*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_15, enum fe_status *VAR_16)
{
 u8 VAR_17;
 struct nxt6000_state* VAR_18 = VAR_15->demodulator_priv;

 *VAR_16 = 0;

 VAR_17 = FUNC_1(VAR_18, VAR_7);

 if (VAR_17 & VAR_0)
  *VAR_16 |= VAR_3;

 if (FUNC_1(VAR_18, VAR_8) & VAR_6)
  *VAR_16 |= VAR_1;

 if (FUNC_1(VAR_18, VAR_13) & VAR_12)
  *VAR_16 |= VAR_5;

 if (FUNC_1(VAR_18, VAR_10) & VAR_9)
  *VAR_16 |= VAR_4;

 if ((VAR_17 & VAR_11) && (*VAR_16 == (VAR_3 | VAR_1 | VAR_5 | VAR_4)))
  *VAR_16 |= VAR_2;

 if (VAR_14)
  FUNC_0(VAR_18);

 return 0;
}
