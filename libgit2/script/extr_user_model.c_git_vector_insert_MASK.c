
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; void** contents; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 () ;
 void** FUNC_1 (void**,size_t) ;

int FUNC_2(git_vector *VAR_0, void *VAR_1)
{
 if (!VAR_0)
  FUNC_0();

 VAR_0->contents = FUNC_1(VAR_0->contents, ++VAR_0->length);
 if (!VAR_0->contents)
  FUNC_0();
 VAR_0->contents[VAR_0->length] = VAR_1;

 return 0;
}
