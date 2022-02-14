
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {char* path; int mode; int id; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,char*,int ) ;

void FUNC_10(void)
{
 git_index *VAR_1;
 git_repository *VAR_2;
 git_index_entry VAR_3 = {0};
 git_oid VAR_4;

 FUNC_2(FUNC_5(&VAR_1));

 FUNC_2(FUNC_7(&VAR_3.id, "8312e0a89a9cbab77c732b6bc39b51a783e3a318"));
 VAR_3.path = "foo";
 VAR_3.mode = VAR_0;
 FUNC_2(FUNC_3(VAR_1, &VAR_3));

 FUNC_2(FUNC_9(&VAR_2, "./invalid-id", 0));

 FUNC_1(FUNC_6(&VAR_4, VAR_1, VAR_2));

 FUNC_4(VAR_1);
 FUNC_8(VAR_2);

 FUNC_0("invalid-id");
}
