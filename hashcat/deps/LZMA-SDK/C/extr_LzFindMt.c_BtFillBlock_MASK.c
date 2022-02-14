
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_5__ {int csWasEntered; int cs; int needStart; } ;
struct TYPE_6__ {scalar_t__ pos; scalar_t__ cyclicBufferSize; int son; scalar_t__ btBuf; TYPE_1__ hashSync; } ;
typedef TYPE_1__ CMtSync ;
typedef TYPE_2__ CMatchFinderMt ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int ,size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_4(CMatchFinderMt *VAR_5, UInt32 VAR_6)
{
  CMtSync *VAR_7 = &VAR_5->hashSync;
  if (!VAR_7->needStart)
  {
    FUNC_1(&VAR_7->cs);
    VAR_7->csWasEntered = VAR_1;
  }

  FUNC_0(VAR_5, VAR_5->btBuf + (VAR_6 & VAR_3) * VAR_2);

  if (VAR_5->pos > VAR_4 - VAR_2)
  {
    UInt32 VAR_8 = VAR_5->pos - VAR_5->cyclicBufferSize;
    FUNC_3(VAR_8, VAR_5->son, (size_t)VAR_5->cyclicBufferSize * 2);
    VAR_5->pos -= VAR_8;
  }

  if (!VAR_7->needStart)
  {
    FUNC_2(&VAR_7->cs);
    VAR_7->csWasEntered = VAR_0;
  }
}
