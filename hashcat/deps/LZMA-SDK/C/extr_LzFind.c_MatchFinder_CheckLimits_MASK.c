
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pos; scalar_t__ keepSizeAfter; scalar_t__ streamPos; scalar_t__ cyclicBufferPos; scalar_t__ cyclicBufferSize; int streamEndWasReached; } ;
typedef TYPE_1__ CMatchFinder ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(CMatchFinder *VAR_1)
{
  if (VAR_1->pos == VAR_0)
    FUNC_1(VAR_1);
  if (!VAR_1->streamEndWasReached && VAR_1->keepSizeAfter == VAR_1->streamPos - VAR_1->pos)
    FUNC_0(VAR_1);
  if (VAR_1->cyclicBufferPos == VAR_1->cyclicBufferSize)
    VAR_1->cyclicBufferPos = 0;
  FUNC_2(VAR_1);
}
