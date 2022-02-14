
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fp_ext {int exp; scalar_t__ sign; } ;


 scalar_t__ FUNC_0 (struct fp_ext*) ;
 scalar_t__ FUNC_1 (struct fp_ext*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_4 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_5 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_6 (struct fp_ext*,struct fp_ext*) ;
 struct fp_ext VAR_1 ;
 int FUNC_7 (struct fp_ext*) ;

struct fp_ext *
FUNC_8(struct fp_ext *VAR_2, struct fp_ext *VAR_3)
{
 struct fp_ext VAR_4, VAR_5;
 int VAR_6, VAR_7;

 FUNC_2(VAR_0, "fsqrt\n");

 FUNC_6(VAR_2, VAR_3);

 if (FUNC_1(VAR_2))
  return VAR_2;

 if (VAR_2->sign) {
  FUNC_7(VAR_2);
  return VAR_2;
 }
 if (FUNC_0(VAR_2))
  return VAR_2;
 VAR_7 = VAR_2->exp;
 VAR_2->exp = 0x3FFF;
 if (!(VAR_7 & 1))
  VAR_2->exp++;
 FUNC_3(&VAR_5, VAR_2);
 FUNC_4(VAR_2, &VAR_1);
 VAR_2->exp--;
 for (VAR_6 = 0; VAR_6 < 9; VAR_6++) {
  FUNC_3(&VAR_4, &VAR_5);

  FUNC_5(&VAR_4, VAR_2);
  FUNC_4(VAR_2, &VAR_4);
  VAR_2->exp--;
 }

 VAR_2->exp += (VAR_7 - 0x3FFF) / 2;

 return VAR_2;
}
