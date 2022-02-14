
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64x2_t ;
typedef int uint64_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(unsigned long VAR_0, unsigned long *VAR_1,
 unsigned long *VAR_2, unsigned long *VAR_3,
 unsigned long *VAR_4, unsigned long *VAR_5)
{
 uint64_t *VAR_6 = (uint64_t *)VAR_1;
 uint64_t *VAR_7 = (uint64_t *)VAR_2;
 uint64_t *VAR_8 = (uint64_t *)VAR_3;
 uint64_t *VAR_9 = (uint64_t *)VAR_4;
 uint64_t *VAR_10 = (uint64_t *)VAR_5;

 register uint64x2_t VAR_11, VAR_12, VAR_13, VAR_14;
 long VAR_15 = VAR_0 / (sizeof(uint64x2_t) * 4);

 do {

  VAR_11 = FUNC_0(FUNC_1(VAR_6 + 0), FUNC_1(VAR_7 + 0));
  VAR_12 = FUNC_0(FUNC_1(VAR_6 + 2), FUNC_1(VAR_7 + 2));
  VAR_13 = FUNC_0(FUNC_1(VAR_6 + 4), FUNC_1(VAR_7 + 4));
  VAR_14 = FUNC_0(FUNC_1(VAR_6 + 6), FUNC_1(VAR_7 + 6));


  VAR_11 = FUNC_0(VAR_11, FUNC_1(VAR_8 + 0));
  VAR_12 = FUNC_0(VAR_12, FUNC_1(VAR_8 + 2));
  VAR_13 = FUNC_0(VAR_13, FUNC_1(VAR_8 + 4));
  VAR_14 = FUNC_0(VAR_14, FUNC_1(VAR_8 + 6));


  VAR_11 = FUNC_0(VAR_11, FUNC_1(VAR_9 + 0));
  VAR_12 = FUNC_0(VAR_12, FUNC_1(VAR_9 + 2));
  VAR_13 = FUNC_0(VAR_13, FUNC_1(VAR_9 + 4));
  VAR_14 = FUNC_0(VAR_14, FUNC_1(VAR_9 + 6));


  VAR_11 = FUNC_0(VAR_11, FUNC_1(VAR_10 + 0));
  VAR_12 = FUNC_0(VAR_12, FUNC_1(VAR_10 + 2));
  VAR_13 = FUNC_0(VAR_13, FUNC_1(VAR_10 + 4));
  VAR_14 = FUNC_0(VAR_14, FUNC_1(VAR_10 + 6));


  FUNC_2(VAR_6 + 0, VAR_11);
  FUNC_2(VAR_6 + 2, VAR_12);
  FUNC_2(VAR_6 + 4, VAR_13);
  FUNC_2(VAR_6 + 6, VAR_14);

  VAR_6 += 8;
  VAR_7 += 8;
  VAR_8 += 8;
  VAR_9 += 8;
  VAR_10 += 8;
 } while (--VAR_15 > 0);
}
