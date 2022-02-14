
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dtv_frontend_properties {int bandwidth_hz; scalar_t__ hierarchy; int code_rate_LP; int code_rate_HP; int transmission_mode; int guard_interval; int modulation; } ;
struct dvb_frontend {struct dib7000m_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct dib7000m_state {int internal_clk; int revision; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dib7000m_state*,int) ;
 int FUNC_2 (struct dib7000m_state*,struct dtv_frontend_properties*,int) ;
 int FUNC_3 (struct dib7000m_state*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_5)
{
 struct dtv_frontend_properties *VAR_6 = &VAR_5->dtv_property_cache;
 struct dib7000m_state *VAR_7 = VAR_5->demodulator_priv;
 struct dtv_frontend_properties VAR_8;
 int VAR_9 = 0;
 u32 VAR_10, VAR_11;

 VAR_8 = *VAR_6;

 VAR_8.modulation = VAR_3;
 VAR_8.guard_interval = VAR_2;
 VAR_8.transmission_mode = VAR_4;
 VAR_8.code_rate_HP = VAR_0;
 VAR_8.code_rate_LP = VAR_1;
 VAR_8.hierarchy = 0;

 FUNC_2(VAR_7, &VAR_8, 7);

 VAR_11 = FUNC_0(VAR_8.bandwidth_hz);
 if (VAR_11 >= 5000)
  VAR_11 = 1;
 else
  VAR_11 = 6;


 VAR_10 = 30 * VAR_7->internal_clk * VAR_11;
 VAR_9 |= FUNC_3(VAR_7, 6, (u16) ((VAR_10 >> 16) & 0xffff));
 VAR_9 |= FUNC_3(VAR_7, 7, (u16) (VAR_10 & 0xffff));
 VAR_10 = 100 * VAR_7->internal_clk * VAR_11;
 VAR_9 |= FUNC_3(VAR_7, 8, (u16) ((VAR_10 >> 16) & 0xffff));
 VAR_9 |= FUNC_3(VAR_7, 9, (u16) (VAR_10 & 0xffff));
 VAR_10 = 500 * VAR_7->internal_clk * VAR_11;
 VAR_9 |= FUNC_3(VAR_7, 10, (u16) ((VAR_10 >> 16) & 0xffff));
 VAR_9 |= FUNC_3(VAR_7, 11, (u16) (VAR_10 & 0xffff));


 VAR_10 = FUNC_1(VAR_7, 0);
 VAR_9 |= FUNC_3(VAR_7, 0, (u16) (VAR_10 | (1 << 9)));


 if (VAR_7->revision == 0x4000)
  FUNC_3(VAR_7, 1793, 0);
 else
  FUNC_1(VAR_7, 537);

 VAR_9 |= FUNC_3(VAR_7, 0, (u16) VAR_10);

 return VAR_9;
}
