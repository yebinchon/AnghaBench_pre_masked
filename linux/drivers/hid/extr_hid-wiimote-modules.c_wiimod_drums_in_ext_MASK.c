
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int input; } ;
struct TYPE_3__ {int flags; int * pressure_drums; } ;
struct wiimote_data {TYPE_2__ extension; TYPE_1__ state; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct wiimote_data*,int,int,int,int,int *,int ,int) ;

__attribute__((used)) static void FUNC_4(struct wiimote_data *VAR_12, const __u8 *VAR_13)
{
 __u8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 __u8 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 VAR_14 = 7 - (VAR_13[3] >> 5);
 VAR_15 = (VAR_13[2] >> 1) & 0x1f;
 VAR_16 = !!(VAR_13[2] & 0x40);
 VAR_17 = !(VAR_13[2] & 0x80);
 VAR_18 = VAR_13[0] & 0x3f;
 VAR_19 = VAR_13[1] & 0x3f;
 VAR_20 = !(VAR_13[5] & 0x80);
 VAR_21 = !(VAR_13[5] & 0x40);
 VAR_22 = !(VAR_13[5] & 0x20);
 VAR_23 = !(VAR_13[5] & 0x10);
 VAR_24 = !(VAR_13[5] & 0x08);
 VAR_25 = !(VAR_13[5] & 0x04);
 VAR_26 = !(VAR_13[4] & 0x10);
 VAR_27 = !(VAR_13[4] & 0x04);

 if (VAR_12->state.flags & VAR_11) {
  VAR_18 &= 0x3e;
  VAR_19 &= 0x3e;
 }

 FUNC_3(VAR_12, VAR_16, VAR_15, VAR_14,
         VAR_20, &VAR_12->state.pressure_drums[0],
         VAR_4, 0x0e);
 FUNC_3(VAR_12, VAR_16, VAR_15, VAR_14,
         VAR_21, &VAR_12->state.pressure_drums[1],
         VAR_0, 0x19);
 FUNC_3(VAR_12, VAR_16, VAR_15, VAR_14,
         VAR_22, &VAR_12->state.pressure_drums[2],
         VAR_3, 0x11);
 FUNC_3(VAR_12, VAR_16, VAR_15, VAR_14,
         VAR_23, &VAR_12->state.pressure_drums[3],
         VAR_2, 0x12);
 FUNC_3(VAR_12, VAR_16, VAR_15, VAR_14,
         VAR_24, &VAR_12->state.pressure_drums[4],
         VAR_1, 0x0f);


 FUNC_3(VAR_12, VAR_16, VAR_17 ? 0xff : VAR_15, VAR_14,
         VAR_25, &VAR_12->state.pressure_drums[5],
         VAR_5, 0x1b);

 FUNC_3(VAR_12, VAR_16, VAR_17 ? VAR_15 : 0xff, VAR_14,
         0, &VAR_12->state.pressure_drums[6],
         VAR_6, 0x0e);

 FUNC_0(VAR_12->extension.input, VAR_7, VAR_18 - 0x20);
 FUNC_0(VAR_12->extension.input, VAR_8, VAR_19 - 0x20);

 FUNC_1(VAR_12->extension.input, VAR_10, VAR_27);
 FUNC_1(VAR_12->extension.input, VAR_9, VAR_26);

 FUNC_2(VAR_12->extension.input);
}
