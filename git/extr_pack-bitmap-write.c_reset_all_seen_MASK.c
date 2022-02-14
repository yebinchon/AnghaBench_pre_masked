
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static inline void FUNC_0(void)
{
 unsigned int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  VAR_3[VAR_5]->flags &= ~(VAR_1 | VAR_0 | VAR_2);
 }
 VAR_4 = 0;
}
