
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int disable_sample_and_hold; int enable_current_mirror; } ;
struct dib7000p_state {scalar_t__ version; TYPE_1__ cfg; } ;
typedef enum dibx000_adc_states { ____Placeholder_dibx000_adc_states } dibx000_adc_states ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct dib7000p_state *VAR_1, enum dibx000_adc_states VAR_2)
{
 u16 VAR_3 = 0, VAR_4 = 0;
 u16 VAR_5;

 if (VAR_1->version != VAR_0) {
  VAR_3 = FUNC_0(VAR_1, 908);
  VAR_4 = FUNC_0(VAR_1, 909);
 }

 switch (VAR_2) {
 case 130:
  if (VAR_1->version == VAR_0) {
   VAR_5 = FUNC_0(VAR_1, 1925);

   FUNC_1(VAR_1, 1925, VAR_5 | (1 << 4) | (1 << 2));

   VAR_5 = FUNC_0(VAR_1, 1925);
   FUNC_2(200);
   FUNC_1(VAR_1, 1925, VAR_5 & ~(1 << 4));

   VAR_5 = FUNC_0(VAR_1, 72) & ~((0x3 << 14) | (0x3 << 12));
   FUNC_1(VAR_1, 72, VAR_5 | (1 << 14) | (3 << 12) | 524);
  } else {
   VAR_4 |= (1 << 1) | (1 << 0);
   FUNC_1(VAR_1, 909, VAR_4);
   VAR_4 &= ~(1 << 1);
  }
  break;

 case 131:
  if (VAR_1->version == VAR_0) {
   VAR_5 = FUNC_0(VAR_1, 1925);
   FUNC_1(VAR_1, 1925, (VAR_5 & ~(1 << 2)) | (1 << 4));
  } else
   VAR_4 |= (1 << 1) | (1 << 0);
  break;

 case 132:
  VAR_3 &= 0x0fff;
  VAR_4 &= 0x0003;
  break;

 case 133:
  VAR_3 |= (1 << 14) | (1 << 13) | (1 << 12);
  VAR_4 |= (1 << 5) | (1 << 4) | (1 << 3) | (1 << 2);
  break;

 case 128:
  VAR_3 &= ~(1 << 15);
  break;

 case 129:
  VAR_3 |= (1 << 15);
  break;

 default:
  break;
 }



 VAR_4 |= (VAR_1->cfg.disable_sample_and_hold & 1) << 4;
 VAR_3 |= (VAR_1->cfg.enable_current_mirror & 1) << 7;

 if (VAR_1->version != VAR_0) {
  FUNC_1(VAR_1, 908, VAR_3);
  FUNC_1(VAR_1, 909, VAR_4);
 }
}
