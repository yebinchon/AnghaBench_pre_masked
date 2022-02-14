
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {scalar_t__ Size; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef int ILookInStream ;
typedef TYPE_1__ CSzData ;
typedef int CSzArEx ;
typedef int CBuf ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,TYPE_1__*,int *,int *,int*,int ,int ) ;

__attribute__((used)) static SRes FUNC_4(
    CSzArEx *VAR_2,
    CSzData *VAR_3,
    ILookInStream *VAR_4,
    ISzAllocPtr VAR_5,
    ISzAllocPtr VAR_6)
{
  UInt32 VAR_7;
  UInt32 VAR_8 = 0;
  SRes VAR_9;
  CBuf VAR_10[VAR_0];

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
    FUNC_1(VAR_10 + VAR_7);

  VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_4,
      VAR_10, &VAR_8,
      VAR_5, VAR_6);

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
    FUNC_0(VAR_10 + VAR_7, VAR_6);

  FUNC_2(VAR_9);

  if (VAR_3->Size != 0)
    return VAR_1;

  return VAR_9;
}
