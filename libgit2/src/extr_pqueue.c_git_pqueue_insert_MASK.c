
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; scalar_t__ length; scalar_t__ _alloc_size; scalar_t__ (* _cmp ) (void*,int ) ;} ;
typedef TYPE_1__ git_pqueue ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,void*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 (void*,int ) ;

int FUNC_5(git_pqueue *VAR_1, void *VAR_2)
{
 int VAR_3 = 0;


 if ((VAR_1->flags & VAR_0) != 0 &&
  VAR_1->length >= VAR_1->_alloc_size)
 {


  if (!VAR_1->_cmp || VAR_1->_cmp(VAR_2, FUNC_1(VAR_1, 0)) <= 0)
   return 0;

  (void)FUNC_0(VAR_1);
 }

 if (!(VAR_3 = FUNC_2(VAR_1, VAR_2)) && VAR_1->_cmp)
  FUNC_3(VAR_1, VAR_1->length - 1);

 return VAR_3;
}
