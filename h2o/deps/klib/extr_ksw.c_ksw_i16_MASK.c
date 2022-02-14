
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_6__ {int score; int te; int qe; int score2; int te2; } ;
typedef TYPE_1__ kswr_t ;
struct TYPE_7__ {int slen; int max; int * qp; int * Hmax; int * E; int * H1; int * H0; } ;
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
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
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
 __m128i VAR_18, VAR_19, VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24;
 kswr_t VAR_25;
 VAR_25 = VAR_2;
 VAR_15 = (VAR_8&VAR_1)? VAR_8&0xffff : 0x10000;
 VAR_16 = (VAR_8&VAR_0)? VAR_8&0xffff : 0x10000;
 VAR_11 = VAR_12 = 0; VAR_17 = 0;
 VAR_18 = FUNC_9(0);
 VAR_19 = FUNC_8(VAR_6 + VAR_7);
 VAR_20 = FUNC_8(VAR_7);
 VAR_21 = VAR_3->H0; VAR_22 = VAR_3->H1; VAR_23 = VAR_3->E; VAR_24 = VAR_3->Hmax;
 VAR_9 = VAR_3->slen;
 for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10) {
  FUNC_11(VAR_23 + VAR_10, VAR_18);
  FUNC_11(VAR_21 + VAR_10, VAR_18);
  FUNC_11(VAR_24 + VAR_10, VAR_18);
 }

 for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {
  int VAR_26, VAR_27, VAR_28;
  __m128i VAR_29, VAR_30, VAR_31 = VAR_18, VAR_32 = VAR_18, *VAR_33 = VAR_3->qp + VAR_5[VAR_10] * VAR_9;
  VAR_30 = FUNC_5(VAR_21 + VAR_9 - 1);
  VAR_30 = FUNC_10(VAR_30, 2);
  for (VAR_26 = 0; FUNC_0(VAR_26 < VAR_9); ++VAR_26) {
   VAR_30 = FUNC_3(VAR_30, *VAR_33++);
   VAR_29 = FUNC_5(VAR_23 + VAR_26);
   VAR_30 = FUNC_6(VAR_30, VAR_29);
   VAR_30 = FUNC_6(VAR_30, VAR_31);
   VAR_32 = FUNC_6(VAR_32, VAR_30);
   FUNC_11(VAR_22 + VAR_26, VAR_30);
   VAR_30 = FUNC_12(VAR_30, VAR_19);
   VAR_29 = FUNC_12(VAR_29, VAR_20);
   VAR_29 = FUNC_6(VAR_29, VAR_30);
   FUNC_11(VAR_23 + VAR_26, VAR_29);
   VAR_31 = FUNC_12(VAR_31, VAR_20);
   VAR_31 = FUNC_6(VAR_31, VAR_30);
   VAR_30 = FUNC_5(VAR_21 + VAR_26);
  }
  for (VAR_27 = 0; FUNC_0(VAR_27 < 16); ++VAR_27) {
   VAR_31 = FUNC_10(VAR_31, 2);
   for (VAR_26 = 0; FUNC_0(VAR_26 < VAR_9); ++VAR_26) {
    VAR_30 = FUNC_5(VAR_22 + VAR_26);
    VAR_30 = FUNC_6(VAR_30, VAR_31);
    FUNC_11(VAR_22 + VAR_26, VAR_30);
    VAR_30 = FUNC_12(VAR_30, VAR_19);
    VAR_31 = FUNC_12(VAR_31, VAR_20);
    if(FUNC_1(!FUNC_7(FUNC_4(VAR_31, VAR_30)))) goto end_loop8;
   }
  }
end_loop8:
  do { (VAR_32) = FUNC_6((VAR_32), FUNC_0((VAR_32), 8)); (VAR_32) = FUNC_6((VAR_32), FUNC_0((VAR_32), 4)); (VAR_32) = FUNC_6((VAR_32), FUNC_0((VAR_32), 2)); (VAR_28) = FUNC_0((VAR_32), 0); } while (0);
  if (VAR_28 >= VAR_15) {
   if (VAR_12 == 0 || (int32_t)VAR_17[VAR_12-1] + 1 != VAR_10) {
    if (VAR_12 == VAR_11) {
     VAR_11 = VAR_11? VAR_11<<1 : 8;
     VAR_17 = (uint64_t*)FUNC_14(VAR_17, 8 * VAR_11);
    }
    VAR_17[VAR_12++] = (uint64_t)VAR_28<<32 | VAR_10;
   } else if ((int)(VAR_17[VAR_12-1]>>32) < VAR_28) VAR_17[VAR_12-1] = (uint64_t)VAR_28<<32 | VAR_10;
  }
  if (VAR_28 > VAR_14) {
   VAR_14 = VAR_28; VAR_13 = VAR_10;
   for (VAR_26 = 0; FUNC_0(VAR_26 < VAR_9); ++VAR_26)
    FUNC_11(VAR_24 + VAR_26, FUNC_5(VAR_22 + VAR_26));
   if (VAR_14 >= VAR_16) break;
  }
  VAR_33 = VAR_22; VAR_22 = VAR_21; VAR_21 = VAR_33;
 }
 VAR_25.score = VAR_14; VAR_25.te = VAR_13;
 {
  int VAR_34 = -1, VAR_35, VAR_36, VAR_37 = VAR_9 * 8;
  uint16_t *VAR_38 = (uint16_t*)VAR_24;
  for (VAR_10 = 0, VAR_25.qe = -1; VAR_10 < VAR_37; ++VAR_10, ++VAR_38)
   if ((int)*VAR_38 > VAR_34) VAR_34 = *VAR_38, VAR_25.qe = VAR_10 / 8 + VAR_10 % 8 * VAR_9;
  if (VAR_17) {
   VAR_10 = (VAR_25.score + VAR_3->max - 1) / VAR_3->max;
   VAR_35 = VAR_13 - VAR_10; VAR_36 = VAR_13 + VAR_10;
   for (VAR_10 = 0; VAR_10 < VAR_12; ++VAR_10) {
    int VAR_39 = (int32_t)VAR_17[VAR_10];
    if ((VAR_39 < VAR_35 || VAR_39 > VAR_36) && (int)(VAR_17[VAR_10]>>32) > VAR_25.score2)
     VAR_25.score2 = VAR_17[VAR_10]>>32, VAR_25.te2 = VAR_39;
   }
  }
 }
 FUNC_13(VAR_17);
 return VAR_25;
}
