
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct wiimote_data {int ir; TYPE_1__ state; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wiimote_data *VAR_9, const __u8 *VAR_10,
       bool VAR_11, unsigned int VAR_12)
{
 __u16 VAR_13, VAR_14;
 __u8 VAR_15, VAR_16;
 bool VAR_17 = 0;

 if (!(VAR_9->state.flags & VAR_8))
  return;

 switch (VAR_12) {
 case 0:
  VAR_15 = VAR_0;
  VAR_16 = VAR_1;
  break;
 case 1:
  VAR_15 = VAR_2;
  VAR_16 = VAR_3;
  break;
 case 2:
  VAR_15 = VAR_4;
  VAR_16 = VAR_5;
  break;
 case 3:
  VAR_15 = VAR_6;
  VAR_16 = VAR_7;
  VAR_17 = 1;
  break;
 default:
  return;
 }
 if (VAR_11) {
  VAR_13 = VAR_10[1] | ((VAR_10[0] & 0x03) << 8);
  VAR_14 = VAR_10[2] | ((VAR_10[0] & 0x0c) << 6);
 } else {
  VAR_13 = VAR_10[0] | ((VAR_10[2] & 0x30) << 4);
  VAR_14 = VAR_10[1] | ((VAR_10[2] & 0xc0) << 2);
 }

 FUNC_0(VAR_9->ir, VAR_15, VAR_13);
 FUNC_0(VAR_9->ir, VAR_16, VAR_14);

 if (VAR_17)
  FUNC_1(VAR_9->ir);
}
