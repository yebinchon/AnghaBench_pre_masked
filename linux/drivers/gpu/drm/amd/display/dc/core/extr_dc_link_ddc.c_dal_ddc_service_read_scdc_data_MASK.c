
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int member_0; } ;
union hdmi_scdc_status_flags_data {int* byte; TYPE_1__ member_0; } ;
typedef int uint8_t ;
typedef int tmds_config ;
struct ddc_service {int dummy; } ;
typedef int scramble_status ;
typedef int offset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ddc_service*,int,int*,int,int*,int) ;

void FUNC_1(struct ddc_service *VAR_4)
{
 uint8_t VAR_5 = VAR_0;
 uint8_t VAR_6 = VAR_3;
 uint8_t VAR_7 = 0;

 FUNC_0(VAR_4, VAR_5, &VAR_6,
   sizeof(VAR_6), &VAR_7, sizeof(VAR_7));
 if (VAR_7 & 0x1) {
  union hdmi_scdc_status_flags_data VAR_8 = { 0 };
  uint8_t VAR_9 = 0;

  VAR_6 = VAR_1;
  FUNC_0(VAR_4, VAR_5,
    &VAR_6, sizeof(VAR_6), &VAR_9,
    sizeof(VAR_9));
  VAR_6 = VAR_2;
  FUNC_0(VAR_4, VAR_5,
    &VAR_6, sizeof(VAR_6), VAR_8.byte,
    sizeof(VAR_8.byte));
 }
}
