
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rt305x_esw {int reg_initval_fct2; int reg_initval_fpa2; int port_disable; int reg_led_polarity; int port_map; int swdev; TYPE_1__* ports; } ;
struct TYPE_2__ {int disable; int led; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rt305x_esw*) ;
 int FUNC_2 (struct rt305x_esw*,int ,int,int) ;
 int FUNC_3 (struct rt305x_esw*,int,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_44 ;
 int FUNC_5 (struct rt305x_esw*,int,int,int) ;

__attribute__((used)) static void FUNC_6(struct rt305x_esw *VAR_45)
{
 int VAR_46;
 u8 VAR_47 = 0;
 u8 VAR_48 = VAR_9;


 FUNC_3(VAR_45, 0xC8A07850, VAR_18);
 FUNC_3(VAR_45, 0x00000000, VAR_32);

 FUNC_3(VAR_45, 0x00005555 |
       (VAR_14 << VAR_8),
  VAR_28);


 FUNC_3(VAR_45, ((VAR_14 << VAR_10) |
        (VAR_14 << VAR_11)),
  VAR_29);


 FUNC_3(VAR_45, ((VAR_14 << VAR_12) |
        (VAR_16 << VAR_13)),
  VAR_30);

 if (VAR_45->reg_initval_fct2)
  FUNC_3(VAR_45, VAR_45->reg_initval_fct2, VAR_19);
 else
  FUNC_3(VAR_45, 0x0002500c, VAR_19);







 FUNC_3(VAR_45, 0x0008a301, VAR_31);


 FUNC_3(VAR_45,
  (VAR_36 |
  (VAR_15 << VAR_39) |
  (VAR_15 << VAR_38) |
  (VAR_15 << VAR_37)),
  VAR_33);






 if (VAR_45->reg_initval_fpa2)
  FUNC_3(VAR_45, VAR_45->reg_initval_fpa2, VAR_21);
 else
  FUNC_3(VAR_45, 0x3f502b28, VAR_21);
 FUNC_3(VAR_45, 0x00000000, VAR_20);


 FUNC_3(VAR_45, 0x00000005, VAR_23);
 FUNC_3(VAR_45, 0x00000005, VAR_24);
 FUNC_3(VAR_45, 0x00000005, VAR_25);
 FUNC_3(VAR_45, 0x00000005, VAR_26);
 FUNC_3(VAR_45, 0x00000005, VAR_27);


 VAR_47 = VAR_45->port_disable;




 VAR_47 |= FUNC_1(VAR_45);

 for (VAR_46 = 0; VAR_46 < 6; VAR_46++)
  VAR_45->ports[VAR_46].disable = (VAR_47 & (1 << VAR_46)) != 0;

 if (VAR_44 == VAR_40) {

  FUNC_4(VAR_43);

  FUNC_5(VAR_45, 0, 31, 0x8000);
  for (VAR_46 = 0; VAR_46 < 5; VAR_46++) {
   if (VAR_45->ports[VAR_46].disable) {
    FUNC_5(VAR_45, VAR_46, VAR_4, VAR_2);
   } else {
    FUNC_5(VAR_45, VAR_46, VAR_4,
       VAR_1 |
       VAR_0 |
       VAR_3);
   }

   FUNC_5(VAR_45, VAR_46, 26, 0x1601);

   FUNC_5(VAR_45, VAR_46, 29, 0x7016);

   FUNC_5(VAR_45, VAR_46, 30, 0x0038);
  }


  FUNC_5(VAR_45, 0, 31, 0x0);

  FUNC_5(VAR_45, 0, 1, 0x4a40);

  FUNC_5(VAR_45, 0, 2, 0x6254);

  FUNC_5(VAR_45, 0, 3, 0xa17f);
  FUNC_5(VAR_45, 0, 12, 0x7eaa);

  FUNC_5(VAR_45, 0, 14, 0x65);

  FUNC_5(VAR_45, 0, 16, 0x0684);

  FUNC_5(VAR_45, 0, 17, 0x0fe0);

  FUNC_5(VAR_45, 0, 18, 0x40ba);



  FUNC_5(VAR_45, 0, 22, 0x253f);

  FUNC_5(VAR_45, 0, 27, 0x2fda);

  FUNC_5(VAR_45, 0, 28, 0xc410);

  FUNC_5(VAR_45, 0, 29, 0x598b);

  FUNC_5(VAR_45, 0, 31, 0x8000);
 } else if (VAR_44 == VAR_41) {

  FUNC_4(VAR_43);


  FUNC_3(VAR_45, VAR_45->reg_led_polarity & 0x1F,
   VAR_42);


  FUNC_5(VAR_45, 0, 31, 0x8000);
  for (VAR_46 = 0; VAR_46 < 5; VAR_46++) {
   if (VAR_45->ports[VAR_46].disable) {
    FUNC_5(VAR_45, VAR_46, VAR_4, VAR_2);
   } else {
    FUNC_5(VAR_45, VAR_46, VAR_4,
       VAR_1 |
       VAR_0 |
       VAR_3);
   }

   FUNC_5(VAR_45, VAR_46, 26, 0x1601);

   FUNC_5(VAR_45, VAR_46, 29, 0x7015);

   FUNC_5(VAR_45, VAR_46, 30, 0x0038);
  }


  FUNC_5(VAR_45, 0, 31, 0x0);

  FUNC_5(VAR_45, 0, 1, 0x4a40);

  FUNC_5(VAR_45, 0, 2, 0x6254);

  FUNC_5(VAR_45, 0, 3, 0xa17f);
  FUNC_5(VAR_45, 0, 12, 0x7eaa);

  FUNC_5(VAR_45, 0, 14, 0x65);

  FUNC_5(VAR_45, 0, 16, 0x0684);

  FUNC_5(VAR_45, 0, 17, 0x0fe0);

  FUNC_5(VAR_45, 0, 18, 0x40ba);



  FUNC_5(VAR_45, 0, 22, 0x253f);

  FUNC_5(VAR_45, 0, 27, 0x2fda);

  FUNC_5(VAR_45, 0, 28, 0xc410);

  FUNC_5(VAR_45, 0, 29, 0x598b);

  FUNC_5(VAR_45, 0, 31, 0x8000);
 } else if (VAR_44 == VAR_5 || VAR_44 == VAR_6) {
  int VAR_49;


  FUNC_4(VAR_43);

  FUNC_5(VAR_45, 0, 31, 0x2000);
  FUNC_5(VAR_45, 0, 26, 0x0020);

  for (VAR_49 = 0; VAR_49 < 5; VAR_49++) {
   FUNC_5(VAR_45, VAR_49, 31, 0x8000);
   FUNC_5(VAR_45, VAR_49, 0, 0x3100);
   FUNC_5(VAR_45, VAR_49, 30, 0xa000);
   FUNC_5(VAR_45, VAR_49, 31, 0xa000);
   FUNC_5(VAR_45, VAR_49, 16, 0x0606);
   FUNC_5(VAR_45, VAR_49, 23, 0x0f0e);
   FUNC_5(VAR_45, VAR_49, 24, 0x1610);
   FUNC_5(VAR_45, VAR_49, 30, 0x1f15);
   FUNC_5(VAR_45, VAR_49, 28, 0x6111);
   FUNC_5(VAR_45, VAR_49, 31, 0x2000);
   FUNC_5(VAR_45, VAR_49, 26, 0x0000);
  }


  FUNC_5(VAR_45, 0, 31, 0x5000);
  FUNC_5(VAR_45, 0, 19, 0x004a);
  FUNC_5(VAR_45, 0, 20, 0x015a);
  FUNC_5(VAR_45, 0, 21, 0x00ee);
  FUNC_5(VAR_45, 0, 22, 0x0033);
  FUNC_5(VAR_45, 0, 23, 0x020a);
  FUNC_5(VAR_45, 0, 24, 0x0000);
  FUNC_5(VAR_45, 0, 25, 0x024a);
  FUNC_5(VAR_45, 0, 26, 0x035a);
  FUNC_5(VAR_45, 0, 27, 0x02ee);
  FUNC_5(VAR_45, 0, 28, 0x0233);
  FUNC_5(VAR_45, 0, 29, 0x000a);
  FUNC_5(VAR_45, 0, 30, 0x0000);
 } else {
  FUNC_5(VAR_45, 0, 31, 0x8000);
  for (VAR_46 = 0; VAR_46 < 5; VAR_46++) {
   if (VAR_45->ports[VAR_46].disable) {
    FUNC_5(VAR_45, VAR_46, VAR_4, VAR_2);
   } else {
    FUNC_5(VAR_45, VAR_46, VAR_4,
       VAR_1 |
       VAR_0 |
       VAR_3);
   }

   FUNC_5(VAR_45, VAR_46, 26, 0x1601);

   FUNC_5(VAR_45, VAR_46, 29, 0x7058);

   FUNC_5(VAR_45, VAR_46, 30, 0x0018);
  }



  FUNC_5(VAR_45, 0, 31, 0x0);

  FUNC_5(VAR_45, 0, 22, 0x052f);

  FUNC_5(VAR_45, 0, 17, 0x0fe0);

  FUNC_5(VAR_45, 0, 18, 0x40ba);

  FUNC_5(VAR_45, 0, 14, 0x65);

  FUNC_5(VAR_45, 0, 31, 0x8000);
 }

 if (VAR_45->port_map)
  VAR_48 = VAR_45->port_map;
 else
  VAR_48 = VAR_9;






 FUNC_2(VAR_45, VAR_32,
  VAR_34 << VAR_35,
  VAR_48 << VAR_35);


 for (VAR_46 = 0; VAR_46 < VAR_7; VAR_46++)
  VAR_45->ports[VAR_46].led = 0x05;


 FUNC_0(&VAR_45->swdev);


 FUNC_3(VAR_45, ~VAR_17, VAR_22);
}
