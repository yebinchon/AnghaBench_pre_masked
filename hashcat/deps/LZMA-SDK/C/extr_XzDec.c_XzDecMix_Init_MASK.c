
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {unsigned int numCoders; scalar_t__* ids; size_t outBufSize; int alloc; TYPE_1__* coders; int * outBuf; } ;
struct TYPE_14__ {TYPE_2__* filters; } ;
struct TYPE_13__ {scalar_t__ id; int propsSize; int props; } ;
struct TYPE_12__ {int p; int (* SetProps ) (int ,int ,int ,int ) ;} ;
typedef int SRes ;
typedef TYPE_1__ IStateCoder ;
typedef TYPE_2__ CXzFilter ;
typedef TYPE_3__ CXzBlock ;
typedef TYPE_4__ CMixCoder ;
typedef int Byte ;
typedef scalar_t__ BoolInt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,scalar_t__,int *,size_t) ;
 int FUNC_3 (TYPE_4__*,unsigned int,scalar_t__,int *,size_t) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_5 (TYPE_3__ const*) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static SRes FUNC_7(CMixCoder *VAR_3, const CXzBlock *VAR_4, Byte *VAR_5, size_t VAR_6)
{
  unsigned VAR_7;
  BoolInt VAR_8 = VAR_2;
  unsigned VAR_9 = FUNC_5(VAR_4);

  if (VAR_9 == VAR_3->numCoders && ((VAR_3->outBuf && VAR_5) || (!VAR_3->outBuf && !VAR_5)))
  {
    VAR_8 = VAR_0;
    for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
      if (VAR_3->ids[VAR_7] != VAR_4->filters[VAR_9 - 1 - VAR_7].id)
      {
        VAR_8 = VAR_2;
        break;
      }
  }


  VAR_3->outBuf = VAR_5;
  VAR_3->outBufSize = VAR_6;




  if (VAR_8)
  {
    FUNC_0(VAR_3);
    for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
    {
      FUNC_4(FUNC_3(VAR_3, VAR_7, VAR_4->filters[VAR_9 - 1 - VAR_7].id, VAR_5, VAR_6));
    }
    VAR_3->numCoders = VAR_9;
  }
  else
  {
    FUNC_4(FUNC_2(VAR_3, 0, VAR_4->filters[VAR_9 - 1].id, VAR_5, VAR_6));
  }

  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
  {
    const CXzFilter *VAR_10 = &VAR_4->filters[VAR_9 - 1 - VAR_7];
    IStateCoder *VAR_11 = &VAR_3->coders[VAR_7];
    FUNC_4(VAR_11->SetProps(VAR_11->p, VAR_10->props, VAR_10->propsSize, VAR_3->alloc));
  }

  FUNC_1(VAR_3);
  return VAR_1;
}
