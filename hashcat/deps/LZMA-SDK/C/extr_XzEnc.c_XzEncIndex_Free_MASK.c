
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ allocated; scalar_t__ size; scalar_t__ numBlocks; int * blocks; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CXzEncIndex ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(CXzEncIndex *VAR_0, ISzAllocPtr VAR_1)
{
  if (VAR_0->blocks)
  {
    FUNC_0(VAR_1, VAR_0->blocks);
    VAR_0->blocks = ((void*)0);
  }
  VAR_0->numBlocks = 0;
  VAR_0->size = 0;
  VAR_0->allocated = 0;
}
