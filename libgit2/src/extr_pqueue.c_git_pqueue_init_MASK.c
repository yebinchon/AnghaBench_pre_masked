
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_vector_cmp ;
struct TYPE_4__ {int flags; size_t _alloc_size; } ;
typedef TYPE_1__ git_pqueue ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t,int ) ;

int FUNC_1(
 git_pqueue *VAR_1,
 uint32_t VAR_2,
 size_t VAR_3,
 git_vector_cmp VAR_4)
{
 int VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_4);

 if (!VAR_5) {

  VAR_1->flags |= VAR_2;


  if ((VAR_2 & VAR_0) && VAR_3 > 0)
   VAR_1->_alloc_size = VAR_3;
 }

 return VAR_5;
}
