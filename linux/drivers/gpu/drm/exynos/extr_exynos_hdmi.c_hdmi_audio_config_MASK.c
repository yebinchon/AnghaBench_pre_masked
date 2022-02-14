
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* status; } ;
struct TYPE_5__ {int sample_width; TYPE_1__ iec; int sample_rate; } ;
struct TYPE_6__ {TYPE_2__ params; } ;
struct hdmi_context {TYPE_3__ audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct hdmi_context*,int ) ;
 int FUNC_11 (struct hdmi_context*,int ) ;
 int FUNC_12 (struct hdmi_context*,int ,int) ;

__attribute__((used)) static void FUNC_13(struct hdmi_context *VAR_28)
{
 u32 VAR_29 = 1;
 u32 VAR_30, VAR_31;
 int VAR_32;

 switch (VAR_28->audio.params.sample_width) {
 case 20:
  VAR_30 = 2;
  break;
 case 24:
  VAR_30 = 3;
  break;
 default:
  VAR_30 = 1;
  VAR_29 = 0;
  break;
 }

 FUNC_10(VAR_28, VAR_28->audio.params.sample_rate);

 FUNC_12(VAR_28, VAR_20, VAR_16
    | VAR_0 | VAR_13
    | VAR_22);

 FUNC_12(VAR_28, VAR_19, VAR_2
   | VAR_3 | VAR_4);

 FUNC_12(VAR_28, VAR_21, VAR_14);
 FUNC_12(VAR_28, VAR_8, VAR_9);
 FUNC_12(VAR_28, VAR_8, VAR_10);

 VAR_31 = FUNC_11(VAR_28, VAR_15) | 0x01;
 FUNC_12(VAR_28, VAR_15, VAR_31);


 FUNC_12(VAR_28, VAR_23, FUNC_3(5)
   | FUNC_2(6));

 FUNC_12(VAR_28, VAR_24, FUNC_5(3)
   | FUNC_4(4));

 FUNC_12(VAR_28, VAR_25, FUNC_7(1)
   | FUNC_6(2));

 FUNC_12(VAR_28, VAR_26, FUNC_1(0));


 FUNC_12(VAR_28, VAR_11, VAR_27
   | VAR_17);
 FUNC_12(VAR_28, VAR_12, VAR_18
   | FUNC_8(VAR_29)
   | FUNC_9(VAR_30)
   | VAR_1);


 for (VAR_32 = 0; VAR_32 < VAR_7; VAR_32++)
  FUNC_12(VAR_28, FUNC_0(VAR_32),
    VAR_28->audio.params.iec.status[VAR_32]);

 FUNC_12(VAR_28, VAR_6, VAR_5);
}
