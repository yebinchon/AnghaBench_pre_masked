
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int numProbs; int * probs; int * probs_1664; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef int CLzmaProps ;
typedef int CLzmaProb ;
typedef TYPE_1__ CLzmaDec ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static SRes FUNC_3(CLzmaDec *VAR_2, const CLzmaProps *VAR_3, ISzAllocPtr VAR_4)
{
  UInt32 VAR_5 = FUNC_2(VAR_3);
  if (!VAR_2->probs || VAR_5 != VAR_2->numProbs)
  {
    FUNC_1(VAR_2, VAR_4);
    VAR_2->probs = (CLzmaProb *)FUNC_0(VAR_4, VAR_5 * sizeof(CLzmaProb));
    if (!VAR_2->probs)
      return VAR_0;
    VAR_2->probs_1664 = VAR_2->probs + 1664;
    VAR_2->numProbs = VAR_5;
  }
  return VAR_1;
}
