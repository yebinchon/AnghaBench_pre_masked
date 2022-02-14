
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib7000p_state {scalar_t__ version; } ;
typedef enum dib7000p_power_mode { ____Placeholder_dib7000p_power_mode } dib7000p_power_mode ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dib7000p_state *VAR_1, enum dib7000p_power_mode VAR_2)
{

 u16 VAR_3 = 0x3fff, VAR_4 = 0xffff, VAR_5 = 0x0007, VAR_6 = 0x0003, VAR_7 = (0xfe00) | (FUNC_0(VAR_1, 1280) & 0x01ff);


 switch (VAR_2) {

 case 130:
  VAR_3 = 0x0000;
  VAR_4 = 0x0000;
  VAR_5 = 0x0;
  VAR_6 = 0x0;
  if (VAR_1->version == VAR_0)
   VAR_7 &= 0x001f;
  else
   VAR_7 &= 0x01ff;
  break;

 case 129:

  VAR_3 &= ~((1 << 15) | (1 << 14) | (1 << 11) | (1 << 10) | (1 << 9));

  VAR_5 &= ~((1 << 0));

  if (VAR_1->version != VAR_0)
   VAR_7 &= ~((1 << 11));
  VAR_7 &= ~(1 << 6);

 case 128:


  if (VAR_1->version == VAR_0)
   VAR_7 &= ~((1 << 7) | (1 << 5));
  else
   VAR_7 &= ~((1 << 14) | (1 << 13) | (1 << 12) | (1 << 10));
  break;


 }

 FUNC_1(VAR_1, 774, VAR_3);
 FUNC_1(VAR_1, 775, VAR_4);
 FUNC_1(VAR_1, 776, VAR_5);
 FUNC_1(VAR_1, 1280, VAR_7);
 if (VAR_1->version != VAR_0)
  FUNC_1(VAR_1, 899, VAR_6);

 return 0;
}
