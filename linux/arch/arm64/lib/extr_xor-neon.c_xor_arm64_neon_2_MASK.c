
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
 unsigned long *VAR_2)
{
 uint64_t *VAR_3 = (uint64_t *)VAR_1;
 uint64_t *VAR_4 = (uint64_t *)VAR_2;

 register uint64x2_t VAR_5, VAR_6, VAR_7, VAR_8;
 long VAR_9 = VAR_0 / (sizeof(uint64x2_t) * 4);

 do {

  VAR_5 = FUNC_0(FUNC_1(VAR_3 + 0), FUNC_1(VAR_4 + 0));
  VAR_6 = FUNC_0(FUNC_1(VAR_3 + 2), FUNC_1(VAR_4 + 2));
  VAR_7 = FUNC_0(FUNC_1(VAR_3 + 4), FUNC_1(VAR_4 + 4));
  VAR_8 = FUNC_0(FUNC_1(VAR_3 + 6), FUNC_1(VAR_4 + 6));


  FUNC_2(VAR_3 + 0, VAR_5);
  FUNC_2(VAR_3 + 2, VAR_6);
  FUNC_2(VAR_3 + 4, VAR_7);
  FUNC_2(VAR_3 + 6, VAR_8);

  VAR_3 += 8;
  VAR_4 += 8;
 } while (--VAR_9 > 0);
}
