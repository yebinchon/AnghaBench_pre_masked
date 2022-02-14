
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct dtv_frontend_properties {int guard_interval; int transmission_mode; int modulation; scalar_t__ hierarchy; int code_rate_HP; int code_rate_LP; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static u32 FUNC_1(struct dvb_frontend *VAR_0)
{
 struct dtv_frontend_properties *VAR_1 = &VAR_0->dtv_property_cache;
 u64 VAR_2, VAR_3;
 u32 VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8 = 1, VAR_9;
 int VAR_10 = 0, VAR_11;

 switch (VAR_1->guard_interval) {
 case 135:
  VAR_6 = 4;
  break;
 case 134:
  VAR_6 = 8;
  break;
 case 137:
  VAR_6 = 16;
  break;
 default:
 case 136:
  VAR_6 = 32;
  break;
 }

 switch (VAR_1->transmission_mode) {
 case 130:
  VAR_11 = 4;
  break;
 case 129:
  VAR_11 = 2;
  break;
 default:
 case 128:
  VAR_11 = 1;
  break;
 }

 switch (VAR_1->modulation) {
 case 143:
 case 131:
  VAR_9 = 2;
  break;
 case 133:
  VAR_9 = 4;
  break;
 default:
 case 132:
  VAR_9 = 6;
  break;
 }

 switch ((VAR_1->hierarchy == 0 || 1 == 1) ? VAR_1->code_rate_HP : VAR_1->code_rate_LP) {
 case 142:
  VAR_7 = 1;
  VAR_8 = 2;
  break;
 case 141:
  VAR_7 = 2;
  VAR_8 = 3;
  break;
 case 140:
  VAR_7 = 3;
  VAR_8 = 4;
  break;
 case 139:
  VAR_7 = 5;
  VAR_8 = 6;
  break;
 default:
 case 138:
  VAR_7 = 7;
  VAR_8 = 8;
  break;
 }

 VAR_5 = VAR_9 * VAR_7 * VAR_11 * 384;







 if (!VAR_5)
  return 0;


 VAR_2 = VAR_8 * (1008 * 1562500L);
 VAR_3 = VAR_2;
 FUNC_0(VAR_3, VAR_6);
 VAR_2 = VAR_2 + VAR_3;
 VAR_2 += VAR_5 / 2;
 FUNC_0(VAR_2, VAR_5);

 VAR_4 = 1008 * 96 * VAR_10;
 VAR_2 += VAR_4 + VAR_4 / VAR_6;

 return VAR_2;
}
