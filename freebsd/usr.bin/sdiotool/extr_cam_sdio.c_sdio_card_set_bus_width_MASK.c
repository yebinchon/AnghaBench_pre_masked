
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cam_device {int dummy; } ;
typedef enum mmc_bus_width { ____Placeholder_mmc_bus_width } mmc_bus_width ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct cam_device*,int ,int ,int,int*,int*) ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct cam_device *VAR_2, enum mmc_bus_width VAR_3) {
 int VAR_4;
 uint8_t VAR_5;
 VAR_4 = FUNC_0(VAR_2, 0, VAR_1, 0, ((void*)0), &VAR_5);
 if (VAR_4 < 0) {
  FUNC_1("Error getting CCCR_BUS_WIDTH value");
  return VAR_4;
 }
 VAR_5 &= ~0x3;
 switch (VAR_3) {
 case 130:

  break;
 case 129:
  VAR_5 |= VAR_0;
  break;
 case 128:
  FUNC_1("Cannot do 8-bit on SDIO yet");
  return -1;
  break;
 }
 VAR_4 = FUNC_0(VAR_2, 0, VAR_1, 1, &VAR_5, &VAR_5);
 if (VAR_4 < 0) {
  FUNC_1("Error setting CCCR_BUS_WIDTH value");
  return VAR_4;
 }
 return VAR_4;
}
