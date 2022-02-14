
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int flags; int encoding; scalar_t__ crc_type; int preamble; int preamble_length; int clock_speed; scalar_t__ loopback; } ;
struct TYPE_20__ {int serial_signals; scalar_t__ testing_irq; TYPE_1__ params; } ;
typedef TYPE_2__ MGSLPC_INFO ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;



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
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,unsigned char) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,unsigned char) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,scalar_t__) ;
 int FUNC_14 (TYPE_2__*,scalar_t__,unsigned char) ;

__attribute__((used)) static void FUNC_15(MGSLPC_INFO *VAR_40)
{
 unsigned char VAR_41;
 unsigned char VAR_42, VAR_43;


 FUNC_2(VAR_40, VAR_13, 0xffff);
 FUNC_2(VAR_40, VAR_14, 0xffff);
 FUNC_7(VAR_40, 0xff);


 VAR_42 = VAR_43 = 0;
 if (VAR_40->params.flags & VAR_23
     && VAR_40->params.flags & VAR_25) {

  VAR_42 = 7;
 } else if (VAR_40->params.flags & VAR_22
   && VAR_40->params.flags & VAR_24) {

  VAR_42 = 7;
  VAR_43 = 1;
 } else if (VAR_40->params.flags & VAR_23) {
  if (VAR_40->params.flags & VAR_24) {

   VAR_42 = 6;
   VAR_43 = 1;
  } else {

   VAR_42 = 6;
  }
 } else if (VAR_40->params.flags & VAR_24) {

  VAR_43 = 1;
 }
 VAR_41 = 0x82;
 if (VAR_40->params.loopback)
  VAR_41 |= VAR_0;


 if (VAR_40->serial_signals & VAR_38)
  VAR_41 |= VAR_2;
 FUNC_14(VAR_40, VAR_13 + VAR_34, VAR_41);
 VAR_41 = 0xc0;
 switch (VAR_40->params.encoding)
 {
 case 135:
  VAR_41 |= VAR_3;
  break;
 case 136:
  VAR_41 |= VAR_4;
  break;
 case 137:
  VAR_41 |= VAR_4 | VAR_2;
  break;
 case 138:
  VAR_41 |= VAR_4 | VAR_3;
  break;
 }
 FUNC_14(VAR_40, VAR_13 + VAR_8, VAR_41);
 VAR_41 = 0x10 + VAR_42;
 FUNC_14(VAR_40, VAR_13 + VAR_9, VAR_41);
 VAR_41 = 0x00;
 if (VAR_42 == 2 || VAR_42 == 3 || VAR_42 == 6
     || VAR_42 == 7 || (VAR_42 == 0 && VAR_43 == 1))
  VAR_41 |= VAR_5;
 if (VAR_43)
  VAR_41 |= VAR_4;
 if (VAR_40->params.crc_type == VAR_17)
  VAR_41 |= VAR_1;
 if (VAR_40->params.encoding == VAR_19)
  VAR_41 |= VAR_0;
 FUNC_14(VAR_40, VAR_13 + VAR_10, VAR_41);
 VAR_41 = 0x00;
 if (VAR_40->params.crc_type == VAR_18)
  VAR_41 |= VAR_2 | VAR_1;
 if (VAR_40->params.preamble != VAR_26)
  VAR_41 |= VAR_5;
 switch (VAR_40->params.preamble_length)
 {
 case 134:
  VAR_41 |= VAR_6;
  break;
 case 133:
  VAR_41 |= VAR_6;
  break;
 case 132:
  VAR_41 |= VAR_7 | VAR_6;
  break;
 }
 FUNC_14(VAR_40, VAR_13 + VAR_11, VAR_41);


 VAR_41 = 0;
 switch (VAR_40->params.preamble)
 {
 case 129: VAR_41 = 0x7e; break;
 case 130: VAR_41 = 0xaa; break;
 case 131: VAR_41 = 0x55; break;
 case 128: VAR_41 = 0xff; break;
 }
 FUNC_14(VAR_40, VAR_13 + VAR_35, VAR_41);
 VAR_41 = 0x50;
 FUNC_14(VAR_40, VAR_13 + VAR_12, VAR_41);
 if (VAR_40->params.flags & VAR_23)
  FUNC_6(VAR_40, VAR_13, VAR_40->params.clock_speed * 16);
 else
  FUNC_6(VAR_40, VAR_13, VAR_40->params.clock_speed);






 FUNC_14(VAR_40, VAR_13 + VAR_37, 0);
 VAR_41 = 0x00;
 if (VAR_40->params.flags & VAR_21)
  VAR_41 |= VAR_5;
 FUNC_14(VAR_40, VAR_13 + VAR_39, VAR_41);
 FUNC_1(VAR_40);
 if (VAR_40->params.loopback || VAR_40->testing_irq)
  FUNC_5(VAR_40);
 if (VAR_40->params.flags & VAR_20)
 {
  FUNC_3(VAR_40, VAR_14, VAR_28);

  FUNC_10(VAR_40, VAR_13 + VAR_36, VAR_3);
 } else
  FUNC_0(VAR_40, VAR_13 + VAR_36, VAR_3);

 FUNC_3(VAR_40, VAR_13,
    VAR_29 | VAR_30 | VAR_27 |
    VAR_32 | VAR_31);
 FUNC_4(VAR_40, VAR_13, VAR_16 + VAR_15);
 FUNC_13(VAR_40, VAR_13);
 FUNC_8(VAR_40, VAR_13 + VAR_33);
 if (!VAR_40->testing_irq)
  FUNC_0(VAR_40, VAR_13 + VAR_8, VAR_6);

 FUNC_11(VAR_40);

 FUNC_12(VAR_40);
 FUNC_9(VAR_40);
}
