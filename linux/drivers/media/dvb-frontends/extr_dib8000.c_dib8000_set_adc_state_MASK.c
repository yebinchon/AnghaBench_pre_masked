
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib8000_state {int revision; } ;
typedef enum dibx000_adc_states { ____Placeholder_dibx000_adc_states } dibx000_adc_states ;
 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dib8000_state *VAR_0, enum dibx000_adc_states VAR_1)
{
 int VAR_2 = 0;
 u16 VAR_3, VAR_4 = FUNC_0(VAR_0, 907);
 u16 VAR_5 = FUNC_0(VAR_0, 908);

 switch (VAR_1) {
 case 130:
  if (VAR_0->revision != 0x8090) {
   VAR_5 |= (1 << 1) | (1 << 0);
   VAR_2 |= FUNC_1(VAR_0, 908, VAR_5);
   VAR_5 &= ~(1 << 1);
  } else {
   VAR_3 = FUNC_0(VAR_0, 1925);

   FUNC_1(VAR_0, 1925, VAR_3 |
     (1<<4) | (1<<2));


   VAR_3 = FUNC_0(VAR_0, 1925);
   FUNC_2(20);

   FUNC_1(VAR_0, 1925, VAR_3 & ~(1<<4));

   VAR_3 = FUNC_0(VAR_0, 921) & ~((0x3 << 14)
     | (0x3 << 12));


   FUNC_1(VAR_0, 921, VAR_3 | (1 << 14)
     | (3 << 12));
  }
  break;

 case 131:
  if (VAR_0->revision == 0x8090) {
   VAR_3 = FUNC_0(VAR_0, 1925);

   FUNC_1(VAR_0, 1925,
     (VAR_3 & ~(1<<2)) | (1<<4));
  }
  VAR_5 |= (1 << 1) | (1 << 0);
  break;

 case 132:
  VAR_4 &= 0x0fff;
  VAR_5 &= 0x0003;
  break;

 case 133:
  VAR_4 = (1 << 13) | (1 << 12);
  VAR_5 = (1 << 6) | (1 << 5) | (1 << 4) | (1 << 3) | (1 << 1);
  break;

 case 128:
  VAR_4 &= ~(1 << 15);
  break;

 case 129:
  VAR_4 |= (1 << 15);
  break;

 default:
  break;
 }

 VAR_2 |= FUNC_1(VAR_0, 907, VAR_4);
 VAR_2 |= FUNC_1(VAR_0, 908, VAR_5);

 return VAR_2;
}
