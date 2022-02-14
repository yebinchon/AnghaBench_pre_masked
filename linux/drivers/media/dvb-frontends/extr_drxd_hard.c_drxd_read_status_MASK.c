
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {struct drxd_state* demodulator_priv; } ;
struct drxd_state {int dummy; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int FUNC_0 (struct drxd_state*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_8, enum fe_status *VAR_9)
{
 struct drxd_state *VAR_10 = VAR_8->demodulator_priv;
 u32 VAR_11;

 FUNC_0(VAR_10, &VAR_11);
 *VAR_9 = 0;


 if (VAR_11 & VAR_2)
  *VAR_9 |= VAR_4;




 if (VAR_11 & VAR_1)
  *VAR_9 |= VAR_7 | VAR_6;
 if (VAR_11 & VAR_0)
  *VAR_9 |= VAR_3 | VAR_5;

 return 0;
}
