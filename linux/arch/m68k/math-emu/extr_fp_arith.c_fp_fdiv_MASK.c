
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union fp_mant128 {int * m32; } ;
struct TYPE_2__ {scalar_t__* m32; scalar_t__ m64; } ;
struct fp_ext {int sign; int exp; TYPE_1__ mant; scalar_t__ lowmant; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fp_ext*) ;
 scalar_t__ FUNC_1 (struct fp_ext*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct fp_ext*,int) ;
 int FUNC_4 (union fp_mant128*,struct fp_ext*,struct fp_ext*) ;
 int FUNC_5 (struct fp_ext*,struct fp_ext*) ;
 scalar_t__ FUNC_6 (struct fp_ext*) ;
 int FUNC_7 (struct fp_ext*,union fp_mant128*,int) ;
 int FUNC_8 (struct fp_ext*) ;
 int FUNC_9 (struct fp_ext*) ;
 int FUNC_10 (int ) ;

struct fp_ext *
FUNC_11(struct fp_ext *VAR_3, struct fp_ext *VAR_4)
{
 union fp_mant128 VAR_5;
 int VAR_6;

 FUNC_2(VAR_2, "fdiv\n");

 FUNC_5(VAR_3, VAR_4);


 VAR_3->sign = VAR_4->sign ^ VAR_3->sign;


 if (FUNC_0(VAR_3)) {

  if (FUNC_0(VAR_4))
   FUNC_8(VAR_3);

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
   FUNC_8(VAR_3);

  return VAR_3;
 }
 if (FUNC_1(VAR_4)) {

  FUNC_10(VAR_0);
  VAR_3->exp = 0x7fff;
  VAR_3->mant.m64 = 0;

  return VAR_3;
 }

 VAR_6 = VAR_3->exp - VAR_4->exp + 0x3fff;




 if ((long)VAR_3->mant.m32[0] >= 0)
  VAR_6 -= FUNC_6(VAR_3);
 if ((long)VAR_4->mant.m32[0] >= 0)
  VAR_6 -= FUNC_6(VAR_4);


 FUNC_4(&VAR_5, VAR_3, VAR_4);



 if (!VAR_5.m32[0]) {
  VAR_6--;
  FUNC_7(VAR_3, &VAR_5, 32);
 } else
  FUNC_7(VAR_3, &VAR_5, 31);

 if (VAR_6 >= 0x7fff) {
  FUNC_9(VAR_3);
  return VAR_3;
 }
 VAR_3->exp = VAR_6;
 if (VAR_6 < 0) {
  FUNC_10(VAR_1);
  FUNC_3(VAR_3, -VAR_6);
 }

 return VAR_3;
}
