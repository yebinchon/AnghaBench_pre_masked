
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_0 (unsigned VAR_2) {
  VAR_2 *= 2654435773U;
  VAR_2 /= 42950;
  VAR_0 = 7 + 10 * (VAR_2 % 100);
  VAR_1 = (VAR_2 / 100) % 1000;
}
