
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
 int VAR_13 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int * VAR_14 ;

__attribute__((used)) static void FUNC_3(struct wiimote_data *VAR_15, const __u8 *VAR_16)
{
 __u8 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 VAR_17 = VAR_16[0] & 0x3f;
 VAR_18 = VAR_16[1] & 0x3f;
 VAR_19 = VAR_16[2] & 0x1f;
 VAR_20 = VAR_16[3] & 0x1f;
 VAR_21 = !(VAR_16[4] & 0x40);
 VAR_22 = !(VAR_16[4] & 0x10);
 VAR_23 = !(VAR_16[4] & 0x04);
 VAR_24 = !(VAR_16[5] & 0x80);
 VAR_25 = !(VAR_16[5] & 0x40);
 VAR_26 = !(VAR_16[5] & 0x20);
 VAR_27 = !(VAR_16[5] & 0x10);
 VAR_28 = !(VAR_16[5] & 0x08);
 VAR_29 = !(VAR_16[5] & 0x01);

 if (VAR_15->state.flags & VAR_13) {
  VAR_29 = !(VAR_16[0] & 0x01);
  VAR_17 &= 0x3e;
  VAR_18 &= 0x3e;
 }

 FUNC_0(VAR_15->extension.input, VAR_2, VAR_17 - 0x20);
 FUNC_0(VAR_15->extension.input, VAR_3, VAR_18 - 0x20);
 FUNC_0(VAR_15->extension.input, VAR_0, VAR_19);
 FUNC_0(VAR_15->extension.input, VAR_1, VAR_20 - 0x10);

 FUNC_1(VAR_15->extension.input,
    VAR_14[VAR_6],
    VAR_27);
 FUNC_1(VAR_15->extension.input,
    VAR_14[VAR_10],
    VAR_25);
 FUNC_1(VAR_15->extension.input,
    VAR_14[VAR_12],
    VAR_28);
 FUNC_1(VAR_15->extension.input,
    VAR_14[VAR_4],
    VAR_26);
 FUNC_1(VAR_15->extension.input,
    VAR_14[VAR_8],
    VAR_24);
 FUNC_1(VAR_15->extension.input,
    VAR_14[VAR_11],
    VAR_29);
 FUNC_1(VAR_15->extension.input,
    VAR_14[VAR_5],
    VAR_21);
 FUNC_1(VAR_15->extension.input,
    VAR_14[VAR_9],
    VAR_23);
 FUNC_1(VAR_15->extension.input,
    VAR_14[VAR_7],
    VAR_22);

 FUNC_2(VAR_15->extension.input);
}
