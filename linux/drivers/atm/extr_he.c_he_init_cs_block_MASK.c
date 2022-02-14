
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct he_dev {TYPE_1__* atm_dev; } ;
struct TYPE_2__ {unsigned int link_rate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
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
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_0 (struct he_dev*) ;
 int FUNC_1 (struct he_dev*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct he_dev *VAR_24)
{
 unsigned VAR_25, VAR_26, VAR_27;
 int VAR_28;



 for (VAR_28 = 0; VAR_28 < 0x20; ++VAR_28)
  FUNC_1(VAR_24, 0x0, VAR_16 + VAR_28);



 VAR_25 = FUNC_0(VAR_24) ? 66667000 : 50000000;
 VAR_26 = VAR_24->atm_dev->link_rate;
 VAR_27 = VAR_26 / 16 / 2;

 for (VAR_28 = 0; VAR_28 < 0x10; ++VAR_28) {





  unsigned VAR_29 = VAR_25 / VAR_26;

  FUNC_1(VAR_24, VAR_29, VAR_18 + VAR_28);
  VAR_26 -= VAR_27;
 }

 if (FUNC_0(VAR_24)) {

  FUNC_1(VAR_24, 0x000800fa, VAR_5);
  FUNC_1(VAR_24, 0x000c33cb, VAR_6);
  FUNC_1(VAR_24, 0x0010101b, VAR_7);
  FUNC_1(VAR_24, 0x00181dac, VAR_8);
  FUNC_1(VAR_24, 0x00280600, VAR_9);


  FUNC_1(VAR_24, 0x023de8b3, VAR_0);
  FUNC_1(VAR_24, 0x1801, VAR_1);
  FUNC_1(VAR_24, 0x68b3, VAR_2);
  FUNC_1(VAR_24, 0x1280, VAR_3);
  FUNC_1(VAR_24, 0x68b3, VAR_4);
  FUNC_1(VAR_24, 0x14585, VAR_15);

  FUNC_1(VAR_24, 0x4680, VAR_14);


  FUNC_1(VAR_24, 0x00159ece, VAR_17);
  FUNC_1(VAR_24, 0x68b3, VAR_22);
  FUNC_1(VAR_24, 0x5eb3, VAR_23);
  FUNC_1(VAR_24, 0xe8b3, VAR_21);
  FUNC_1(VAR_24, 0xdeb3, VAR_20);
  FUNC_1(VAR_24, 0x68b3, VAR_19);


  FUNC_1(VAR_24, 0x5, VAR_11);
  FUNC_1(VAR_24, 0x14, VAR_13);
 } else {

  FUNC_1(VAR_24, 0x000400ea, VAR_5);
  FUNC_1(VAR_24, 0x00063388, VAR_6);
  FUNC_1(VAR_24, 0x00081018, VAR_7);
  FUNC_1(VAR_24, 0x000c1dac, VAR_8);
  FUNC_1(VAR_24, 0x0014051a, VAR_9);


  FUNC_1(VAR_24, 0x0235e4b1, VAR_0);
  FUNC_1(VAR_24, 0x4701, VAR_1);
  FUNC_1(VAR_24, 0x64b1, VAR_2);
  FUNC_1(VAR_24, 0x1280, VAR_3);
  FUNC_1(VAR_24, 0x64b1, VAR_4);
  FUNC_1(VAR_24, 0xf424, VAR_15);

  FUNC_1(VAR_24, 0x4680, VAR_14);


  FUNC_1(VAR_24, 0x000563b7, VAR_17);
  FUNC_1(VAR_24, 0x64b1, VAR_22);
  FUNC_1(VAR_24, 0x5ab1, VAR_23);
  FUNC_1(VAR_24, 0xe4b1, VAR_21);
  FUNC_1(VAR_24, 0xdab1, VAR_20);
  FUNC_1(VAR_24, 0x64b1, VAR_19);


  FUNC_1(VAR_24, 0x6, VAR_11);
  FUNC_1(VAR_24, 0x1e, VAR_13);
 }

 FUNC_1(VAR_24, 0x8, VAR_12);

 for (VAR_28 = 0; VAR_28 < 0x8; ++VAR_28)
  FUNC_1(VAR_24, 0x0, VAR_10 + VAR_28);

}
