
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t num; size_t numAllocated; int * streams; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CXzs ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(CXzs *VAR_0, ISzAllocPtr VAR_1)
{
  size_t VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->num; VAR_2++)
    FUNC_1(&VAR_0->streams[VAR_2], VAR_1);
  FUNC_0(VAR_1, VAR_0->streams);
  VAR_0->num = VAR_0->numAllocated = 0;
  VAR_0->streams = 0;
}
