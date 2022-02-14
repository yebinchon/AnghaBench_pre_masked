
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parsed_objects; int objects; int * index; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_3(void)
{
 VAR_3 = &VAR_2;

 VAR_2.index = &VAR_1;
 VAR_2.objects = FUNC_1();
 VAR_2.parsed_objects = FUNC_0();

 FUNC_2(&VAR_2, VAR_0);
}
