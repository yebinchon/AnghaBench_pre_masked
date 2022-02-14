
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fregs_state {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 scalar_t__ FUNC_1 () ;
 unsigned long FUNC_2 () ;

unsigned long
FUNC_3(unsigned long VAR_0, int VAR_1,
       unsigned long *VAR_2, unsigned long *VAR_3)
{
 unsigned long VAR_4 = FUNC_2();

 *VAR_2 = VAR_0 = FUNC_0(VAR_0 - VAR_4, 64);
 if (VAR_1 && FUNC_1()) {
  VAR_4 += sizeof(struct fregs_state);
  VAR_0 -= sizeof(struct fregs_state);
 }

 *VAR_3 = VAR_4;

 return VAR_0;
}
