
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_oid ;
struct TYPE_12__ {char* path; int id; int mode; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_13__ {TYPE_4__* tree; } ;
typedef TYPE_2__ git_index ;
struct TYPE_14__ {int entry_count; int children_count; int oid; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__**) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 TYPE_4__* FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,int *) ;
 int FUNC_12 (TYPE_1__*,int,int) ;

void FUNC_13(void)
{
 git_index *VAR_2;
 git_index_entry VAR_3;
 git_tree *VAR_4;
 git_oid VAR_5;

 FUNC_2(FUNC_6(&VAR_2));
 FUNC_0(VAR_2->tree == ((void*)0));
 FUNC_2(FUNC_9(&VAR_5, "45dd856fdd4d89b884c340ba0e047752d9b085d6"));
 FUNC_2(FUNC_11(&VAR_4, VAR_1, &VAR_5));
 FUNC_2(FUNC_7(VAR_2, VAR_4));
 FUNC_10(VAR_4);

 FUNC_0(VAR_2->tree);
 FUNC_0(FUNC_8(&VAR_5, &VAR_2->tree->oid));
 FUNC_1(0, VAR_2->tree->children_count);
 FUNC_1(FUNC_4(VAR_2), VAR_2->tree->entry_count);

 FUNC_12(&VAR_3, 0x0, sizeof(git_index_entry));
 VAR_3.path = "new.txt";
 VAR_3.mode = VAR_0;
 FUNC_9(&VAR_3.id, "d4bcc68acd4410bf836a39f20afb2c2ece09584e");

 FUNC_2(FUNC_3(VAR_2, &VAR_3));
 FUNC_1(-1, VAR_2->tree->entry_count);

 FUNC_5(VAR_2);
}
