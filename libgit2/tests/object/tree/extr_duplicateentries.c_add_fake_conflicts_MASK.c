
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* path; int id; void* mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_5(git_index *VAR_1)
{
 git_index_entry VAR_2, VAR_3, VAR_4;

 FUNC_4(&VAR_2, 0x0, sizeof(git_index_entry));
 FUNC_4(&VAR_3, 0x0, sizeof(git_index_entry));
 FUNC_4(&VAR_4, 0x0, sizeof(git_index_entry));

 VAR_2.path = "duplicate";
 VAR_2.mode = VAR_0;
 FUNC_0(&VAR_2, 1);
 FUNC_3(&VAR_2.id, "a8233120f6ad708f843d861ce2b7228ec4e3dec6");

 VAR_3.path = "duplicate";
 VAR_3.mode = VAR_0;
 FUNC_0(&VAR_3, 2);
 FUNC_3(&VAR_3.id, "45b983be36b73c0788dc9cbcb76cbb80fc7bb057");

 VAR_4.path = "duplicate";
 VAR_4.mode = VAR_0;
 FUNC_0(&VAR_4, 3);
 FUNC_3(&VAR_4.id, "a71586c1dfe8a71c6cbf6c129f404c5642ff31bd");

 FUNC_1(FUNC_2(VAR_1, &VAR_2, &VAR_3, &VAR_4));
}
