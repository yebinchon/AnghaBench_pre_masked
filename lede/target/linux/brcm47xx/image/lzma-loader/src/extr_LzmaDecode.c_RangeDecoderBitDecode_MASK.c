
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_3__ {scalar_t__ Range; scalar_t__ Code; } ;
typedef TYPE_1__ CRangeDecoder ;
typedef scalar_t__ CProb ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_0(CProb *VAR_5, CRangeDecoder *VAR_6)
{
  UInt32 VAR_7 = (VAR_6->Range >> VAR_2) * *VAR_5;
  if (VAR_6->Code < VAR_7)
  {
    VAR_6->Range = VAR_7;
    *VAR_5 += (VAR_1 - *VAR_5) >> VAR_3;
    if (VAR_6->Range < VAR_4)
    {
      VAR_6->Code = (VAR_6->Code << 8) | VAR_0;
      VAR_6->Range <<= 8;
    }
    return 0;
  }
  else
  {
    VAR_6->Range -= VAR_7;
    VAR_6->Code -= VAR_7;
    *VAR_5 -= (*VAR_5) >> VAR_3;
    if (VAR_6->Range < VAR_4)
    {
      VAR_6->Code = (VAR_6->Code << 8) | VAR_0;
      VAR_6->Range <<= 8;
    }
    return 1;
  }
}
