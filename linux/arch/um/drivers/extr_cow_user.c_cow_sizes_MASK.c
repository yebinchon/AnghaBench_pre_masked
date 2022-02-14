
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(int VAR_0, __u64 VAR_1, int VAR_2, int VAR_3,
        int VAR_4, unsigned long *VAR_5,
        int *VAR_6)
{
 if (VAR_0 < 3) {
  *VAR_5 = (VAR_1 + VAR_2 - 1) / (8 * VAR_2);

  *VAR_6 = VAR_4 + *VAR_5;
  *VAR_6 = (*VAR_6 + VAR_2 - 1) /
   VAR_2;
  *VAR_6 *= VAR_2;
 }
 else {
  *VAR_5 = FUNC_0(VAR_1, VAR_2);
  *VAR_5 = FUNC_0(*VAR_5, 8);

  *VAR_6 = VAR_4 + *VAR_5;
  *VAR_6 = FUNC_1(*VAR_6, VAR_3);
 }
}
