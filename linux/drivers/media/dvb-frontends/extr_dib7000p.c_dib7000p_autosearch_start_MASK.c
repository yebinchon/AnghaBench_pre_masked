
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dtv_frontend_properties {int bandwidth_hz; scalar_t__ hierarchy; int code_rate_LP; int code_rate_HP; int transmission_mode; int guard_interval; int modulation; } ;
struct dvb_frontend {struct dib7000p_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct dib7000p_state {scalar_t__ version; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct dib7000p_state*) ;
 int FUNC_2 (struct dib7000p_state*,int) ;
 int FUNC_3 (struct dib7000p_state*,struct dtv_frontend_properties*,int) ;
 int FUNC_4 (struct dib7000p_state*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_6)
{
 struct dtv_frontend_properties *VAR_7 = &VAR_6->dtv_property_cache;
 struct dib7000p_state *VAR_8 = VAR_6->demodulator_priv;
 struct dtv_frontend_properties VAR_9;
 u32 VAR_10, VAR_11;
 u32 VAR_12 = FUNC_1(VAR_8);

 VAR_9 = *VAR_7;
 VAR_9.modulation = VAR_3;
 VAR_9.guard_interval = VAR_2;
 VAR_9.transmission_mode = VAR_5;
 VAR_9.code_rate_HP = VAR_0;
 VAR_9.code_rate_LP = VAR_1;
 VAR_9.hierarchy = 0;

 FUNC_3(VAR_8, &VAR_9, 7);

 VAR_11 = FUNC_0(VAR_7->bandwidth_hz);
 if (VAR_11 >= 5000) {
  if (VAR_8->version == VAR_4)
   VAR_11 = 2;
  else
   VAR_11 = 1;
 } else
  VAR_11 = 6;

 VAR_10 = 30 * VAR_12 * VAR_11;
 FUNC_4(VAR_8, 6, (u16) ((VAR_10 >> 16) & 0xffff));
 FUNC_4(VAR_8, 7, (u16) (VAR_10 & 0xffff));
 VAR_10 = 100 * VAR_12 * VAR_11;
 FUNC_4(VAR_8, 8, (u16) ((VAR_10 >> 16) & 0xffff));
 FUNC_4(VAR_8, 9, (u16) (VAR_10 & 0xffff));
 VAR_10 = 500 * VAR_12 * VAR_11;
 FUNC_4(VAR_8, 10, (u16) ((VAR_10 >> 16) & 0xffff));
 FUNC_4(VAR_8, 11, (u16) (VAR_10 & 0xffff));

 VAR_10 = FUNC_2(VAR_8, 0);
 FUNC_4(VAR_8, 0, (u16) ((1 << 9) | VAR_10));
 FUNC_2(VAR_8, 1284);
 FUNC_4(VAR_8, 0, (u16) VAR_10);

 return 0;
}
