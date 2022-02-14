
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* ptr; size_t size; scalar_t__ asize; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

void FUNC_3(git_buf *VAR_0, const char *VAR_1, size_t VAR_2)
{
 if (FUNC_2(VAR_0))
  FUNC_0(VAR_0);

 if (!VAR_2) {
  FUNC_1(VAR_0, 0);
 } else {
  VAR_0->ptr = (char *)VAR_1;
  VAR_0->asize = 0;
  VAR_0->size = VAR_2;
 }
}
