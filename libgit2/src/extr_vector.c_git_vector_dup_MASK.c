
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ git_vector_cmp ;
struct TYPE_5__ {scalar_t__ _cmp; int * contents; scalar_t__ length; scalar_t__ _alloc_size; int flags; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (int *) ;
 int FUNC_1 (size_t*,scalar_t__,int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,int *,size_t) ;

int FUNC_6(git_vector *VAR_0, const git_vector *VAR_1, git_vector_cmp VAR_2)
{
 FUNC_2(VAR_0 && VAR_1);

 VAR_0->_alloc_size = 0;
 VAR_0->contents = ((void*)0);
 VAR_0->_cmp = VAR_2 ? VAR_2 : VAR_1->_cmp;
 VAR_0->length = VAR_1->length;
 VAR_0->flags = VAR_1->flags;
 if (VAR_2 != VAR_1->_cmp)
  FUNC_4(VAR_0, 0);

 if (VAR_1->length) {
  size_t VAR_3;
  FUNC_1(&VAR_3, VAR_1->length, sizeof(void *));
  VAR_0->contents = FUNC_3(VAR_3);
  FUNC_0(VAR_0->contents);
  VAR_0->_alloc_size = VAR_1->length;
  FUNC_5(VAR_0->contents, VAR_1->contents, VAR_3);
 }

 return 0;
}
