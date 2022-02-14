
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_context {TYPE_1__* drv_data; scalar_t__ dvi_mode; } ;
struct TYPE_2__ {scalar_t__ type; } ;


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
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct hdmi_context*) ;
 int FUNC_2 (struct hdmi_context*,int ,int) ;
 int FUNC_3 (struct hdmi_context*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct hdmi_context *VAR_22)
{

 FUNC_3(VAR_22, VAR_5, 0, VAR_6 |
  VAR_7 | VAR_8);


 FUNC_3(VAR_22, VAR_12,
  VAR_10, VAR_11);

 FUNC_2(VAR_22, VAR_3, 0);

 FUNC_3(VAR_22, VAR_1, 0, VAR_0);

 if (VAR_22->dvi_mode) {
  FUNC_3(VAR_22, VAR_12,
    VAR_9, VAR_11);
  FUNC_2(VAR_22, VAR_3,
    VAR_21 | VAR_4);
 }

 if (VAR_22->drv_data->type == VAR_13) {

  FUNC_2(VAR_22, VAR_17, 0x12);
  FUNC_2(VAR_22, VAR_18, 0x34);
  FUNC_2(VAR_22, VAR_19, 0x56);


  FUNC_2(VAR_22, VAR_16, 0x02);

  FUNC_2(VAR_22, FUNC_0(0), 0 << 5);
  FUNC_3(VAR_22, VAR_2, 0x10 << 5, 0x11 << 5);

  FUNC_2(VAR_22, VAR_20, 0x02);
  FUNC_2(VAR_22, VAR_15, 0x02);
  FUNC_2(VAR_22, VAR_14, 0x04);
 } else {
  FUNC_1(VAR_22);


  FUNC_3(VAR_22, VAR_2, 2, 3 << 5);
 }
}
