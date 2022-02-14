
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt16 ;
struct TYPE_3__ {size_t* FileNameOffsets; int * FileNames; } ;
typedef TYPE_1__ CSzArEx ;
typedef int Byte ;


 int FUNC_0 (int const*) ;

size_t FUNC_1(const CSzArEx *VAR_0, size_t VAR_1, UInt16 *VAR_2)
{
  size_t VAR_3 = VAR_0->FileNameOffsets[VAR_1];
  size_t VAR_4 = VAR_0->FileNameOffsets[VAR_1 + 1] - VAR_3;
  if (VAR_2 != 0)
  {
    size_t VAR_5;
    const Byte *VAR_6 = VAR_0->FileNames + VAR_3 * 2;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
      VAR_2[VAR_5] = FUNC_0(VAR_6 + VAR_5 * 2);
  }
  return VAR_4;
}
