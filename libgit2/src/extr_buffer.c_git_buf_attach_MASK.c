
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* ptr; size_t size; int asize; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (char*) ;

int FUNC_3(git_buf *VAR_0, char *VAR_1, size_t VAR_2)
{
 FUNC_1(VAR_0);

 if (VAR_1) {
  VAR_0->ptr = VAR_1;
  VAR_0->size = FUNC_2(VAR_1);
  if (VAR_2)
   VAR_0->asize = (VAR_2 < VAR_0->size) ? VAR_0->size + 1 : VAR_2;
  else
   VAR_0->asize = VAR_0->size + 1;
 }

 FUNC_0(VAR_0, VAR_2);
 return 0;
}
