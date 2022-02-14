
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int UInt64 ;
struct TYPE_4__ {unsigned int allocated; unsigned int size; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CXzEncIndex ;
typedef int Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,size_t,int ) ;
 unsigned int FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static SRes FUNC_2(CXzEncIndex *VAR_2, UInt64 VAR_3, UInt64 VAR_4, UInt64 VAR_5, ISzAllocPtr VAR_6)
{
  UInt64 VAR_7;
  {
    Byte VAR_8[32];
    unsigned VAR_9 = FUNC_1(VAR_8, VAR_5);
    VAR_9 += FUNC_1(VAR_8 + VAR_9, VAR_4);
    VAR_7 = VAR_3 * VAR_9;
  }

  if (VAR_7 <= VAR_2->allocated - VAR_2->size)
    return VAR_1;
  {
    UInt64 VAR_10 = VAR_2->size + VAR_7;
    size_t VAR_11 = (size_t)VAR_10;
    if (VAR_11 != VAR_10)
      return VAR_0;
    return FUNC_0(VAR_2, VAR_11, VAR_6);
  }
}
