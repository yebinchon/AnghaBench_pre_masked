
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int input; } ;
struct TYPE_3__ {int flags; } ;
struct wiimote_data {TYPE_2__ extension; TYPE_1__ state; } ;
typedef int __u8 ;
typedef int __s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int * VAR_8 ;

__attribute__((used)) static void FUNC_3(struct wiimote_data *VAR_9, const __u8 *VAR_10)
{
 __s16 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 VAR_14 = VAR_10[0];
 VAR_15 = VAR_10[1];
 VAR_14 -= 128;
 VAR_15 -= 128;

 VAR_11 = VAR_10[2] << 2;
 VAR_12 = VAR_10[3] << 2;
 VAR_13 = VAR_10[4] << 2;

 if (VAR_9->state.flags & VAR_7) {
  VAR_11 |= (VAR_10[5] >> 3) & 0x02;
  VAR_12 |= (VAR_10[5] >> 4) & 0x02;
  VAR_13 &= ~0x4;
  VAR_13 |= (VAR_10[5] >> 5) & 0x06;
 } else {
  VAR_11 |= (VAR_10[5] >> 2) & 0x03;
  VAR_12 |= (VAR_10[5] >> 4) & 0x03;
  VAR_13 |= (VAR_10[5] >> 6) & 0x03;
 }

 VAR_11 -= 0x200;
 VAR_12 -= 0x200;
 VAR_13 -= 0x200;

 FUNC_0(VAR_9->extension.input, VAR_0, VAR_14);
 FUNC_0(VAR_9->extension.input, VAR_1, VAR_15);

 FUNC_0(VAR_9->extension.input, VAR_2, VAR_11);
 FUNC_0(VAR_9->extension.input, VAR_3, VAR_12);
 FUNC_0(VAR_9->extension.input, VAR_4, VAR_13);

 if (VAR_9->state.flags & VAR_7) {
  FUNC_1(VAR_9->extension.input,
   VAR_8[VAR_6],
   !(VAR_10[5] & 0x04));
  FUNC_1(VAR_9->extension.input,
   VAR_8[VAR_5],
   !(VAR_10[5] & 0x08));
 } else {
  FUNC_1(VAR_9->extension.input,
   VAR_8[VAR_6],
   !(VAR_10[5] & 0x01));
  FUNC_1(VAR_9->extension.input,
   VAR_8[VAR_5],
   !(VAR_10[5] & 0x02));
 }

 FUNC_2(VAR_9->extension.input);
}
