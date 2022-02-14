
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * bufferBase; int directInput; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CMatchFinder ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(CMatchFinder *VAR_0, ISzAllocPtr VAR_1)
{
  if (!VAR_0->directInput)
  {
    FUNC_0(VAR_1, VAR_0->bufferBase);
    VAR_0->bufferBase = ((void*)0);
  }
}
