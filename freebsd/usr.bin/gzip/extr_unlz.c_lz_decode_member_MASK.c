
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lz_range_decoder {int dummy; } ;
struct lz_len_model {int dummy; } ;
struct lz_decoder {unsigned int dict_size; unsigned int pos; int wrapped; int fin; struct lz_range_decoder rdec; } ;


 int const VAR_0 ;
 int VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int**) ;
 int FUNC_2 (struct lz_len_model) ;
 int VAR_6 ;
 int FUNC_3 (int,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct lz_decoder*) ;
 int FUNC_7 (struct lz_decoder*) ;
 void* FUNC_8 (struct lz_decoder*,unsigned int) ;
 int FUNC_9 (struct lz_decoder*,void*) ;
 int const FUNC_10 (struct lz_range_decoder*,int const) ;
 scalar_t__ FUNC_11 (struct lz_range_decoder*,int*) ;
 int FUNC_12 (struct lz_range_decoder*,struct lz_len_model*,int const) ;
 void* FUNC_13 (struct lz_range_decoder*,int*,int) ;
 void* FUNC_14 (struct lz_range_decoder*,int*,int) ;
 scalar_t__ FUNC_15 (struct lz_range_decoder*,int*,int const) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static bool
FUNC_21(struct lz_decoder *VAR_12)
{
 int VAR_13[1 << VAR_5][0x300];
 int VAR_14[VAR_6][VAR_9];
 int VAR_15[4][VAR_6];
 int VAR_16[VAR_6][VAR_9];
 int VAR_17[VAR_6][1 << VAR_4];
 int VAR_18[VAR_8 - VAR_2 + 1];
 int VAR_19[VAR_1];

 FUNC_1(VAR_13);
 FUNC_1(VAR_14);
 FUNC_1(VAR_15);
 FUNC_1(VAR_16);
 FUNC_1(VAR_17);
 FUNC_0(VAR_18);
 FUNC_0(VAR_19);

 struct lz_len_model VAR_20;
 struct lz_len_model VAR_21;

 FUNC_2(VAR_20);
 FUNC_2(VAR_21);

 struct lz_range_decoder *VAR_22 = &VAR_12->rdec;
 unsigned VAR_23[4] = { 0 };


 int VAR_24 = 0;

 while (!FUNC_4(VAR_12->fin) && !FUNC_5(VAR_12->fin)) {
  const int VAR_25 = FUNC_7(VAR_12) & VAR_10;

  if (FUNC_11(VAR_22, &VAR_14[VAR_24][VAR_25]) == 0) {
   const uint8_t VAR_26 = FUNC_8(VAR_12, 0);
   const int VAR_27 =
       VAR_26 >> (8 - VAR_5);
   int *VAR_28 = VAR_13[VAR_27];
   if (FUNC_20(VAR_24))
    FUNC_9(VAR_12, FUNC_14(VAR_22, VAR_28, 8));
   else {
    int VAR_29 = FUNC_8(VAR_12, VAR_23[0]);
    FUNC_9(VAR_12, FUNC_13(VAR_22, VAR_28, VAR_29));
   }
   VAR_24 = FUNC_16(VAR_24);
   continue;
  }
  int VAR_30;

  if (FUNC_11(VAR_22, &VAR_15[0][VAR_24]) != 0) {

   if (FUNC_11(VAR_22, &VAR_15[1][VAR_24]) == 0) {

    if (FUNC_11(VAR_22,
        &VAR_16[VAR_24][VAR_25]) == 0)
    {
     VAR_24 = FUNC_19(VAR_24);
     FUNC_9(VAR_12, FUNC_8(VAR_12, VAR_23[0]));
     continue;
    }
   } else {
    unsigned VAR_31;

    if (FUNC_11(VAR_22, &VAR_15[2][VAR_24])
        == 0)
     VAR_31 = VAR_23[1];
    else {

     if (FUNC_11(VAR_22,
         &VAR_15[3][VAR_24]) == 0)
      VAR_31 = VAR_23[2];
     else {
      VAR_31 = VAR_23[3];
      VAR_23[3] = VAR_23[2];
     }
     VAR_23[2] = VAR_23[1];
    }
    VAR_23[1] = VAR_23[0];
    VAR_23[0] = VAR_31;
   }
   VAR_24 = FUNC_18(VAR_24);
   VAR_30 = VAR_7 +
       FUNC_12(VAR_22, &VAR_21, VAR_25);
  } else {
   VAR_23[3] = VAR_23[2]; VAR_23[2] = VAR_23[1]; VAR_23[1] = VAR_23[0];
   VAR_30 = VAR_7 +
       FUNC_12(VAR_22, &VAR_20, VAR_25);
   const int VAR_32 =
       FUNC_3(VAR_30 - VAR_7, VAR_11 - 1);
   VAR_23[0] = FUNC_14(VAR_22, VAR_17[VAR_32],
       VAR_4);
   if (VAR_23[0] >= VAR_3) {
    const unsigned VAR_33 = VAR_23[0];
    const int VAR_34 = (VAR_33 >> 1) - 1;
           VAR_23[0] = (2 | (VAR_33 & 1)) << VAR_34;
    if (VAR_33 < VAR_2)
     VAR_23[0] += FUNC_15(VAR_22,
         &VAR_18[VAR_23[0] - VAR_33],
                                            VAR_34);
    else {
     VAR_23[0] += FUNC_10(VAR_22, VAR_34
         - VAR_0) << VAR_0;
     VAR_23[0] += FUNC_15(VAR_22,
         VAR_19, VAR_0);
     if (VAR_23[0] == 0xFFFFFFFFU) {
      FUNC_6(VAR_12);
      return VAR_30 == VAR_7;
     }
    }
   }
   VAR_24 = FUNC_17(VAR_24);
   if (VAR_23[0] >= VAR_12->dict_size ||
       (VAR_23[0] >= VAR_12->pos && !VAR_12->wrapped)) {
    FUNC_6(VAR_12);
    return 0;
   }
  }
  for (int VAR_35 = 0; VAR_35 < VAR_30; VAR_35++)
   FUNC_9(VAR_12, FUNC_8(VAR_12, VAR_23[0]));
     }
 FUNC_6(VAR_12);
 return 0;
}
