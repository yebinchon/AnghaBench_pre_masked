
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8083_state {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tda8083_state*,int) ;

__attribute__((used)) static void FUNC_2 (struct tda8083_state* VAR_1, int VAR_2)
{
 unsigned long VAR_3 = VAR_0;

 while (VAR_0 - VAR_3 < VAR_2 &&
        !(FUNC_1(VAR_1, 0x02) & 0x80))
 {
  FUNC_0(50);
 }
}
