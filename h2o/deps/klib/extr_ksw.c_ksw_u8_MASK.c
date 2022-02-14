
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_6__ {int score; int te; int qe; int score2; int te2; } ;
typedef TYPE_1__ kswr_t ;
struct TYPE_7__ {int shift; int slen; int max; int * qp; int * Hmax; int * E; int * H1; int * H0; } ;
typedef TYPE_2__ kswq_t ;
typedef int int32_t ;
typedef int __m128i ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int*) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_14 (int*,int) ;

kswr_t FUNC_15(kswq_t *VAR_3, int VAR_4, const uint8_t *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = -1, VAR_14 = 0, VAR_15, VAR_16;
 uint64_t *VAR_17;
 __m128i VAR_18, VAR_19, VAR_20, VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25;
 kswr_t VAR_26;
 VAR_26 = VAR_2;
 VAR_15 = (VAR_8&VAR_1)? VAR_8&0xffff : 0x10000;
 VAR_16 = (VAR_8&VAR_0)? VAR_8&0xffff : 0x10000;
 VAR_11 = VAR_12 = 0; VAR_17 = 0;
 VAR_18 = FUNC_8(0);
 VAR_19 = FUNC_9(VAR_6 + VAR_7);
 VAR_20 = FUNC_9(VAR_7);
 VAR_21 = FUNC_9(VAR_3->shift);
 VAR_22 = VAR_3->H0; VAR_23 = VAR_3->H1; VAR_24 = VAR_3->E; VAR_25 = VAR_3->Hmax;
 VAR_9 = VAR_3->slen;
 for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10) {
  FUNC_11(VAR_24 + VAR_10, VAR_18);
  FUNC_11(VAR_22 + VAR_10, VAR_18);
  FUNC_11(VAR_25 + VAR_10, VAR_18);
 }

 for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {
  int VAR_27, VAR_28, VAR_29, VAR_30;
  __m128i VAR_31, VAR_32, VAR_33 = VAR_18, VAR_34 = VAR_18, *VAR_35 = VAR_3->qp + VAR_5[VAR_10] * VAR_9;
  VAR_32 = FUNC_5(VAR_22 + VAR_9 - 1);
  VAR_32 = FUNC_10(VAR_32, 1);
  for (VAR_27 = 0; FUNC_0(VAR_27 < VAR_9); ++VAR_27) {






   VAR_32 = FUNC_3(VAR_32, FUNC_5(VAR_35 + VAR_27));
   VAR_32 = FUNC_12(VAR_32, VAR_21);
   VAR_31 = FUNC_5(VAR_24 + VAR_27);
   VAR_32 = FUNC_6(VAR_32, VAR_31);
   VAR_32 = FUNC_6(VAR_32, VAR_33);
   VAR_34 = FUNC_6(VAR_34, VAR_32);
   FUNC_11(VAR_23 + VAR_27, VAR_32);

   VAR_32 = FUNC_12(VAR_32, VAR_19);
   VAR_31 = FUNC_12(VAR_31, VAR_20);
   VAR_31 = FUNC_6(VAR_31, VAR_32);
   FUNC_11(VAR_24 + VAR_27, VAR_31);

   VAR_33 = FUNC_12(VAR_33, VAR_20);
   VAR_33 = FUNC_6(VAR_33, VAR_32);

   VAR_32 = FUNC_5(VAR_22 + VAR_27);
  }

  for (VAR_28 = 0; FUNC_0(VAR_28 < 16); ++VAR_28) {
   VAR_33 = FUNC_10(VAR_33, 1);
   for (VAR_27 = 0; FUNC_0(VAR_27 < VAR_9); ++VAR_27) {
    VAR_32 = FUNC_5(VAR_23 + VAR_27);
    VAR_32 = FUNC_6(VAR_32, VAR_33);
    FUNC_11(VAR_23 + VAR_27, VAR_32);
    VAR_32 = FUNC_12(VAR_32, VAR_19);
    VAR_33 = FUNC_12(VAR_33, VAR_20);
    VAR_29 = FUNC_7(FUNC_4(FUNC_12(VAR_33, VAR_32), VAR_18));
    if (FUNC_1(VAR_29 == 0xffff)) goto end_loop16;
   }
  }
end_loop16:

  do { (VAR_34) = FUNC_6((VAR_34), FUNC_0((VAR_34), 8)); (VAR_34) = FUNC_6((VAR_34), FUNC_0((VAR_34), 4)); (VAR_34) = FUNC_6((VAR_34), FUNC_0((VAR_34), 2)); (VAR_34) = FUNC_6((VAR_34), FUNC_0((VAR_34), 1)); (VAR_30) = FUNC_0((VAR_34), 0) & 0x00ff; } while (0);
  if (VAR_30 >= VAR_15) {
   if (VAR_12 == 0 || (int32_t)VAR_17[VAR_12-1] + 1 != VAR_10) {
    if (VAR_12 == VAR_11) {
     VAR_11 = VAR_11? VAR_11<<1 : 8;
     VAR_17 = (uint64_t*)FUNC_14(VAR_17, 8 * VAR_11);
    }
    VAR_17[VAR_12++] = (uint64_t)VAR_30<<32 | VAR_10;
   } else if ((int)(VAR_17[VAR_12-1]>>32) < VAR_30) VAR_17[VAR_12-1] = (uint64_t)VAR_30<<32 | VAR_10;
  }
  if (VAR_30 > VAR_14) {
   VAR_14 = VAR_30; VAR_13 = VAR_10;
   for (VAR_27 = 0; FUNC_0(VAR_27 < VAR_9); ++VAR_27)
    FUNC_11(VAR_25 + VAR_27, FUNC_5(VAR_23 + VAR_27));
   if (VAR_14 + VAR_3->shift >= 255 || VAR_14 >= VAR_16) break;
  }
  VAR_35 = VAR_23; VAR_23 = VAR_22; VAR_22 = VAR_35;
 }
 VAR_26.score = VAR_14 + VAR_3->shift < 255? VAR_14 : 255;
 VAR_26.te = VAR_13;
 if (VAR_26.score != 255) {
  int VAR_36 = -1, VAR_37, VAR_38, VAR_39 = VAR_9 * 16;
  uint8_t *VAR_40 = (uint8_t*)VAR_25;
  for (VAR_10 = 0; VAR_10 < VAR_39; ++VAR_10, ++VAR_40)
   if ((int)*VAR_40 > VAR_36) VAR_36 = *VAR_40, VAR_26.qe = VAR_10 / 16 + VAR_10 % 16 * VAR_9;

  if (VAR_17) {
   VAR_10 = (VAR_26.score + VAR_3->max - 1) / VAR_3->max;
   VAR_37 = VAR_13 - VAR_10; VAR_38 = VAR_13 + VAR_10;
   for (VAR_10 = 0; VAR_10 < VAR_12; ++VAR_10) {
    int VAR_41 = (int32_t)VAR_17[VAR_10];
    if ((VAR_41 < VAR_37 || VAR_41 > VAR_38) && (int)(VAR_17[VAR_10]>>32) > VAR_26.score2)
     VAR_26.score2 = VAR_17[VAR_10]>>32, VAR_26.te2 = VAR_41;
   }
  }
 }
 FUNC_13(VAR_17);
 return VAR_26;
}
