
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int mobile_mode; } ;
struct dib7000m_state {int revision; TYPE_1__ cfg; } ;
typedef enum dib7000m_power_mode { ____Placeholder_dib7000m_power_mode } dib7000m_power_mode ;
 int FUNC_0 (struct dib7000m_state*,int,int) ;

__attribute__((used)) static void FUNC_1(struct dib7000m_state *VAR_0, enum dib7000m_power_mode VAR_1)
{

 u16 VAR_2 = 0xffff, VAR_3 = 0xffff, VAR_4 = 0xffff, VAR_5 = 0x3fff;
 u8 VAR_6 = 0;


 switch (VAR_1) {

  case 133:
   VAR_2 = 0x0000; VAR_3 = 0x0000; VAR_4 = 0x0000; VAR_5 = 0x0000;
   break;


  case 130:
   VAR_4 &= ~((1 << 7) | (1 << 6) | (1 << 5) | (1 << 2));
   break;

  case 129:
   VAR_2 &= ~((1 << 15) | (1 << 14) | (1 << 11) | (1 << 10));
   VAR_4 &= ~((1 << 7) | (1 << 6) | (1 << 5) | (1 << 4) | (1 << 2));
   VAR_5 &= ~((1 << 0));
   break;

  case 131:
   VAR_2 = 0x0000; VAR_3 = 0x801f; VAR_4 = 0x0000; VAR_5 = 0x0000;
   break;

  case 132:
   VAR_2 = 0x0000; VAR_3 = 0x8000; VAR_4 = 0x010b; VAR_5 = 0x0000;
   break;
  case 128:
   break;
 }


 if (!VAR_0->cfg.mobile_mode)
  VAR_3 |= (1 << 7) | (1 << 6) | (1 << 4) | (1 << 2) | (1 << 1);


 if (VAR_0->revision != 0x4000)
  VAR_5 <<= 1;

 if (VAR_0->revision == 0x4003)
  VAR_6 = 1;

 FUNC_0(VAR_0, 903 + VAR_6, VAR_2);
 FUNC_0(VAR_0, 904 + VAR_6, VAR_3);
 FUNC_0(VAR_0, 905 + VAR_6, VAR_4);
 FUNC_0(VAR_0, 906 + VAR_6, VAR_5);
}
