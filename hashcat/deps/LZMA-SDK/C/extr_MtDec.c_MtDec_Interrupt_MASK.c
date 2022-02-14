
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_4__ {int cs; } ;
struct TYPE_5__ {scalar_t__ interruptIndex; TYPE_1__ mtProgress; scalar_t__ needInterrupt; } ;
typedef TYPE_2__ CMtDec ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(CMtDec *VAR_1, UInt64 VAR_2)
{
  FUNC_0(&VAR_1->mtProgress.cs);
  if (!VAR_1->needInterrupt || VAR_2 < VAR_1->interruptIndex)
  {
    VAR_1->interruptIndex = VAR_2;
    VAR_1->needInterrupt = VAR_0;
  }
  FUNC_1(&VAR_1->mtProgress.cs);
}
