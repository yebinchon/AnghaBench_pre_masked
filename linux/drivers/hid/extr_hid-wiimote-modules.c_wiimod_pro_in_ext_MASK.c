
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int input; } ;
struct TYPE_3__ {int flags; int* calib_pro_sticks; } ;
struct wiimote_data {TYPE_2__ extension; TYPE_1__ state; } ;
typedef int __u8 ;
typedef int __s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int * VAR_22 ;

__attribute__((used)) static void FUNC_4(struct wiimote_data *VAR_23, const __u8 *VAR_24)
{
 __s16 VAR_25, VAR_26, VAR_27, VAR_28;
 VAR_27 = (VAR_24[0] & 0xff) | ((VAR_24[1] & 0x0f) << 8);
 VAR_25 = (VAR_24[2] & 0xff) | ((VAR_24[3] & 0x0f) << 8);
 VAR_28 = (VAR_24[4] & 0xff) | ((VAR_24[5] & 0x0f) << 8);
 VAR_26 = (VAR_24[6] & 0xff) | ((VAR_24[7] & 0x0f) << 8);


 VAR_27 -= 0x800;
 VAR_28 = 0x800 - VAR_28;
 VAR_25 -= 0x800;
 VAR_26 = 0x800 - VAR_26;






 if (!(VAR_23->state.flags & VAR_21)) {
  VAR_23->state.flags |= VAR_21;
  if (FUNC_0(VAR_27) < 500)
   VAR_23->state.calib_pro_sticks[0] = -VAR_27;
  if (FUNC_0(VAR_28) < 500)
   VAR_23->state.calib_pro_sticks[1] = -VAR_28;
  if (FUNC_0(VAR_25) < 500)
   VAR_23->state.calib_pro_sticks[2] = -VAR_25;
  if (FUNC_0(VAR_26) < 500)
   VAR_23->state.calib_pro_sticks[3] = -VAR_26;
 }


 VAR_27 += VAR_23->state.calib_pro_sticks[0];
 VAR_28 += VAR_23->state.calib_pro_sticks[1];
 VAR_25 += VAR_23->state.calib_pro_sticks[2];
 VAR_26 += VAR_23->state.calib_pro_sticks[3];

 FUNC_1(VAR_23->extension.input, VAR_2, VAR_27);
 FUNC_1(VAR_23->extension.input, VAR_3, VAR_28);
 FUNC_1(VAR_23->extension.input, VAR_0, VAR_25);
 FUNC_1(VAR_23->extension.input, VAR_1, VAR_26);

 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_11],
    !(VAR_24[8] & 0x80));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_6],
    !(VAR_24[8] & 0x40));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_14],
    !(VAR_24[8] & 0x20));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_9],
    !(VAR_24[8] & 0x10));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_7],
    !(VAR_24[8] & 0x08));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_10],
    !(VAR_24[8] & 0x04));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_15],
    !(VAR_24[8] & 0x02));

 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_19],
    !(VAR_24[9] & 0x80));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_5],
    !(VAR_24[9] & 0x40));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_18],
    !(VAR_24[9] & 0x20));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_4],
    !(VAR_24[9] & 0x10));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_17],
    !(VAR_24[9] & 0x08));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_20],
    !(VAR_24[9] & 0x04));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_8],
    !(VAR_24[9] & 0x02));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_16],
    !(VAR_24[9] & 0x01));

 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_12],
    !(VAR_24[10] & 0x02));
 FUNC_2(VAR_23->extension.input,
    VAR_22[VAR_13],
    !(VAR_24[10] & 0x01));

 FUNC_3(VAR_23->extension.input);
}
