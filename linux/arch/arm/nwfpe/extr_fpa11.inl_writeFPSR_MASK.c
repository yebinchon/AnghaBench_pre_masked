
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fpsr; } ;
typedef int FPSR ;
typedef TYPE_1__ FPA11 ;


 TYPE_1__* FUNC_0 () ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(FPSR VAR_1)
{
 FPA11 *VAR_2 = FUNC_0();

 VAR_2->fpsr = (VAR_2->fpsr & VAR_0) | (VAR_1 & ~VAR_0);
}
