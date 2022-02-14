
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t length; int * contents; } ;
typedef TYPE_1__ git_vector ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,size_t) ;

int FUNC_2(git_vector *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 FUNC_0(VAR_1);

 if (VAR_2 >= VAR_1->length)
  return VAR_0;

 VAR_3 = VAR_1->length - VAR_2 - 1;

 if (VAR_3)
  FUNC_1(&VAR_1->contents[VAR_2], &VAR_1->contents[VAR_2 + 1],
   VAR_3 * sizeof(void *));

 VAR_1->length--;
 return 0;
}
