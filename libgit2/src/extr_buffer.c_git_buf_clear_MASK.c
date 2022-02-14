
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; scalar_t__ asize; scalar_t__ size; } ;
typedef TYPE_1__ git_buf ;


 char* VAR_0 ;

void FUNC_0(git_buf *VAR_1)
{
 VAR_1->size = 0;

 if (!VAR_1->ptr) {
  VAR_1->ptr = VAR_0;
  VAR_1->asize = 0;
 }

 if (VAR_1->asize > 0)
  VAR_1->ptr[0] = '\0';
}
