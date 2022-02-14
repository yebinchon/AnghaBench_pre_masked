
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fpcr; } ;
typedef int FPCR ;
typedef TYPE_1__ FPA11 ;


 TYPE_1__* FUNC_0 () ;
 int VAR_0 ;

__attribute__((used)) static inline FPCR FUNC_1(void)
{
 FPA11 *VAR_1 = FUNC_0();

 return (VAR_1->fpcr & ~VAR_0);
}
