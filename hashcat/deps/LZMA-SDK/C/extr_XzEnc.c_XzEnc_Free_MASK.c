
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mtCoder_WasConstructed; int mtCoder; int * lzmaf_Items; int xzIndex; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CXzEnc ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(CXzEnc *VAR_2, ISzAllocPtr VAR_3)
{
  unsigned VAR_4;

  FUNC_2(&VAR_2->xzIndex, VAR_3);

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    FUNC_0(&VAR_2->lzmaf_Items[VAR_4], VAR_3);


  if (VAR_2->mtCoder_WasConstructed)
  {
    FUNC_1(&VAR_2->mtCoder);
    VAR_2->mtCoder_WasConstructed = VAR_0;
  }
  FUNC_3(VAR_2);

}
