
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int count; } ;
typedef TYPE_2__ sm_lookup_data ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_11__ {int mode; char const* path; int id; TYPE_1__ member_0; } ;
typedef TYPE_3__ git_index_entry ;
typedef int git_index ;
typedef int git_config ;
typedef int data ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char*) ;
 int FUNC_5 (int *,char*,char const*) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int *,char*) ;
 TYPE_3__* FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int **,int ) ;
 int FUNC_13 (int ,int ,TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int ,int) ;
 int FUNC_15 (char*,char*) ;
 int VAR_2 ;

void FUNC_16(void)
{
 const char *VAR_3 = "sm_actually_changed";
 git_index *VAR_4;
 sm_lookup_data VAR_5;

 FUNC_2(FUNC_12(&VAR_4, VAR_1));



 FUNC_2(FUNC_15("submod2/sm_unchanged", "submod2/sm_actually_changed"));


 {
  git_config *VAR_6;

  FUNC_2(FUNC_4(&VAR_6, "submod2/.gitmodules"));
  FUNC_2(FUNC_5(VAR_6, "submodule.sm_unchanged.path", VAR_3));
  FUNC_3(VAR_6);

  FUNC_2(FUNC_7(VAR_4, ".gitmodules"));
 }


 {
  git_config *VAR_7;

  FUNC_2(FUNC_4(&VAR_7, "submod2/.git/modules/sm_unchanged/config"));
  FUNC_2(FUNC_5(VAR_7, "core.worktree", "../../../sm_actually_changed"));
  FUNC_3(VAR_7);
 }


 {
  const git_index_entry *VAR_8;
  git_index_entry VAR_9 = { 0 };

  VAR_8 = FUNC_8(VAR_4, "sm_unchanged", 0);
  FUNC_0(VAR_8);
  FUNC_1(VAR_0, VAR_8->mode);

  VAR_9.path = VAR_3;
  VAR_9.mode = VAR_0;
  FUNC_11(&VAR_9.id, &VAR_8->id);

  FUNC_2(FUNC_9(VAR_4, "sm_unchanged", 0));
  FUNC_2(FUNC_6(VAR_4, &VAR_9));
  FUNC_2(FUNC_10(VAR_4));
 }

 FUNC_14(&VAR_5, 0, sizeof(VAR_5));
 FUNC_2(FUNC_13(VAR_1, VAR_2, &VAR_5));
 FUNC_1(8, VAR_5.count);
}
