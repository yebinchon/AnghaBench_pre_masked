
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int member_0; } ;
struct TYPE_12__ {char* path; void* mode; int id; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;
struct TYPE_13__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,TYPE_2__*,char*,int) ;
 int FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int **,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(void)
{
 git_buf VAR_3 = VAR_0;
 git_index *VAR_4;
 const git_index_entry *VAR_5;
 git_index_entry VAR_6 = {0};

 FUNC_2(FUNC_11(&VAR_4, VAR_2));

 FUNC_2(FUNC_4(&VAR_3, FUNC_12(VAR_2), "A"));
 FUNC_1(VAR_3.ptr, "A");


 FUNC_2(FUNC_6(VAR_4, "A"));

 FUNC_0((VAR_5 = FUNC_9(VAR_4, "A", 0)));


 VAR_6.path = "B";
 VAR_6.mode = VAR_1;
 FUNC_10(&VAR_6.id, &VAR_5->id);
 FUNC_2(FUNC_5(VAR_4, &VAR_6));


 VAR_6.path = "C";
 VAR_6.mode = VAR_1;
 FUNC_2(FUNC_7(VAR_4, &VAR_6, "hello!\n", 7));

 FUNC_8(VAR_4);
 FUNC_3(&VAR_3);
}
