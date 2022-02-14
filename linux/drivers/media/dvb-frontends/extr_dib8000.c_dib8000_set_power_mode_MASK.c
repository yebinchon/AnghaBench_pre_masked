
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib8000_state {int revision; } ;
typedef enum dib8000_power_mode { ____Placeholder_dib8000_power_mode } dib8000_power_mode ;




 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;
 int FUNC_2 (char*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct dib8000_state *VAR_0, enum dib8000_power_mode VAR_1)
{

 u16 VAR_2 = 0x3fff, VAR_3 = 0xffff, VAR_4 = 0xffff,
  VAR_5 = (FUNC_0(VAR_0, 900) & 0xfffc) | 0x3,
  VAR_6;

 if (VAR_0->revision != 0x8090)
  VAR_6 = (FUNC_0(VAR_0, 1280) & 0x00ff) | 0xff00;
 else
  VAR_6 = (FUNC_0(VAR_0, 1280) & 0x707f) | 0x8f80;


 switch (VAR_1) {

 case 129:
  VAR_2 = 0x0000;
  VAR_3 = 0x0000;
  VAR_4 = 0x0000;
  VAR_5 &= 0xfffc;
  if (VAR_0->revision != 0x8090)
   VAR_6 &= 0x00ff;
  else
   VAR_6 &= 0x707f;
  break;
 case 128:
  if (VAR_0->revision != 0x8090)
   VAR_6 &= 0x00ff;
  else
   VAR_6 &= 0xfa7b;
  break;
 }

 FUNC_2("powermode : 774 : %x ; 775 : %x; 776 : %x ; 900 : %x; 1280 : %x\n", VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_0, 774, VAR_2);
 FUNC_1(VAR_0, 775, VAR_3);
 FUNC_1(VAR_0, 776, VAR_4);
 FUNC_1(VAR_0, 900, VAR_5);
 FUNC_1(VAR_0, 1280, VAR_6);
}
