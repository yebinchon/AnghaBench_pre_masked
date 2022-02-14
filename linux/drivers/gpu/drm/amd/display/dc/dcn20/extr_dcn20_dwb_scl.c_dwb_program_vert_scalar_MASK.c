
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct scaling_taps {int v_taps; int v_taps_c; } ;
struct fixed31_32 {int dummy; } ;
struct dcn20_dwbc {int dummy; } ;
typedef int int32_t ;
typedef enum dwb_subsample_position { ____Placeholder_dwb_subsample_position } dwb_subsample_position ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
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
 int VAR_13 ;
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

bool FUNC_13(struct dcn20_dwbc *VAR_14,
  uint32_t VAR_15,
  uint32_t VAR_16,
  struct scaling_taps VAR_17,
  enum dwb_subsample_position VAR_18)
{
 uint32_t VAR_19 = 1;
 uint32_t VAR_20 = 1;
 uint32_t VAR_21 = VAR_17.v_taps;
 uint32_t VAR_22 = VAR_17.v_taps_c;
 int32_t VAR_23 = 0;
 int32_t VAR_24 = 0;
 uint32_t VAR_25 = 0;
 uint32_t VAR_26 = 0;
 uint32_t VAR_27 = 0;
 uint32_t VAR_28 = 0;

 const uint16_t *VAR_29 = ((void*)0);
 const uint16_t *VAR_30 = ((void*)0);

 struct fixed31_32 VAR_31 = FUNC_6(0);
 struct fixed31_32 VAR_32 = FUNC_6(0);


 struct fixed31_32 VAR_33 = FUNC_5(
  VAR_15, VAR_16);

 if (FUNC_4(VAR_33) == 8)
  VAR_19 = -1;
 else
  VAR_19 = FUNC_10(VAR_33) << 5;
 VAR_20 = VAR_19 * 2;


 FUNC_0(VAR_6, VAR_13, VAR_19);


 FUNC_0(VAR_3, VAR_12, VAR_21 - 1);
 FUNC_0(VAR_3, VAR_11, VAR_22 - 1);


 VAR_31 = FUNC_2(VAR_33, VAR_21 + 1);
 VAR_31 = FUNC_3(VAR_31, 2);
 VAR_31 = FUNC_9(VAR_31, VAR_21);

 VAR_23 = FUNC_8(VAR_31);
 VAR_25 = (VAR_23 >> 19) & 0x1f;
 VAR_26 = (VAR_23 & 0x7ffff) << 5;

 VAR_32 = FUNC_7(VAR_33, 2);
 VAR_32 = FUNC_2(VAR_32, VAR_22 + 1);
 VAR_32 = FUNC_3(VAR_32, 2);
 VAR_32 = FUNC_9(VAR_32, VAR_22);
 if (VAR_18 == VAR_0)
  VAR_32 = FUNC_1(VAR_32, FUNC_5(1, 4));

 VAR_24 = FUNC_8(VAR_32);
 VAR_27 = (VAR_24 >> 19) & 0x1f;
 VAR_28 = (VAR_24 & 0x7ffff) << 5;


 FUNC_0(VAR_5, VAR_10, VAR_25);
 FUNC_0(VAR_5, VAR_8, VAR_26);
 FUNC_0(VAR_4, VAR_9, VAR_27);
 FUNC_0(VAR_4, VAR_7, VAR_28);



 VAR_29 = FUNC_11(
  VAR_21, VAR_33);
 VAR_30 = FUNC_11(
  VAR_22, FUNC_6(VAR_19 * 2));
 FUNC_12(VAR_14, VAR_21,
  VAR_2, VAR_29);

 FUNC_12(VAR_14, VAR_22,
  VAR_1, VAR_30);
 return 1;
}
