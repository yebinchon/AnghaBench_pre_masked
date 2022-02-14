
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; size_t asize; char* ptr; } ;
typedef TYPE_1__ git_buf ;



void FUNC_0(git_buf *VAR_0, size_t VAR_1)
{
 if (VAR_1 >= VAR_0->size)
  return;

 VAR_0->size = VAR_1;
 if (VAR_0->size < VAR_0->asize)
  VAR_0->ptr[VAR_0->size] = '\0';
}
