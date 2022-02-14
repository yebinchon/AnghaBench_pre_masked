
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ptr; int size; } ;
typedef TYPE_1__ git_buf ;


 scalar_t__ FUNC_0 (size_t*,int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,size_t,int) ;

int FUNC_2(git_buf *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 if (FUNC_0(&VAR_3, VAR_1->size, VAR_2)) {
  VAR_1->ptr = VAR_0;
  return -1;
 }

 return FUNC_1(VAR_1, VAR_3, 1);
}
