
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* m32; scalar_t__ m64; } ;
struct fp_ext {int sign; int exp; TYPE_1__ mant; scalar_t__ lowmant; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fp_ext*) ;
 scalar_t__ FUNC_1 (struct fp_ext*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct fp_ext*,int) ;
 int FUNC_4 (unsigned long,unsigned long,int,int ,int) ;
 int FUNC_5 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_6 (struct fp_ext*) ;
 int FUNC_7 (struct fp_ext*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__,TYPE_1__) ;

struct fp_ext *
FUNC_10(struct fp_ext *VAR_3, struct fp_ext *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6, VAR_7;

 FUNC_2(VAR_2, "fsgldiv\n");

 FUNC_5(VAR_3, VAR_4);


 VAR_3->sign = VAR_4->sign ^ VAR_3->sign;


 if (FUNC_0(VAR_3)) {

  if (FUNC_0(VAR_4))
   FUNC_6(VAR_3);

  return VAR_3;
 }
 if (FUNC_0(VAR_4)) {

  VAR_3->exp = 0;
  VAR_3->mant.m64 = 0;
  VAR_3->lowmant = 0;

  return VAR_3;
 }


 if (FUNC_1(VAR_3)) {

  if (FUNC_1(VAR_4))
   FUNC_6(VAR_3);

  return VAR_3;
 }
 if (FUNC_1(VAR_4)) {

  FUNC_8(VAR_0);
  VAR_3->exp = 0x7fff;
  VAR_3->mant.m64 = 0;

  return VAR_3;
 }

 VAR_5 = VAR_3->exp - VAR_4->exp + 0x3fff;

 VAR_3->mant.m32[0] &= 0xffffff00;
 VAR_4->mant.m32[0] &= 0xffffff00;


 if (VAR_3->mant.m32[0] >= VAR_4->mant.m32[0]) {
  FUNC_9(VAR_3->mant, VAR_4->mant);
  FUNC_4(VAR_6, VAR_7, VAR_3->mant.m32[0], 0, VAR_4->mant.m32[0]);
  VAR_3->mant.m32[0] = 0x80000000 | (VAR_6 >> 1);
  VAR_3->mant.m32[1] = (VAR_6 & 1) | VAR_7;
 } else {
  FUNC_4(VAR_6, VAR_7, VAR_3->mant.m32[0], 0, VAR_4->mant.m32[0]);
  VAR_3->mant.m32[0] = VAR_6;
  VAR_3->mant.m32[1] = VAR_7;
  VAR_5--;
 }

 if (VAR_5 >= 0x7fff) {
  FUNC_7(VAR_3);
  return VAR_3;
 }
 VAR_3->exp = VAR_5;
 if (VAR_5 < 0) {
  FUNC_8(VAR_1);
  FUNC_3(VAR_3, -VAR_5);
 }

 return VAR_3;
}
