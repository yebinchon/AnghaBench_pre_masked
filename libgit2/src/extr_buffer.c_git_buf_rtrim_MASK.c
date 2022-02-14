
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; char* ptr; int asize; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (char) ;

void FUNC_1(git_buf *VAR_0)
{
 while (VAR_0->size > 0) {
  if (!FUNC_0(VAR_0->ptr[VAR_0->size - 1]))
   break;

  VAR_0->size--;
 }

 if (VAR_0->asize > VAR_0->size)
  VAR_0->ptr[VAR_0->size] = '\0';
}
