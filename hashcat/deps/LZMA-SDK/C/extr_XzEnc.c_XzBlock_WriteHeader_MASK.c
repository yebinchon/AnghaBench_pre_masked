
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* filters; scalar_t__ unpackSize; scalar_t__ packSize; scalar_t__ flags; } ;
struct TYPE_7__ {scalar_t__ propsSize; int props; scalar_t__ id; } ;
typedef int SRes ;
typedef int ISeqOutStream ;
typedef TYPE_1__ CXzFilter ;
typedef TYPE_2__ CXzBlock ;
typedef scalar_t__ Byte ;


 int FUNC_0 (scalar_t__*,unsigned int) ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (int *,scalar_t__*,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_3 (TYPE_2__ const*) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*) ;
 scalar_t__ FUNC_6 (scalar_t__*,scalar_t__) ;
 int FUNC_7 (scalar_t__*,int ,scalar_t__) ;

__attribute__((used)) static SRes FUNC_8(const CXzBlock *VAR_1, ISeqOutStream *VAR_2)
{
  Byte VAR_3[VAR_0];

  unsigned VAR_4 = 1;
  unsigned VAR_5, VAR_6;
  VAR_3[VAR_4++] = VAR_1->flags;

  if (FUNC_4(VAR_1)) VAR_4 += FUNC_6(VAR_3 + VAR_4, VAR_1->packSize);
  if (FUNC_5(VAR_1)) VAR_4 += FUNC_6(VAR_3 + VAR_4, VAR_1->unpackSize);
  VAR_5 = FUNC_3(VAR_1);

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  {
    const CXzFilter *VAR_7 = &VAR_1->filters[VAR_6];
    VAR_4 += FUNC_6(VAR_3 + VAR_4, VAR_7->id);
    VAR_4 += FUNC_6(VAR_3 + VAR_4, VAR_7->propsSize);
    FUNC_7(VAR_3 + VAR_4, VAR_7->props, VAR_7->propsSize);
    VAR_4 += VAR_7->propsSize;
  }

  while ((VAR_4 & 3) != 0)
    VAR_3[VAR_4++] = 0;

  VAR_3[0] = (Byte)(VAR_4 >> 2);
  FUNC_1(VAR_3 + VAR_4, FUNC_0(VAR_3, VAR_4));
  return FUNC_2(VAR_2, VAR_3, VAR_4 + 4);
}
