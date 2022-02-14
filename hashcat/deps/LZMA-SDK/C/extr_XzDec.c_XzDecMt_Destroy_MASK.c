
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int baseAlloc; } ;
struct TYPE_8__ {TYPE_1__ alignOffsetAlloc; TYPE_2__* coders; void* mtc_WasConstructed; int mtc; } ;
struct TYPE_7__ {void* dec_created; int dec; } ;
typedef TYPE_2__ CXzDecMtThread ;
typedef scalar_t__ CXzDecMtHandle ;
typedef TYPE_3__ CXzDecMt ;


 void* VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;

void FUNC_5(CXzDecMtHandle VAR_2)
{
  CXzDecMt *VAR_3 = (CXzDecMt *)VAR_2;

  FUNC_3(VAR_3);



  if (VAR_3->mtc_WasConstructed)
  {
    FUNC_1(&VAR_3->mtc);
    VAR_3->mtc_WasConstructed = VAR_0;
  }
  {
    unsigned VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    {
      CXzDecMtThread *VAR_5 = &VAR_3->coders[VAR_4];
      if (VAR_5->dec_created)
      {

        FUNC_4(&VAR_5->dec);
        VAR_5->dec_created = VAR_0;
      }
    }
  }
  FUNC_2(VAR_3);



  FUNC_0(VAR_3->alignOffsetAlloc.baseAlloc, VAR_2);
}
