
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned int UInt32 ;
struct TYPE_11__ {scalar_t__ btMode; int hashMask; void* bigHash; } ;
struct TYPE_9__ {int * litProbs; } ;
struct TYPE_10__ {int mtMode; unsigned int lc; unsigned int lp; unsigned int lclp; scalar_t__ dictSize; int matchFinder; TYPE_3__ matchFinderBase; TYPE_3__* matchFinderObj; int numFastBytes; TYPE_3__ matchFinderMt; TYPE_1__ saveState; int * litProbs; int fastMode; scalar_t__ multiThread; int rc; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef int CLzmaProb ;
typedef TYPE_2__ CLzmaEnc ;
typedef void* Byte ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_3__*,unsigned int,unsigned int,int ,scalar_t__,int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,unsigned int,int ,scalar_t__,int ) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static SRes FUNC_8(CLzmaEnc *VAR_5, UInt32 VAR_6, ISzAllocPtr VAR_7, ISzAllocPtr VAR_8)
{
  UInt32 VAR_9 = VAR_4;
  if (!FUNC_7(&VAR_5->rc, VAR_7))
    return VAR_1;


  VAR_5->mtMode = (VAR_5->multiThread && !VAR_5->fastMode && (VAR_5->matchFinderBase.btMode != 0));


  {
    unsigned VAR_10 = VAR_5->lc + VAR_5->lp;
    if (!VAR_5->litProbs || !VAR_5->saveState.litProbs || VAR_5->lclp != VAR_10)
    {
      FUNC_1(VAR_5, VAR_7);
      VAR_5->litProbs = (CLzmaProb *)FUNC_0(VAR_7, ((UInt32)0x300 << VAR_10) * sizeof(CLzmaProb));
      VAR_5->saveState.litProbs = (CLzmaProb *)FUNC_0(VAR_7, ((UInt32)0x300 << VAR_10) * sizeof(CLzmaProb));
      if (!VAR_5->litProbs || !VAR_5->saveState.litProbs)
      {
        FUNC_1(VAR_5, VAR_7);
        return VAR_1;
      }
      VAR_5->lclp = VAR_10;
    }
  }

  VAR_5->matchFinderBase.bigHash = (Byte)(VAR_5->dictSize > VAR_3 ? 1 : 0);

  if (VAR_9 + VAR_5->dictSize < VAR_6)
    VAR_9 = VAR_6 - VAR_5->dictSize;


  if (VAR_5->mtMode)
  {
    FUNC_6(FUNC_2(&VAR_5->matchFinderMt, VAR_5->dictSize, VAR_9, VAR_5->numFastBytes,
        VAR_0
        + 1
        , VAR_8));
    VAR_5->matchFinderObj = &VAR_5->matchFinderMt;
    VAR_5->matchFinderBase.bigHash = (Byte)(
        (VAR_5->dictSize > VAR_3 && VAR_5->matchFinderBase.hashMask >= 0xFFFFFF) ? 1 : 0);
    FUNC_3(&VAR_5->matchFinderMt, &VAR_5->matchFinder);
  }
  else

  {
    if (!FUNC_4(&VAR_5->matchFinderBase, VAR_5->dictSize, VAR_9, VAR_5->numFastBytes, VAR_0, VAR_8))
      return VAR_1;
    VAR_5->matchFinderObj = &VAR_5->matchFinderBase;
    FUNC_5(&VAR_5->matchFinderBase, &VAR_5->matchFinder);
  }

  return VAR_2;
}
