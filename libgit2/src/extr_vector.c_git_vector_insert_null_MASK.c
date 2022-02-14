
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t length; size_t _alloc_size; int * contents; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (size_t*,size_t,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,size_t) ;

int FUNC_5(git_vector *VAR_0, size_t VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 FUNC_1(VAR_2 > 0 && VAR_1 <= VAR_0->length);

 FUNC_0(&VAR_3, VAR_0->length, VAR_2);

 if (VAR_3 > VAR_0->_alloc_size && FUNC_4(VAR_0, VAR_3) < 0)
  return -1;

 FUNC_2(&VAR_0->contents[VAR_1 + VAR_2], &VAR_0->contents[VAR_1],
  sizeof(void *) * (VAR_0->length - VAR_1));
 FUNC_3(&VAR_0->contents[VAR_1], 0, sizeof(void *) * VAR_2);

 VAR_0->length = VAR_3;
 return 0;
}
