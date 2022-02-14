
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct lgdt3306a_state {TYPE_1__* cfg; } ;
struct dtv_frontend_properties {int modulation; } ;
struct TYPE_2__ {int vsb_if_khz; int qam_if_khz; } ;


 int VAR_0 ;




 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct lgdt3306a_state*,int,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct lgdt3306a_state *VAR_1,
      struct dtv_frontend_properties *VAR_2)
{
 int VAR_3;
 u16 VAR_4;
 u8 VAR_5, VAR_6;

 switch (VAR_2->modulation) {
 case 128:
  VAR_4 = VAR_1->cfg->vsb_if_khz;
  break;
 case 130:
 case 131:
 case 129:
  VAR_4 = VAR_1->cfg->qam_if_khz;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_4) {
 default:
  FUNC_2("IF=%d KHz is not supported, 3250 assumed\n",
   VAR_4);

 case 3250:
  VAR_5 = 0x34;
  VAR_6 = 0x00;
  break;
 case 3500:
  VAR_5 = 0x38;
  VAR_6 = 0x00;
  break;
 case 4000:
  VAR_5 = 0x40;
  VAR_6 = 0x00;
  break;
 case 5000:
  VAR_5 = 0x50;
  VAR_6 = 0x00;
  break;
 case 5380:
  VAR_5 = 0x56;
  VAR_6 = 0x14;
  break;
 }
 VAR_3 = FUNC_1(VAR_1, 0x0010, VAR_5);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_1(VAR_1, 0x0011, VAR_6);
 if (VAR_3)
  return VAR_3;

 FUNC_0("if_freq=%d KHz->[%04x]\n", VAR_4, VAR_5<<8 | VAR_6);

 return 0;
}
