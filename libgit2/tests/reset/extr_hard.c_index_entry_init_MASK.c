
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_5__ {char* path; int mode; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_5(git_index *VAR_0, int VAR_1, git_oid *VAR_2)
{
 git_index_entry VAR_3;

 FUNC_4(&VAR_3, 0x0, sizeof(git_index_entry));

 VAR_3.path = "conflicting_file";
 FUNC_0(&VAR_3, VAR_1);
 VAR_3.mode = 0100644;
 FUNC_3(&VAR_3.id, VAR_2);

 FUNC_1(FUNC_2(VAR_0, &VAR_3));
}
