
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct dtv_frontend_properties {int transmission_mode; int guard_interval; int modulation; int hierarchy; int code_rate_HP; int code_rate_LP; int bandwidth_hz; } ;
struct dib3000mc_state {TYPE_1__* cfg; } ;
struct TYPE_2__ {int impulse_noise_mode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct dib3000mc_state*,int) ;
 int FUNC_2 (struct dib3000mc_state*,int) ;
 int FUNC_3 (struct dib3000mc_state*,int ) ;
 int FUNC_4 (struct dib3000mc_state*,int ,int) ;
 int FUNC_5 (struct dib3000mc_state*,int,int ,int ) ;
 int FUNC_6 (struct dib3000mc_state*,int,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct dib3000mc_state *VAR_1,
          struct dtv_frontend_properties *VAR_2, u16 VAR_3)
{
 u16 VAR_4;
 u32 VAR_5 = FUNC_0(VAR_2->bandwidth_hz);

 FUNC_3(VAR_1, VAR_5);
 FUNC_5(VAR_1, VAR_2->transmission_mode, VAR_5, 0);


 FUNC_6(VAR_1, 100, (16 << 6) + 9);







 FUNC_6(VAR_1, 1027, 0x0800);
 FUNC_6(VAR_1, 1027, 0x0000);


 FUNC_6(VAR_1, 26, 0x6680);
 FUNC_6(VAR_1, 29, 0x1273);
 FUNC_6(VAR_1, 33, 5);
 FUNC_2(VAR_1, 132);
 FUNC_6(VAR_1, 133, 15564);

 FUNC_6(VAR_1, 12 , 0x0);
 FUNC_6(VAR_1, 13 , 0x3e8);
 FUNC_6(VAR_1, 14 , 0x0);
 FUNC_6(VAR_1, 15 , 0x3f2);

 FUNC_6(VAR_1, 93,0);
 FUNC_6(VAR_1, 94,0);
 FUNC_6(VAR_1, 95,0);
 FUNC_6(VAR_1, 96,0);
 FUNC_6(VAR_1, 97,0);
 FUNC_6(VAR_1, 98,0);

 FUNC_4(VAR_1, 0, VAR_2->transmission_mode);

 VAR_4 = 0;
 switch (VAR_2->transmission_mode) {
  case 129: VAR_4 |= (0 << 7); break;
  default:
  case 128: VAR_4 |= (1 << 7); break;
 }
 switch (VAR_2->guard_interval) {
  case 138: VAR_4 |= (0 << 5); break;
  case 139: VAR_4 |= (1 << 5); break;
  case 137: VAR_4 |= (3 << 5); break;
  default:
  case 136: VAR_4 |= (2 << 5); break;
 }
 switch (VAR_2->modulation) {
  case 130: VAR_4 |= (0 << 3); break;
  case 132: VAR_4 |= (1 << 3); break;
  default:
  case 131: VAR_4 |= (2 << 3); break;
 }
 switch (135) {
  case 134: VAR_4 |= 2; break;
  case 133: VAR_4 |= 4; break;
  default:
  case 135: VAR_4 |= 1; break;
 }
 FUNC_6(VAR_1, 0, VAR_4);
 FUNC_6(VAR_1, 5, (1 << 8) | ((VAR_3 & 0xf) << 4));

 VAR_4 = 0;
 if (VAR_2->hierarchy == 1)
  VAR_4 |= (1 << 4);
 if (1 == 1)
  VAR_4 |= 1;
 switch ((VAR_2->hierarchy == 0 || 1 == 1) ? VAR_2->code_rate_HP : VAR_2->code_rate_LP) {
  case 143: VAR_4 |= (2 << 1); break;
  case 142: VAR_4 |= (3 << 1); break;
  case 141: VAR_4 |= (5 << 1); break;
  case 140: VAR_4 |= (7 << 1); break;
  default:
  case 144: VAR_4 |= (1 << 1); break;
 }
 FUNC_6(VAR_1, 181, VAR_4);


 switch (VAR_2->transmission_mode) {
  case 128: VAR_4 = 256; break;
  case 129:
  default: VAR_4 = 64; break;
 }
 switch (VAR_2->guard_interval) {
  case 139: VAR_4 *= 2; break;
  case 136: VAR_4 *= 4; break;
  case 137: VAR_4 *= 8; break;
  default:
  case 138: VAR_4 *= 1; break;
 }
 VAR_4 <<= 4;
 VAR_4 |= FUNC_1(VAR_1, 180) & 0x000f;
 FUNC_6(VAR_1, 180, VAR_4);


 VAR_4 = FUNC_1(VAR_1, 0);
 FUNC_6(VAR_1, 0, VAR_4 | (1 << 9));
 FUNC_6(VAR_1, 0, VAR_4);

 FUNC_7(30);

 FUNC_4(VAR_1, VAR_1->cfg->impulse_noise_mode, VAR_2->transmission_mode);
}
