
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; size_t size; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

void FUNC_2(git_buf *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0->ptr) + 1;
 FUNC_0(VAR_1 >= 0);

 while (VAR_0->size > (size_t)VAR_1) {
  if (VAR_0->ptr[VAR_0->size-1] != '/')
   break;

  VAR_0->ptr[VAR_0->size-1] = '\0';
  VAR_0->size--;
 }
}
