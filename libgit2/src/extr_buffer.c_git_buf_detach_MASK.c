
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; scalar_t__ asize; } ;
typedef TYPE_1__ git_buf ;


 char* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

char *FUNC_1(git_buf *VAR_1)
{
 char *VAR_2 = VAR_1->ptr;

 if (VAR_1->asize == 0 || VAR_1->ptr == VAR_0)
  return ((void*)0);

 FUNC_0(VAR_1, 0);

 return VAR_2;
}
