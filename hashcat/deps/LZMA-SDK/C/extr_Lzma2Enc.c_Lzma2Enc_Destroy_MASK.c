
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int alloc; int * tempBufLzma; scalar_t__ mtCoder_WasConstructed; int mtCoder; int allocBig; TYPE_1__* coders; } ;
struct TYPE_4__ {int * enc; } ;
typedef TYPE_1__ CLzma2EncInt ;
typedef int * CLzma2EncHandle ;
typedef TYPE_2__ CLzma2Enc ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ) ;
 unsigned int VAR_1 ;
 int FUNC_3 (int *) ;

void FUNC_4(CLzma2EncHandle VAR_2)
{
  CLzma2Enc *VAR_3 = (CLzma2Enc *)VAR_2;
  unsigned VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  {
    CLzma2EncInt *VAR_5 = &VAR_3->coders[VAR_4];
    if (VAR_5->enc)
    {
      FUNC_2(VAR_5->enc, VAR_3->alloc, VAR_3->allocBig);
      VAR_5->enc = ((void*)0);
    }
  }



  if (VAR_3->mtCoder_WasConstructed)
  {
    FUNC_3(&VAR_3->mtCoder);
    VAR_3->mtCoder_WasConstructed = VAR_0;
  }
  FUNC_1(VAR_3);


  FUNC_0(VAR_3->alloc, VAR_3->tempBufLzma);
  VAR_3->tempBufLzma = ((void*)0);

  FUNC_0(VAR_3->alloc, VAR_2);
}
