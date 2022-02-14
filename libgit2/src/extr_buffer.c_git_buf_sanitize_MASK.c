
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; scalar_t__ size; scalar_t__ asize; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int) ;
 char* VAR_0 ;

void FUNC_1(git_buf *VAR_1)
{
 if (VAR_1->ptr == ((void*)0)) {
  FUNC_0(VAR_1->size == 0 && VAR_1->asize == 0);
  VAR_1->ptr = VAR_0;
 } else if (VAR_1->asize > VAR_1->size)
  VAR_1->ptr[VAR_1->size] = '\0';
}
