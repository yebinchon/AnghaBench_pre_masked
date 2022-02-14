
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** high; void** low; } ;
typedef TYPE_1__ CLenEnc ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_0(CLenEnc *VAR_4)
{
  unsigned VAR_5;
  for (VAR_5 = 0; VAR_5 < (VAR_0 << (VAR_2 + 1)); VAR_5++)
    VAR_4->low[VAR_5] = VAR_3;
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    VAR_4->high[VAR_5] = VAR_3;
}
