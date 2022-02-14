
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* _cmp ) (void*,void*) ;void** contents; } ;
typedef TYPE_1__ git_pqueue ;


 size_t FUNC_0 (size_t) ;
 void* FUNC_1 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_2 (void*,void*) ;

__attribute__((used)) static void FUNC_3(git_pqueue *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_1);
 void *VAR_3 = FUNC_1(VAR_0, VAR_1);

 while (VAR_1 > 0) {
  void *VAR_4 = VAR_0->contents[VAR_2];

  if (VAR_0->_cmp(VAR_4, VAR_3) <= 0)
   break;

  VAR_0->contents[VAR_1] = VAR_4;

  VAR_1 = VAR_2;
  VAR_2 = FUNC_0(VAR_1);
 }

 VAR_0->contents[VAR_1] = VAR_3;
}
