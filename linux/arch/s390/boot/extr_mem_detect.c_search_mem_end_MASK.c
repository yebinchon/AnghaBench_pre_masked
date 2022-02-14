
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned long VAR_1 = 1 << (VAR_0 - 20);
 unsigned long VAR_2 = 0;
 unsigned long VAR_3;

 while (VAR_1 > 1) {
  VAR_1 >>= 1;
  VAR_3 = VAR_2 + VAR_1;
  if (!FUNC_1(VAR_3 << 20))
   VAR_2 = VAR_3;
 }

 FUNC_0(0, (VAR_2 + 1) << 20);
}
