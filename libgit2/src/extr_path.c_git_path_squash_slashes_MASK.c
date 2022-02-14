
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; char* ptr; } ;
typedef TYPE_1__ git_buf ;



void FUNC_0(git_buf *VAR_0)
{
 char *VAR_1, *VAR_2;

 if (VAR_0->size == 0)
  return;

 for (VAR_1 = VAR_0->ptr, VAR_2 = VAR_0->ptr; *VAR_2; VAR_1++, VAR_2++) {
  *VAR_1 = *VAR_2;

  while (*VAR_2 == '/' && *(VAR_2+1) == '/') {
   VAR_0->size--;
   VAR_2++;
  }
 }

 *VAR_1 = '\0';
}
