
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_6__ {unsigned int numHashBytes; int cutValue; scalar_t__ btMode; } ;
struct TYPE_8__ {int dictSize; unsigned int numFastBytes; scalar_t__ lc; scalar_t__ lp; scalar_t__ pb; int fastMode; int multiThread; int writeEndMark; TYPE_1__ matchFinderBase; } ;
struct TYPE_7__ {scalar_t__ lc; scalar_t__ lp; scalar_t__ pb; int dictSize; unsigned int fb; scalar_t__ algo; int numHashBytes; int numThreads; int writeEndMark; int mc; scalar_t__ btMode; } ;
typedef int SRes ;
typedef TYPE_2__ CLzmaEncProps ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_3__ CLzmaEnc ;
typedef scalar_t__ Byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

SRes FUNC_1(CLzmaEncHandle VAR_8, const CLzmaEncProps *VAR_9)
{
  CLzmaEnc *VAR_10 = (CLzmaEnc *)VAR_8;
  CLzmaEncProps VAR_11 = *VAR_9;
  FUNC_0(&VAR_11);

  if (VAR_11.lc > VAR_0
      || VAR_11.lp > VAR_1
      || VAR_11.pb > VAR_3
      || VAR_11.dictSize > ((UInt64)1 << VAR_6)
      || VAR_11.dictSize > VAR_7)
    return VAR_4;

  VAR_10->dictSize = VAR_11.dictSize;
  {
    unsigned VAR_12 = VAR_11.fb;
    if (VAR_12 < 5)
      VAR_12 = 5;
    if (VAR_12 > VAR_2)
      VAR_12 = VAR_2;
    VAR_10->numFastBytes = VAR_12;
  }
  VAR_10->lc = VAR_11.lc;
  VAR_10->lp = VAR_11.lp;
  VAR_10->pb = VAR_11.pb;
  VAR_10->fastMode = (VAR_11.algo == 0);

  VAR_10->matchFinderBase.btMode = (Byte)(VAR_11.btMode ? 1 : 0);
  {
    unsigned VAR_13 = 4;
    if (VAR_11.btMode)
    {
      if (VAR_11.numHashBytes < 2)
        VAR_13 = 2;
      else if (VAR_11.numHashBytes < 4)
        VAR_13 = VAR_11.numHashBytes;
    }
    VAR_10->matchFinderBase.numHashBytes = VAR_13;
  }

  VAR_10->matchFinderBase.cutValue = VAR_11.mc;

  VAR_10->writeEndMark = VAR_11.writeEndMark;
  VAR_10->multiThread = (VAR_11.numThreads > 1);


  return VAR_5;
}
