
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int length; int _alloc_size; int _cmp; } ;
typedef TYPE_1__ git_vector ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int*) ;

void FUNC_5(void)
{
 git_vector VAR_1 = VAR_0;
 git_vector VAR_2 = VAR_0;
 int VAR_3;

 FUNC_0(0, VAR_1.length);

 FUNC_1(FUNC_2(&VAR_2, &VAR_1, VAR_1._cmp));
 FUNC_0(0, VAR_2._alloc_size);
 FUNC_0(0, VAR_2.length);

 FUNC_1(FUNC_4(&VAR_2, &VAR_3));
 FUNC_0(8, VAR_2._alloc_size);
 FUNC_0(1, VAR_2.length);

 FUNC_3(&VAR_2);
}
