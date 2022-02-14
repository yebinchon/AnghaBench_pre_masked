
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t allocated; int * blocks; int size; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CXzEncIndex ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static SRes FUNC_3(CXzEncIndex *VAR_2, size_t VAR_3, ISzAllocPtr VAR_4)
{
  Byte *VAR_5 = (Byte *)FUNC_0(VAR_4, VAR_3);
  if (!VAR_5)
    return VAR_0;
  if (VAR_2->size != 0)
    FUNC_2(VAR_5, VAR_2->blocks, VAR_2->size);
  if (VAR_2->blocks)
    FUNC_1(VAR_4, VAR_2->blocks);
  VAR_2->blocks = VAR_5;
  VAR_2->allocated = VAR_3;
  return VAR_1;
}
