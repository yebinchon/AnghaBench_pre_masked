
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {char* path; int id; int mode; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int **,int ) ;
 int VAR_1 ;

void FUNC_6(void)
{
 git_index *VAR_2;
 git_index_entry VAR_3 = {0};

 FUNC_1(FUNC_5(&VAR_2, VAR_1));

 VAR_3.path = "foo/.git";
 VAR_3.mode = VAR_0;
 FUNC_4(&VAR_3.id, "da623abd956bb2fd8052c708c7ed43f05d192d37");

 FUNC_0(FUNC_2(VAR_2, &VAR_3));

 FUNC_3(VAR_2);
}
