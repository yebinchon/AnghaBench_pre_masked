
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int op_t ;


 int FUNC_0 (int ,int,int ,int) ;
 long VAR_0 ;

__attribute__((used)) static void FUNC_1(long int VAR_1, long int VAR_2,
     size_t VAR_3)
{
 op_t VAR_4;
 int VAR_5, VAR_6;




 VAR_5 = 8 * (VAR_2 % VAR_0);
 VAR_6 = 8 * VAR_0 - VAR_5;



 VAR_2 &= -VAR_0;
 VAR_4 = ((op_t *) VAR_2)[0];
 VAR_2 += VAR_0;

 while (VAR_3 > 3) {
  op_t VAR_7, VAR_8, VAR_9, VAR_10;

  VAR_7 = ((op_t *) VAR_2)[0];
  VAR_8 = ((op_t *) VAR_2)[1];
  VAR_9 = ((op_t *) VAR_2)[2];
  VAR_10 = ((op_t *) VAR_2)[3];
  ((op_t *) VAR_1)[0] = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_6);
  ((op_t *) VAR_1)[1] = FUNC_0(VAR_7, VAR_5, VAR_8, VAR_6);
  ((op_t *) VAR_1)[2] = FUNC_0(VAR_8, VAR_5, VAR_9, VAR_6);
  ((op_t *) VAR_1)[3] = FUNC_0(VAR_9, VAR_5, VAR_10, VAR_6);

  VAR_4 = VAR_10;
  VAR_2 += 4 * VAR_0;
  VAR_1 += 4 * VAR_0;
  VAR_3 -= 4;
 }
 while (VAR_3 > 0) {
  register op_t VAR_11;

  VAR_11 = ((op_t *) VAR_2)[0];
  ((op_t *) VAR_1)[0] = FUNC_0(VAR_4, VAR_5, VAR_11, VAR_6);

  VAR_4 = VAR_11;
  VAR_2 += VAR_0;
  VAR_1 += VAR_0;
  VAR_3 -= 1;
 }
}
