
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void** contents; scalar_t__ _cmp; } ;
typedef TYPE_1__ git_pqueue ;


 void* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void *FUNC_5(git_pqueue *VAR_0)
{
 void *VAR_1;

 if (!VAR_0->_cmp) {
  VAR_1 = FUNC_2(VAR_0);
 } else {
  VAR_1 = FUNC_0(VAR_0, 0);
 }

 if (FUNC_1(VAR_0) > 1 && VAR_0->_cmp) {

  VAR_0->contents[0] = FUNC_2(VAR_0);
  FUNC_3(VAR_0);
  FUNC_4(VAR_0, 0);
 } else {

  FUNC_3(VAR_0);
 }

 return VAR_1;
}
