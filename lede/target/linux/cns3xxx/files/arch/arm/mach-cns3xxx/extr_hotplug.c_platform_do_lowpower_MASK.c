
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(unsigned int VAR_1, int *VAR_2)
{





 for (;;) {



  asm(".word	0xe320f003\n"
      :
      :
      : "memory", "cc");

  if (VAR_0 == VAR_1) {



   break;
  }
  (*VAR_2)++;
 }
}
