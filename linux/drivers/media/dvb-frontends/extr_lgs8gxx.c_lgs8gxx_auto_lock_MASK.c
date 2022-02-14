
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgs8gxx_state {int curr_gi; TYPE_1__* config; } ;
typedef scalar_t__ s8 ;
struct TYPE_2__ {scalar_t__ prod; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct lgs8gxx_state*,int*,int*) ;
 int FUNC_2 (struct lgs8gxx_state*,int,int*) ;
 int FUNC_3 (struct lgs8gxx_state*) ;
 int FUNC_4 (struct lgs8gxx_state*,int,int) ;

__attribute__((used)) static void FUNC_5(struct lgs8gxx_state *VAR_7)
{
 s8 VAR_8;
 u8 VAR_9 = 0x2;
 u8 VAR_10 = 0;

 VAR_8 = FUNC_1(VAR_7, &VAR_10, &VAR_9);

 if (VAR_8 != 0) {
  FUNC_0("lgs8gxx_auto_detect failed\n");
 } else
  FUNC_0("detected param = 0x%02X\n", VAR_10);


 if (VAR_7->config->prod == VAR_1) {
  u8 VAR_11 = VAR_10 & VAR_5 ;

  VAR_11 = (VAR_11 == VAR_6) ? 0x60 : 0x40;
  VAR_10 &= VAR_0 | VAR_4 | VAR_3;
  VAR_10 |= VAR_11;
 }
 if (VAR_7->config->prod == VAR_2) {
  u8 VAR_12;
  FUNC_2(VAR_7, 0x19, &VAR_12);
  VAR_12 &= 0x81;
  VAR_12 |= VAR_10 << 1;
  FUNC_4(VAR_7, 0x19, VAR_12);
 } else {
  FUNC_4(VAR_7, 0x7D, VAR_10);
  if (VAR_7->config->prod == VAR_1)
   FUNC_4(VAR_7, 0xC0, VAR_10);
 }



 FUNC_3(VAR_7);

 switch (VAR_9) {
 case 128:
  VAR_7->curr_gi = 945; break;
 case 129:
  VAR_7->curr_gi = 595; break;
 case 130:
  VAR_7->curr_gi = 420; break;
 default:
  VAR_7->curr_gi = 945; break;
 }
}
