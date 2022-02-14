
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lgdt3305_state {TYPE_1__* cfg; } ;
struct dtv_frontend_properties {int modulation; } ;
struct TYPE_2__ {int usref_8vsb; int usref_qam64; int usref_qam256; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3305_state*,int ,int,int) ;
 int FUNC_2 (struct lgdt3305_state*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct lgdt3305_state *VAR_4,
          struct dtv_frontend_properties *VAR_5)
{
 u16 VAR_6 = 0;

 switch (VAR_5->modulation) {
 case 128:
  if (VAR_4->cfg->usref_8vsb)
   VAR_6 = VAR_4->cfg->usref_8vsb;
  break;
 case 129:
  if (VAR_4->cfg->usref_qam64)
   VAR_6 = VAR_4->cfg->usref_qam64;
  break;
 case 130:
  if (VAR_4->cfg->usref_qam256)
   VAR_6 = VAR_4->cfg->usref_qam256;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6) {
  FUNC_0("set manual mode: 0x%04x\n", VAR_6);

  FUNC_1(VAR_4, VAR_1, 3, 1);

  FUNC_2(VAR_4, VAR_2,
       0xff & (VAR_6 >> 8));
  FUNC_2(VAR_4, VAR_3,
       0xff & (VAR_6 >> 0));
 }
 return 0;
}
