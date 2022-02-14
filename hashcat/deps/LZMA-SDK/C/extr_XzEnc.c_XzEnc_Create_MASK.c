
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_5__ {void* allocBig; void* alloc; scalar_t__ expectedDataSize; int xzProps; } ;
typedef scalar_t__ Int64 ;
typedef void* ISzAllocPtr ;
typedef TYPE_1__* CXzEncHandle ;
typedef TYPE_1__ CXzEnc ;


 scalar_t__ FUNC_0 (void*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

CXzEncHandle FUNC_4(ISzAllocPtr VAR_0, ISzAllocPtr VAR_1)
{
  CXzEnc *VAR_2 = (CXzEnc *)FUNC_0(VAR_0, sizeof(CXzEnc));
  if (!VAR_2)
    return ((void*)0);
  FUNC_1(VAR_2);
  FUNC_2(&VAR_2->xzProps);
  FUNC_3(&VAR_2->xzProps);
  VAR_2->expectedDataSize = (UInt64)(Int64)-1;
  VAR_2->alloc = VAR_0;
  VAR_2->allocBig = VAR_1;
  return VAR_2;
}
