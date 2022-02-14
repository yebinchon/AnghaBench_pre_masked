
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct e82545_softc {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static uint32_t
FUNC_1(struct e82545_softc *VAR_9, uint8_t VAR_10,
   uint8_t VAR_11)
{

 switch (VAR_10) {
 case 128:
  return (VAR_4 | VAR_2 |
   VAR_3);
 case 132:
  return VAR_5;
 case 129:
  return 0;
 case 133:
  return (VAR_7 | VAR_8 |
   VAR_6);
 case 131:
  return (VAR_1 >> 16) & 0xFFFF;
 case 130:
  return (VAR_1 | VAR_0) & 0xFFFF;
 default:
  FUNC_0("Unknown mdi read reg:0x%x phy:0x%x\r\n", VAR_10, VAR_11);
  return 0;
 }

}
