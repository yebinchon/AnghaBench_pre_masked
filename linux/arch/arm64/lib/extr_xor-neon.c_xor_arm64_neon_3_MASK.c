
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
 unsigned long *VAR_2, unsigned long *VAR_3)
{
 uint64_t *VAR_4 = (uint64_t *)VAR_1;
 uint64_t *VAR_5 = (uint64_t *)VAR_2;
 uint64_t *VAR_6 = (uint64_t *)VAR_3;

 register uint64x2_t VAR_7, VAR_8, VAR_9, VAR_10;
 long VAR_11 = VAR_0 / (sizeof(uint64x2_t) * 4);

 do {

  VAR_7 = FUNC_0(FUNC_1(VAR_4 + 0), FUNC_1(VAR_5 + 0));
  VAR_8 = FUNC_0(FUNC_1(VAR_4 + 2), FUNC_1(VAR_5 + 2));
  VAR_9 = FUNC_0(FUNC_1(VAR_4 + 4), FUNC_1(VAR_5 + 4));
  VAR_10 = FUNC_0(FUNC_1(VAR_4 + 6), FUNC_1(VAR_5 + 6));


  VAR_7 = FUNC_0(VAR_7, FUNC_1(VAR_6 + 0));
  VAR_8 = FUNC_0(VAR_8, FUNC_1(VAR_6 + 2));
  VAR_9 = FUNC_0(VAR_9, FUNC_1(VAR_6 + 4));
  VAR_10 = FUNC_0(VAR_10, FUNC_1(VAR_6 + 6));


  FUNC_2(VAR_4 + 0, VAR_7);
  FUNC_2(VAR_4 + 2, VAR_8);
  FUNC_2(VAR_4 + 4, VAR_9);
  FUNC_2(VAR_4 + 6, VAR_10);

  VAR_4 += 8;
  VAR_5 += 8;
  VAR_6 += 8;
 } while (--VAR_11 > 0);
}
