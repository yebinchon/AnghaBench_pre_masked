
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repository {TYPE_2__* objects; scalar_t__ worktree; } ;
struct object_id {int dummy; } ;
struct git_config_source {char* file; char* blob; int member_0; } ;
struct config_options {int member_0; } ;
typedef int config_fn_t ;
struct TYPE_4__ {TYPE_1__* odb; } ;
struct TYPE_3__ {int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,struct git_config_source*,struct config_options const*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct object_id*) ;
 scalar_t__ FUNC_5 (struct repository*,int ,struct object_id*) ;
 char* FUNC_6 (struct repository*,int ) ;
 struct repository* VAR_3 ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(config_fn_t VAR_4, struct repository *VAR_5, void *VAR_6)
{
 if (VAR_5->worktree) {
  struct git_config_source VAR_7 = { 0 };
  const struct config_options VAR_8 = { 0 };
  struct object_id VAR_9;
  char *VAR_10;
  char *VAR_11 = ((void*)0);

  VAR_10 = FUNC_6(VAR_5, VAR_0);
  if (FUNC_2(VAR_10)) {
   VAR_7.file = VAR_10;
  } else if (FUNC_5(VAR_5, VAR_2, &VAR_9) >= 0 ||
      FUNC_5(VAR_5, VAR_1, &VAR_9) >= 0) {
   VAR_7.blob = VAR_11 = FUNC_7(FUNC_4(&VAR_9));
   if (VAR_5 != VAR_3)
    FUNC_0(VAR_5->objects->odb->path);
  } else {
   goto out;
  }

  FUNC_1(VAR_4, VAR_6, &VAR_7, &VAR_8);

out:
  FUNC_3(VAR_11);
  FUNC_3(VAR_10);
 }
}
