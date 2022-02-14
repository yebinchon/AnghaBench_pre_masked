
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int historySize; int* hashBuf; int* btBuf; int btSync; int hashSync; int * MatchFinder; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CMatchFinderMt ;
typedef int CMatchFinder ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int,int,int,int ) ;
 int FUNC_2 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

SRes FUNC_4(CMatchFinderMt *VAR_11, UInt32 VAR_12, UInt32 VAR_13,
    UInt32 VAR_14, UInt32 VAR_15, ISzAllocPtr VAR_16)
{
  CMatchFinder *VAR_17 = VAR_11->MatchFinder;
  VAR_11->historySize = VAR_12;
  if (VAR_7 <= VAR_14 * 4)
    return VAR_3;
  if (!VAR_11->hashBuf)
  {
    VAR_11->hashBuf = (UInt32 *)FUNC_0(VAR_16, (VAR_6 + VAR_5) * sizeof(UInt32));
    if (!VAR_11->hashBuf)
      return VAR_2;
    VAR_11->btBuf = VAR_11->hashBuf + VAR_6;
  }
  VAR_13 += (VAR_6 + VAR_5);
  VAR_15 += VAR_9;
  if (!FUNC_1(VAR_17, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16))
    return VAR_2;

  FUNC_3(FUNC_2(&VAR_11->hashSync, VAR_1, VAR_11, VAR_10));
  FUNC_3(FUNC_2(&VAR_11->btSync, VAR_0, VAR_11, VAR_8));
  return VAR_4;
}
