
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct scaling_taps {int h_taps; int h_taps_c; } ;
struct fixed31_32 {int dummy; } ;
struct dcn20_dwbc {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int) ;
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
 struct fixed31_32 FUNC_1 (struct fixed31_32,struct fixed31_32) ;
 struct fixed31_32 FUNC_2 (struct fixed31_32,int) ;
 struct fixed31_32 FUNC_3 (struct fixed31_32,int) ;
 int FUNC_4 (struct fixed31_32) ;
 struct fixed31_32 FUNC_5 (int,int) ;
 struct fixed31_32 FUNC_6 (int) ;
 struct fixed31_32 FUNC_7 (struct fixed31_32,int) ;
 int FUNC_8 (struct fixed31_32) ;
 struct fixed31_32 FUNC_9 (struct fixed31_32,int) ;
 int FUNC_10 (struct fixed31_32) ;
 int * FUNC_11 (int,struct fixed31_32) ;
 int FUNC_12 (struct dcn20_dwbc*,int,int ,int const*) ;

bool FUNC_13(struct dcn20_dwbc *VAR_13,
  uint32_t VAR_14,
  uint32_t VAR_15,
  struct scaling_taps VAR_16)
{
 uint32_t VAR_17 = 1;
 uint32_t VAR_18 = 1;
 uint32_t VAR_19 = VAR_16.h_taps;
 uint32_t VAR_20 = VAR_16.h_taps_c;
 int32_t VAR_21 = 0;
 int32_t VAR_22 = 0;
 uint32_t VAR_23 = 0;
 uint32_t VAR_24 = 0;
 uint32_t VAR_25 = 0;
 uint32_t VAR_26 = 0;
 const uint16_t *VAR_27 = ((void*)0);
 const uint16_t *VAR_28 = ((void*)0);


 struct fixed31_32 VAR_29 = FUNC_6(0);
 struct fixed31_32 VAR_30 = FUNC_6(0);



 struct fixed31_32 VAR_31 = FUNC_5(
  VAR_14, VAR_15);

 if (FUNC_4(VAR_31) == 8)
  VAR_17 = -1;
 else
  VAR_17 = FUNC_10(VAR_31) << 5;
 VAR_18 = VAR_17 * 2;


 FUNC_0(VAR_4, VAR_11, VAR_17);


 FUNC_0(VAR_12, VAR_10, VAR_19 - 1);
 FUNC_0(VAR_12, VAR_9, VAR_20 - 1);


 VAR_29 = FUNC_2(VAR_31, VAR_19 + 1);
 VAR_29 = FUNC_3(VAR_29, 2);
 VAR_29 = FUNC_9(VAR_29, VAR_19);

 VAR_21 = FUNC_8(VAR_29);
 VAR_23 = (VAR_21 >> 19) & 0x1f;
 VAR_24 = (VAR_21 & 0x7ffff) << 5;

 VAR_30 = FUNC_7(VAR_31, 2);
 VAR_30 = FUNC_2(VAR_30, VAR_20 + 1);
 VAR_30 = FUNC_3(VAR_30, 2);
 VAR_30 = FUNC_9(VAR_30, VAR_20);
 VAR_30 = FUNC_1(VAR_30, FUNC_5(1, 4));

 VAR_22 = FUNC_8(VAR_30);
 VAR_25 = (VAR_22 >> 19) & 0x1f;
 VAR_26 = (VAR_22 & 0x7ffff) << 5;


 FUNC_0(VAR_3, VAR_8, VAR_23);
 FUNC_0(VAR_3, VAR_6, VAR_24);
 FUNC_0(VAR_2, VAR_7, VAR_25);
 FUNC_0(VAR_2, VAR_5, VAR_26);


 VAR_27 = FUNC_11(
  VAR_19, VAR_31);
 VAR_28 = FUNC_11(
  VAR_20, FUNC_6(VAR_17 * 2));

 FUNC_12(VAR_13, VAR_19,
  VAR_1, VAR_27);

 FUNC_12(VAR_13, VAR_20,
  VAR_0, VAR_28);

 return 1;
}
