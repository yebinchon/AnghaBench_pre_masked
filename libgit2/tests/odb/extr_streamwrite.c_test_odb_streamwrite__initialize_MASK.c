
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int declared_size; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__**,int ,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_5(void)
{
 VAR_2 = FUNC_2("testrepo.git");
 FUNC_1(FUNC_4(&VAR_1, VAR_2));

 FUNC_1(FUNC_3(&VAR_3, VAR_1, 14, VAR_0));
 FUNC_0(14, VAR_3->declared_size);
}
