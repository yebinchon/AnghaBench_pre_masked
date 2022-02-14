
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int p; int (* Init ) (int ) ;int (* SetProps ) (int ,int ,int ,int ) ;} ;
struct TYPE_7__ {TYPE_5__ StateCoder; scalar_t__ srcWasFinished; scalar_t__ endPos; scalar_t__ curPos; int * buf; } ;
struct TYPE_6__ {int propsSize; int props; int id; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CXzFilter ;
typedef TYPE_2__ CSeqInFilter ;
typedef int Byte ;


 int FUNC_0 (TYPE_5__*,int ,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static SRes FUNC_5(CSeqInFilter *VAR_3, const CXzFilter *VAR_4, ISzAllocPtr VAR_5)
{
  if (!VAR_3->buf)
  {
    VAR_3->buf = (Byte *)FUNC_1(VAR_5, VAR_0);
    if (!VAR_3->buf)
      return VAR_1;
  }
  VAR_3->curPos = VAR_3->endPos = 0;
  VAR_3->srcWasFinished = 0;
  FUNC_2(FUNC_0(&VAR_3->StateCoder, VAR_4->id, 1, VAR_5));
  FUNC_2(VAR_3->StateCoder.SetProps(VAR_3->StateCoder.p, VAR_4->props, VAR_4->propsSize, VAR_5));
  VAR_3->StateCoder.Init(VAR_3->StateCoder.p);
  return VAR_2;
}
