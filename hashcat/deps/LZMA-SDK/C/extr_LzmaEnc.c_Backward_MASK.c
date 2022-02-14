
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* UInt32 ;
struct TYPE_5__ {unsigned int optEnd; unsigned int optCur; TYPE_1__* opt; void* backRes; } ;
struct TYPE_4__ {int len; void* dist; int extra; } ;
typedef TYPE_2__ CLzmaEnc ;


 void* VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(CLzmaEnc *VAR_1, unsigned VAR_2)
{
  unsigned VAR_3 = VAR_2 + 1;
  VAR_1->optEnd = VAR_3;

  for (;;)
  {
    UInt32 VAR_4 = VAR_1->opt[VAR_2].dist;
    unsigned VAR_5 = (unsigned)VAR_1->opt[VAR_2].len;
    unsigned VAR_6 = (unsigned)VAR_1->opt[VAR_2].extra;
    VAR_2 -= VAR_5;

    if (VAR_6)
    {
      VAR_3--;
      VAR_1->opt[VAR_3].len = (UInt32)VAR_5;
      VAR_2 -= VAR_6;
      VAR_5 = VAR_6;
      if (VAR_6 == 1)
      {
        VAR_1->opt[VAR_3].dist = VAR_4;
        VAR_4 = VAR_0;
      }
      else
      {
        VAR_1->opt[VAR_3].dist = 0;
        VAR_5--;
        VAR_3--;
        VAR_1->opt[VAR_3].dist = VAR_0;
        VAR_1->opt[VAR_3].len = 1;
      }
    }

    if (VAR_2 == 0)
    {
      VAR_1->backRes = VAR_4;
      VAR_1->optCur = VAR_3;
      return VAR_5;
    }

    VAR_3--;
    VAR_1->opt[VAR_3].dist = VAR_4;
    VAR_1->opt[VAR_3].len = (UInt32)VAR_5;
  }
}
