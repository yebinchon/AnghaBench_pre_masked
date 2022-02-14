
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
typedef scalar_t__ UInt32 ;
struct TYPE_4__ {scalar_t__ (* GetNumAvailableBytes ) (int ) ;unsigned int (* GetMatches ) (int ,int*) ;scalar_t__* (* GetPointerToCurrentPos ) (int ) ;} ;
struct TYPE_5__ {scalar_t__ numAvail; int* matches; unsigned int numFastBytes; int matchFinderObj; TYPE_1__ matchFinder; int additionalOffset; } ;
typedef TYPE_2__ CLzmaEnc ;
typedef scalar_t__ Byte ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,int*) ;
 scalar_t__* FUNC_3 (int ) ;

__attribute__((used)) static unsigned FUNC_4(CLzmaEnc *VAR_2, unsigned *VAR_3)
{
  unsigned VAR_4;

  VAR_2->additionalOffset++;
  VAR_2->numAvail = VAR_2->matchFinder.GetNumAvailableBytes(VAR_2->matchFinderObj);
  VAR_4 = VAR_2->matchFinder.GetMatches(VAR_2->matchFinderObj, VAR_2->matches);
  *VAR_3 = VAR_4;
  if (VAR_4 == 0)
    return 0;
  {
    unsigned VAR_5 = VAR_2->matches[(size_t)VAR_4 - 2];
    if (VAR_5 != VAR_2->numFastBytes)
      return VAR_5;
    {
      UInt32 VAR_6 = VAR_2->numAvail;
      if (VAR_6 > VAR_0)
        VAR_6 = VAR_0;
      {
        const Byte *VAR_7 = VAR_2->matchFinder.GetPointerToCurrentPos(VAR_2->matchFinderObj) - 1;
        const Byte *VAR_8 = VAR_7 + VAR_5;
        ptrdiff_t VAR_9 = (ptrdiff_t)-1 - VAR_2->matches[(size_t)VAR_4 - 1];
        const Byte *VAR_10 = VAR_7 + VAR_6;
        for (; VAR_8 != VAR_10 && *VAR_8 == VAR_8[VAR_9]; VAR_8++)
        {}
        return (unsigned)(VAR_8 - VAR_7);
      }
    }
  }
}
