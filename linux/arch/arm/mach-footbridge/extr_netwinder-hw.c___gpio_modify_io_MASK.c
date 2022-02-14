
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(int VAR_1, int VAR_2)
{
 unsigned int VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = (VAR_0 & ~VAR_1) | VAR_2;
 VAR_4 = VAR_3 ^ VAR_0;
 VAR_0 = VAR_3;

 VAR_4 >>= 1;
 VAR_3 >>= 1;

 FUNC_0(7);

 for (VAR_5 = 0xe1; VAR_4 && VAR_5 < 0xe8; VAR_4 >>= 1) {
  FUNC_1(VAR_5, VAR_3 & 1);

  VAR_5 += 1;
  VAR_3 >>= 1;
 }

 FUNC_0(8);

 for (VAR_5 = 0xe8; VAR_4 && VAR_5 < 0xec; VAR_4 >>= 1) {
  FUNC_1(VAR_5, VAR_3 & 1);

  VAR_5 += 1;
  VAR_3 >>= 1;
 }
}
