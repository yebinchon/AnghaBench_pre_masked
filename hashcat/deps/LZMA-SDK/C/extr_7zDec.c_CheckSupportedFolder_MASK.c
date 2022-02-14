
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_9__ {int NumStreams; int MethodID; } ;
struct TYPE_8__ {int NumCoders; int NumPackStreams; scalar_t__* PackStreams; int NumBonds; TYPE_1__* Bonds; TYPE_3__* Coders; } ;
struct TYPE_7__ {int InIndex; scalar_t__ OutIndex; } ;
typedef int SRes ;
typedef TYPE_2__ CSzFolder ;
typedef TYPE_3__ CSzCoderInfo ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
__attribute__((used)) static SRes FUNC_2(const CSzFolder *VAR_2)
{
  if (VAR_2->NumCoders < 1 || VAR_2->NumCoders > 4)
    return VAR_0;
  if (!FUNC_1(&VAR_2->Coders[0]))
    return VAR_0;
  if (VAR_2->NumCoders == 1)
  {
    if (VAR_2->NumPackStreams != 1 || VAR_2->PackStreams[0] != 0 || VAR_2->NumBonds != 0)
      return VAR_0;
    return VAR_1;
  }




  if (VAR_2->NumCoders == 2)
  {
    const CSzCoderInfo *VAR_3 = &VAR_2->Coders[1];
    if (

        VAR_3->NumStreams != 1
        || VAR_2->NumPackStreams != 1
        || VAR_2->PackStreams[0] != 0
        || VAR_2->NumBonds != 1
        || VAR_2->Bonds[0].InIndex != 1
        || VAR_2->Bonds[0].OutIndex != 0)
      return VAR_0;
    switch ((UInt32)VAR_3->MethodID)
    {
      case 131:
      case 132:
      case 129:
      case 130:
      case 128:
      case 134:
      case 133:
        break;
      default:
        return VAR_0;
    }
    return VAR_1;
  }




  if (VAR_2->NumCoders == 4)
  {
    if (!FUNC_1(&VAR_2->Coders[1])
        || !FUNC_1(&VAR_2->Coders[2])
        || !FUNC_0(&VAR_2->Coders[3]))
      return VAR_0;
    if (VAR_2->NumPackStreams != 4
        || VAR_2->PackStreams[0] != 2
        || VAR_2->PackStreams[1] != 6
        || VAR_2->PackStreams[2] != 1
        || VAR_2->PackStreams[3] != 0
        || VAR_2->NumBonds != 3
        || VAR_2->Bonds[0].InIndex != 5 || VAR_2->Bonds[0].OutIndex != 0
        || VAR_2->Bonds[1].InIndex != 4 || VAR_2->Bonds[1].OutIndex != 1
        || VAR_2->Bonds[2].InIndex != 3 || VAR_2->Bonds[2].OutIndex != 2)
      return VAR_0;
    return VAR_1;
  }

  return VAR_0;
}
