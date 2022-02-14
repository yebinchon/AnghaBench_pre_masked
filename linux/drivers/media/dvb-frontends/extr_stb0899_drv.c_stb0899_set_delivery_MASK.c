
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stb0899_state {int delsys; int verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int) ;
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



 int FUNC_1 (int ,int ,int,char*) ;
 int FUNC_2 (struct stb0899_state*,int ) ;
 int FUNC_3 (struct stb0899_state*,int ,int) ;
 int FUNC_4 (struct stb0899_state*,int ,int*,int) ;

__attribute__((used)) static void FUNC_5(struct stb0899_state *VAR_22)
{
 u8 VAR_23;
 u8 VAR_24[2];

 VAR_24[0] = FUNC_2(VAR_22, VAR_8);
 VAR_24[1] = FUNC_2(VAR_22, VAR_9);

 switch (VAR_22->delsys) {
 case 129:
  FUNC_1(VAR_22->verbose, VAR_2, 1, "Delivery System -- DVB-S");

  VAR_23 = FUNC_2(VAR_22, VAR_5);
  FUNC_0(VAR_0, VAR_23, 0);
  FUNC_0(VAR_1, VAR_23, 1);
  FUNC_3(VAR_22, VAR_5, VAR_23);

  FUNC_3(VAR_22, VAR_7, 0xb1);
  FUNC_3(VAR_22, VAR_12, 0x40);
  FUNC_3(VAR_22, VAR_6, 0x42);
  FUNC_3(VAR_22, VAR_10, 0x12);

  VAR_23 = FUNC_2(VAR_22, VAR_11);
  FUNC_0(VAR_4, VAR_23, 1);
  FUNC_3(VAR_22, VAR_11, VAR_23);

  FUNC_0(VAR_13, VAR_24[0], 1);
  FUNC_0(VAR_16, VAR_24[0], 1);
  FUNC_0(VAR_17, VAR_24[0], 1);

  FUNC_0(VAR_19, VAR_24[1], 1);
  FUNC_0(VAR_20, VAR_24[1], 1);

  FUNC_0(VAR_18, VAR_24[0], 1);
  FUNC_0(VAR_15, VAR_24[0], 0);

  FUNC_0(VAR_21, VAR_24[1], 1);
  break;
 case 128:

  VAR_23 = FUNC_2(VAR_22, VAR_5);
  FUNC_0(VAR_0, VAR_23, 0);
  FUNC_0(VAR_1, VAR_23, 0);
  FUNC_3(VAR_22, VAR_5, VAR_23);

  FUNC_3(VAR_22, VAR_7, 0xb1);
  FUNC_3(VAR_22, VAR_12, 0x42);
  FUNC_3(VAR_22, VAR_6, 0x40);
  FUNC_3(VAR_22, VAR_10, 0x02);

  VAR_23 = FUNC_2(VAR_22, VAR_11);
  FUNC_0(VAR_4, VAR_23, 0);
  FUNC_3(VAR_22, VAR_11, VAR_23);

  FUNC_0(VAR_13, VAR_24[0], 1);
  FUNC_0(VAR_16, VAR_24[0], 0);
  FUNC_0(VAR_17, VAR_24[0], 0);

  FUNC_0(VAR_19, VAR_24[1], 0);
  FUNC_0(VAR_20, VAR_24[1], 0);

  FUNC_0(VAR_18, VAR_24[0], 0);
  FUNC_0(VAR_15, VAR_24[0], 0);

  FUNC_0(VAR_21, VAR_24[1], 0);
  break;
 case 130:

  VAR_23 = FUNC_2(VAR_22, VAR_5);
  FUNC_0(VAR_0, VAR_23, 1);
  FUNC_0(VAR_1, VAR_23, 1);
  FUNC_3(VAR_22, VAR_5, VAR_23);

  FUNC_3(VAR_22, VAR_7, 0xa1);
  FUNC_3(VAR_22, VAR_12, 0x61);
  FUNC_3(VAR_22, VAR_6, 0x42);

  VAR_23 = FUNC_2(VAR_22, VAR_11);
  FUNC_0(VAR_4, VAR_23, 1);
  FUNC_3(VAR_22, VAR_11, VAR_23);

  FUNC_0(VAR_13, VAR_24[0], 1);
  FUNC_0(VAR_16, VAR_24[0], 1);
  FUNC_0(VAR_17, VAR_24[0], 1);

  FUNC_0(VAR_19, VAR_24[1], 1);
  FUNC_0(VAR_20, VAR_24[1], 1);

  FUNC_0(VAR_15, VAR_24[0], 0);

  FUNC_0(VAR_21, VAR_24[1], 1);
  break;
 default:
  FUNC_1(VAR_22->verbose, VAR_3, 1, "Unsupported delivery system");
  break;
 }
 FUNC_0(VAR_14, VAR_24[0], 0);
 FUNC_4(VAR_22, VAR_8, VAR_24, 2);
}
