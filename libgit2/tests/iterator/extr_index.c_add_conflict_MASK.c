
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int member_0; } ;
struct TYPE_8__ {char const* path; int id; void* mode; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(
 git_index *VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 const char *VAR_4)
{
 git_index_entry VAR_5 = {0}, VAR_6 = {0}, VAR_7 = {0};

 VAR_5.path = VAR_2;
 VAR_5.mode = VAR_0;
 FUNC_3(&VAR_5.id, "d44e18fb93b7107b5cd1b95d601591d77869a1b6");
 FUNC_0(&VAR_5, 1);

 VAR_6.path = VAR_3;
 VAR_6.mode = VAR_0;
 FUNC_3(&VAR_6.id, "d44e18fb93b7107b5cd1b95d601591d77869a1b6");
 FUNC_0(&VAR_6, 2);

 VAR_7.path = VAR_4;
 VAR_7.mode = VAR_0;
 FUNC_3(&VAR_7.id, "d44e18fb93b7107b5cd1b95d601591d77869a1b6");
 FUNC_0(&VAR_7, 3);

 FUNC_1(FUNC_2(VAR_1, &VAR_5, &VAR_6, &VAR_7));
}
