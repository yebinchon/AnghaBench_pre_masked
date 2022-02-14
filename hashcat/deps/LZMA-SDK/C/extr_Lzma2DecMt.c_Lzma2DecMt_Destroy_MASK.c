
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int baseAlloc; } ;
struct TYPE_10__ {TYPE_2__ alignOffsetAlloc; TYPE_3__* coders; void* mtc_WasConstructed; int mtc; } ;
struct TYPE_7__ {int vt; } ;
struct TYPE_9__ {void* dec_created; TYPE_1__ alloc; int dec; } ;
typedef TYPE_3__ CLzma2DecMtThread ;
typedef scalar_t__ CLzma2DecMtHandle ;
typedef TYPE_4__ CLzma2DecMt ;


 void* VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int *) ;
 unsigned int VAR_1 ;
 int FUNC_4 (int *) ;

void FUNC_5(CLzma2DecMtHandle VAR_2)
{
  CLzma2DecMt *VAR_3 = (CLzma2DecMt *)VAR_2;

  FUNC_2(VAR_3);



  if (VAR_3->mtc_WasConstructed)
  {
    FUNC_4(&VAR_3->mtc);
    VAR_3->mtc_WasConstructed = VAR_0;
  }
  {
    unsigned VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    {
      CLzma2DecMtThread *VAR_5 = &VAR_3->coders[VAR_4];
      if (VAR_5->dec_created)
      {

        FUNC_3(&VAR_5->dec, &VAR_5->alloc.vt);
        VAR_5->dec_created = VAR_0;
      }
    }
  }
  FUNC_1(VAR_3);



  FUNC_0(VAR_3->alignOffsetAlloc.baseAlloc, VAR_2);
}
