
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int ,char*,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(void)
{
 const git_index_entry *VAR_2;

 FUNC_6();


 FUNC_4("notfound");

 FUNC_3();

 FUNC_0((VAR_2 = FUNC_2(VAR_1, "automergeable.txt", 0)));
 FUNC_1(&VAR_0, &VAR_2->id);

 FUNC_5();
}
