
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
 int FUNC_2 (int ,char*,char*) ;
 TYPE_1__* FUNC_3 (int ,char*,int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
 const git_index_entry *VAR_3;


 FUNC_5("");
 FUNC_2(VAR_1, "merge.default", "custom");

 FUNC_4();

 FUNC_0((VAR_3 = FUNC_3(VAR_2, "automergeable.txt", 0)));
 FUNC_1(&VAR_0, &VAR_3->id);
}
