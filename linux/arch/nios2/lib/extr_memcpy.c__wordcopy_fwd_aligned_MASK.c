
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int op_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(long int VAR_1, long int VAR_2, size_t VAR_3)
{
 while (VAR_3 > 7) {
  register op_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

  VAR_4 = ((op_t *) VAR_2)[0];
  VAR_5 = ((op_t *) VAR_2)[1];
  VAR_6 = ((op_t *) VAR_2)[2];
  VAR_7 = ((op_t *) VAR_2)[3];
  VAR_8 = ((op_t *) VAR_2)[4];
  VAR_9 = ((op_t *) VAR_2)[5];
  VAR_10 = ((op_t *) VAR_2)[6];
  VAR_11 = ((op_t *) VAR_2)[7];
  ((op_t *) VAR_1)[0] = VAR_4;
  ((op_t *) VAR_1)[1] = VAR_5;
  ((op_t *) VAR_1)[2] = VAR_6;
  ((op_t *) VAR_1)[3] = VAR_7;
  ((op_t *) VAR_1)[4] = VAR_8;
  ((op_t *) VAR_1)[5] = VAR_9;
  ((op_t *) VAR_1)[6] = VAR_10;
  ((op_t *) VAR_1)[7] = VAR_11;

  VAR_2 += 8 * VAR_0;
  VAR_1 += 8 * VAR_0;
  VAR_3 -= 8;
 }
 while (VAR_3 > 0) {
  *(op_t *)VAR_1 = *(op_t *)VAR_2;

  VAR_2 += VAR_0;
  VAR_1 += VAR_0;
  VAR_3 -= 1;
 }
}
