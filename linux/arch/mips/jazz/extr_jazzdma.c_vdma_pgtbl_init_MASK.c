
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long frame; int owner; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static inline void FUNC_0(void)
{
 unsigned long VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_3[VAR_5].frame = VAR_4;
  VAR_3[VAR_5].owner = VAR_1;
  VAR_4 += VAR_0;
 }
}
