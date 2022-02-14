
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ streamEndWasReached; int result; int cyclicBufferSize; int streamPos; int pos; int bufferBase; int buffer; scalar_t__ cyclicBufferPos; } ;
typedef TYPE_1__ CMatchFinder ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_2(CMatchFinder *VAR_1, int VAR_2)
{
  VAR_1->cyclicBufferPos = 0;
  VAR_1->buffer = VAR_1->bufferBase;
  VAR_1->pos =
  VAR_1->streamPos = VAR_1->cyclicBufferSize;
  VAR_1->result = VAR_0;
  VAR_1->streamEndWasReached = 0;

  if (VAR_2)
    FUNC_0(VAR_1);

  FUNC_1(VAR_1);
}
