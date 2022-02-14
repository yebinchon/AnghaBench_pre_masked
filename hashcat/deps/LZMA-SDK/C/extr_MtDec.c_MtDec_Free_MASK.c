
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * crossBlock; int alloc; int * threads; int exitThread; } ;
typedef TYPE_1__ CMtDec ;


 int FUNC_0 (int ,int *) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(CMtDec *VAR_2)
{
  unsigned VAR_3;

  VAR_2->exitThread = VAR_1;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    FUNC_1(&VAR_2->threads[VAR_3]);



  if (VAR_2->crossBlock)
  {
    FUNC_0(VAR_2->alloc, VAR_2->crossBlock);
    VAR_2->crossBlock = ((void*)0);
  }
}
