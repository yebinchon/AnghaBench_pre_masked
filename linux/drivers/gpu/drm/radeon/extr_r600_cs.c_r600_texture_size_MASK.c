
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
         unsigned VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7,
         unsigned VAR_8, unsigned VAR_9, unsigned VAR_10,
         unsigned *VAR_11, unsigned *VAR_12)
{
 unsigned VAR_13, VAR_14, VAR_15;
 unsigned VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned VAR_20;
 unsigned VAR_21, VAR_22;
 unsigned VAR_23 = VAR_2 - VAR_1 + 1;

 *VAR_11 = -1;
 VAR_20 = FUNC_0(VAR_7);

 VAR_3 = FUNC_3(VAR_3, 0);
 VAR_4 = FUNC_3(VAR_4, 0);
 VAR_5 = FUNC_3(VAR_5, 0);
 for(VAR_14 = 0, VAR_13 = 0, VAR_15 = VAR_1; VAR_14 < VAR_23; VAR_14++, VAR_15++) {
  VAR_16 = FUNC_3(VAR_3, VAR_14);
  VAR_21 = FUNC_1(VAR_7, VAR_16);

  VAR_21 = FUNC_4(VAR_21, VAR_8);

  VAR_17 = FUNC_3(VAR_4, VAR_14);
  VAR_22 = FUNC_2(VAR_7, VAR_17);
  VAR_22 = FUNC_4(VAR_22, VAR_9);

  VAR_18 = FUNC_3(VAR_5, VAR_14);

  VAR_19 = VAR_21 * VAR_22 * VAR_20 * VAR_6;
  if (VAR_0)
   VAR_19 *= VAR_0;
  else
   VAR_19 *= VAR_18;

  if (VAR_14 == 0)
   *VAR_11 = VAR_19;

  if (VAR_14 == 0 || VAR_14 == 1)
   VAR_13 = FUNC_4(VAR_13, VAR_10);

  VAR_13 += VAR_19;
 }
 *VAR_12 = VAR_13;
 if (VAR_2 == 0)
  *VAR_12 = *VAR_11;
 if (!VAR_1)
  *VAR_12 -= *VAR_11;
}
