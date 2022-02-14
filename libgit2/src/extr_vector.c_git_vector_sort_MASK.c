
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; int _cmp; int contents; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(git_vector *VAR_0)
{
 FUNC_0(VAR_0);

 if (FUNC_2(VAR_0) || !VAR_0->_cmp)
  return;

 if (VAR_0->length > 1)
  FUNC_1(VAR_0->contents, VAR_0->length, VAR_0->_cmp);
 FUNC_3(VAR_0, 1);
}
