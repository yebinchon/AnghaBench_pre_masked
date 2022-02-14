
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; int id; } ;
typedef TYPE_1__ git_index_entry ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char const*) ;
 TYPE_1__* FUNC_4 (int ,char const*,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 const char *VAR_1 = "not-submodule";
 const char *VAR_2 = "68e92c611b80ee1ed8f38314ff9577f0d15b2444";
 const git_index_entry *VAR_3;

 FUNC_2(FUNC_3(VAR_0, VAR_1));

 FUNC_0(VAR_3 = FUNC_4(VAR_0, VAR_1, 0));
 FUNC_1(VAR_2, FUNC_5(&VAR_3->id));
 FUNC_1(VAR_1, VAR_3->path);
}
