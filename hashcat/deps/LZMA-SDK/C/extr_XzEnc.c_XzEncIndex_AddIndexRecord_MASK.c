
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_4__ {unsigned int allocated; unsigned int size; unsigned int blocks; int numBlocks; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CXzEncIndex ;
typedef int Byte ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,size_t,int ) ;
 unsigned int FUNC_2 (int *,int ) ;
 int FUNC_3 (unsigned int,int *,unsigned int) ;

__attribute__((used)) static SRes FUNC_4(CXzEncIndex *VAR_2, UInt64 VAR_3, UInt64 VAR_4, ISzAllocPtr VAR_5)
{
  Byte VAR_6[32];
  unsigned VAR_7 = FUNC_2(VAR_6, VAR_4);
  VAR_7 += FUNC_2(VAR_6 + VAR_7, VAR_3);

  if (VAR_7 > VAR_2->allocated - VAR_2->size)
  {
    size_t VAR_8 = VAR_2->allocated * 2 + 16 * 2;
    if (VAR_8 < VAR_2->size + VAR_7)
      return VAR_0;
    FUNC_0(FUNC_1(VAR_2, VAR_8, VAR_5));
  }
  FUNC_3(VAR_2->blocks + VAR_2->size, VAR_6, VAR_7);
  VAR_2->size += VAR_7;
  VAR_2->numBlocks++;
  return VAR_1;
}
