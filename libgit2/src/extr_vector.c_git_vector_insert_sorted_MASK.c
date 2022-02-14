
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t length; size_t _alloc_size; void** contents; scalar_t__ _cmp; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (void**,size_t,void*,scalar_t__,size_t*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (void**,void**,size_t) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;

int FUNC_7(
 git_vector *VAR_0, void *VAR_1, int (*VAR_2)(void **VAR_3, void *VAR_4))
{
 int VAR_5;
 size_t VAR_6;

 FUNC_0(VAR_0 && VAR_0->_cmp);

 if (!FUNC_3(VAR_0))
  FUNC_4(VAR_0);

 if (VAR_0->length >= VAR_0->_alloc_size &&
  FUNC_6(VAR_0, FUNC_1(VAR_0)) < 0)
  return -1;





 if (!FUNC_2(VAR_0->contents, VAR_0->length, VAR_1, VAR_0->_cmp, &VAR_6) &&
  VAR_2 && (VAR_5 = VAR_2(&VAR_0->contents[VAR_6], VAR_1)) < 0)
  return VAR_5;


 if (VAR_6 < VAR_0->length)
  FUNC_5(VAR_0->contents + VAR_6 + 1, VAR_0->contents + VAR_6,
          (VAR_0->length - VAR_6) * sizeof(void *));

 VAR_0->contents[VAR_6] = VAR_1;
 VAR_0->length++;

 return 0;
}
