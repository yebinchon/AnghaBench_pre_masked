
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int grealloc; int gmalloc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_3(void)
{
 FUNC_2(&VAR_4);
 FUNC_2(&VAR_1);

 VAR_1.gmalloc = VAR_2;
 VAR_1.grealloc = VAR_3;

 FUNC_0(FUNC_1(VAR_0, &VAR_1));
}
