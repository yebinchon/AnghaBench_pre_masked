
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

void FUNC_0(unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long *VAR_3, *VAR_4;

 VAR_3 = (unsigned long *) VAR_1;
 VAR_4 = VAR_3 + VAR_0;

 do {
  VAR_3[0] = VAR_2;
  VAR_3[1] = VAR_2;
  VAR_3[2] = VAR_2;
  VAR_3[3] = VAR_2;
  VAR_3[4] = VAR_2;
  VAR_3 += 8;
  VAR_3[-3] = VAR_2;
  VAR_3[-2] = VAR_2;
  VAR_3[-1] = VAR_2;
 } while (VAR_3 != VAR_4);
}
