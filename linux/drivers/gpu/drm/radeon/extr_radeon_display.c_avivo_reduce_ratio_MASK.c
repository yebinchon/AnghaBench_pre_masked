
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned *VAR_0, unsigned *VAR_1,
          unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;


 VAR_4 = FUNC_1(*VAR_0, *VAR_1);
 *VAR_0 /= VAR_4;
 *VAR_1 /= VAR_4;


 if (*VAR_0 < VAR_2) {
  VAR_4 = FUNC_0(VAR_2, *VAR_0);
  *VAR_0 *= VAR_4;
  *VAR_1 *= VAR_4;
 }


 if (*VAR_1 < VAR_3) {
  VAR_4 = FUNC_0(VAR_3, *VAR_1);
  *VAR_0 *= VAR_4;
  *VAR_1 *= VAR_4;
 }
}
