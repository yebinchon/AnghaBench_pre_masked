
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ptrdiff_t ;
typedef int UInt32 ;
struct TYPE_15__ {scalar_t__ pos; int historySize; int streamPos; int numHashBytes; int buffer; int crc; scalar_t__ hashMask; scalar_t__ fixedHashSize; scalar_t__ hash; } ;
struct TYPE_13__ {int numProcessedBlocks; int filledSemaphore; int freeSemaphore; int cs; int wasStopped; scalar_t__ stopWriting; scalar_t__ exit; int wasStarted; int canStart; } ;
struct TYPE_12__ {int cs; } ;
struct TYPE_14__ {int pointerToCurPos; int buffer; int* hashBuf; int (* GetHeadsFunc ) (int,int,scalar_t__,scalar_t__,int*,int,int ) ;TYPE_2__ hashSync; TYPE_1__ btSync; TYPE_4__* MatchFinder; } ;
typedef TYPE_2__ CMtSync ;
typedef TYPE_3__ CMatchFinderMt ;
typedef TYPE_4__ CMatchFinder ;
typedef int Byte ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int const* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int,scalar_t__,size_t) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_13 (int,int,scalar_t__,scalar_t__,int*,int,int ) ;

__attribute__((used)) static void FUNC_14(CMatchFinderMt *VAR_3)
{
  CMtSync *VAR_4 = &VAR_3->hashSync;
  for (;;)
  {
    UInt32 VAR_5 = 0;
    FUNC_3(&VAR_4->canStart);
    FUNC_2(&VAR_4->wasStarted);

    FUNC_5(VAR_3->MatchFinder);

    for (;;)
    {
      if (VAR_4->exit)
        return;
      if (VAR_4->stopWriting)
      {
        VAR_4->numProcessedBlocks = VAR_5;
        FUNC_2(&VAR_4->wasStopped);
        break;
      }

      {
        CMatchFinder *VAR_6 = VAR_3->MatchFinder;
        if (FUNC_7(VAR_6))
        {
          FUNC_0(&VAR_3->btSync.cs);
          FUNC_0(&VAR_3->hashSync.cs);
          {
            const Byte *VAR_7 = FUNC_4(VAR_6);
            ptrdiff_t VAR_8;
            FUNC_6(VAR_6);
            VAR_8 = VAR_7 - FUNC_4(VAR_6);
            VAR_3->pointerToCurPos -= VAR_8;
            VAR_3->buffer -= VAR_8;
          }
          FUNC_1(&VAR_3->btSync.cs);
          FUNC_1(&VAR_3->hashSync.cs);
          continue;
        }

        FUNC_12(&VAR_4->freeSemaphore);

        FUNC_9(VAR_6);
        if (VAR_6->pos > (VAR_2 - VAR_0))
        {
          UInt32 VAR_9 = (VAR_6->pos - VAR_6->historySize - 1);
          FUNC_10(VAR_6, VAR_9);
          FUNC_8(VAR_9, VAR_6->hash + VAR_6->fixedHashSize, (size_t)VAR_6->hashMask + 1);
        }
        {
          UInt32 *VAR_10 = VAR_3->hashBuf + ((VAR_5++) & VAR_1) * VAR_0;
          UInt32 VAR_11 = VAR_6->streamPos - VAR_6->pos;
          VAR_10[0] = 2;
          VAR_10[1] = VAR_11;
          if (VAR_11 >= VAR_6->numHashBytes)
          {
            VAR_11 = VAR_11 - VAR_6->numHashBytes + 1;
            if (VAR_11 > VAR_0 - 2)
              VAR_11 = VAR_0 - 2;
            VAR_3->GetHeadsFunc(VAR_6->buffer, VAR_6->pos, VAR_6->hash + VAR_6->fixedHashSize, VAR_6->hashMask, VAR_10 + 2, VAR_11, VAR_6->crc);
            VAR_10[0] = 2 + VAR_11;
          }
          VAR_6->pos += VAR_11;
          VAR_6->buffer += VAR_11;
        }
      }

      FUNC_11(&VAR_4->filledSemaphore);
    }
  }
}
