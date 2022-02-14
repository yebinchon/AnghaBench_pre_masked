
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p4tcc_softc {void* set_count; void* lowest_val; int auto_mode; int dev; } ;
struct cf_setting {int freq; } ;
typedef int device_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct p4tcc_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct cf_setting*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct p4tcc_softc *VAR_4;
 struct cf_setting VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->dev = VAR_3;
 VAR_4->set_count = VAR_0;







 VAR_4->auto_mode = VAR_1;
 switch (VAR_2 & 0xff) {
 case 0x22:
 case 0x24:
 case 0x25:
 case 0x27:
 case 0x29:




  VAR_4->set_count -= 1;
  break;
 case 0x07:
 case 0x0a:
 case 0x12:
 case 0x13:
 case 0x62:
 case 0x64:
 case 0x65:




  VAR_4->set_count -= 2;
  break;
 }
 VAR_4->lowest_val = VAR_0 - VAR_4->set_count + 1;





 VAR_5.freq = 10000;
 FUNC_2(VAR_3, &VAR_5);

 FUNC_0(VAR_3);
 return (0);
}
