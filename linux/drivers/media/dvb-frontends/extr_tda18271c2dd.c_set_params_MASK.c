
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tda_state {int m_SettlingTime; int m_Frequency; } ;
struct TYPE_2__ {int bandwidth_hz; int delivery_system; int frequency; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; struct tda_state* tuner_priv; } ;


 int FUNC_0 (struct tda_state*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct tda_state*,int ) ;




 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_7)
{
 struct tda_state *VAR_8 = VAR_7->tuner_priv;
 int VAR_9 = 0;
 int VAR_10;
 u32 VAR_11 = VAR_7->dtv_property_cache.bandwidth_hz;
 u32 VAR_12 = VAR_7->dtv_property_cache.delivery_system;

 VAR_8->m_Frequency = VAR_7->dtv_property_cache.frequency;

 switch (VAR_12) {
 case 129:
 case 128:
  switch (VAR_11) {
  case 6000000:
   VAR_10 = VAR_4;
   break;
  case 7000000:
   VAR_10 = VAR_5;
   break;
  case 8000000:
   VAR_10 = VAR_6;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 131:
 case 130:
  if (VAR_11 <= 6000000)
   VAR_10 = VAR_1;
  else if (VAR_11 <= 7000000)
   VAR_10 = VAR_2;
  else
   VAR_10 = VAR_3;
  break;
 default:
  return -VAR_0;
 }
 do {
  VAR_9 = FUNC_1(VAR_8, VAR_8->m_Frequency);
  if (VAR_9 < 0)
   break;
  VAR_9 = FUNC_0(VAR_8, VAR_8->m_Frequency,
           VAR_10);
  if (VAR_9 < 0)
   break;

  FUNC_2(VAR_8->m_SettlingTime);
 } while (0);
 return VAR_9;
}
