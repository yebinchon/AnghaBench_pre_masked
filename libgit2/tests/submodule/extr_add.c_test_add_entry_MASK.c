
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {char const* path; int mode; int id; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;
typedef int git_filemode_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,char const*) ;

__attribute__((used)) static void FUNC_3(
 git_index *VAR_0,
 const char *VAR_1,
 const char *VAR_2,
 git_filemode_t VAR_3)
{
 git_index_entry VAR_4 = {0};

 FUNC_0(FUNC_2(&VAR_4.id, VAR_1));

 VAR_4.path = VAR_2;
 VAR_4.mode = VAR_3;

 FUNC_0(FUNC_1(VAR_0, &VAR_4));
}
