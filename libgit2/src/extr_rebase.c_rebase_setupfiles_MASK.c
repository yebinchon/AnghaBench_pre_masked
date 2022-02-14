
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* orig_head_name; scalar_t__ quiet; int orig_head_id; int repo; scalar_t__ head_detached; int state_path; int onto_id; } ;
typedef TYPE_1__ git_rebase ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ,char*,...) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(git_rebase *VAR_8)
{
 char VAR_9[VAR_1], VAR_10[VAR_1];
 const char *VAR_11;

 FUNC_1(VAR_9, &VAR_8->onto_id);
 FUNC_1(VAR_10, &VAR_8->orig_head_id);

 if (FUNC_3(VAR_8->state_path, VAR_7) < 0) {
  FUNC_0(VAR_0, "failed to create rebase directory '%s'", VAR_8->state_path);
  return -1;
 }

 VAR_11 = VAR_8->head_detached ? VAR_4 :
  VAR_8->orig_head_name;

 if (FUNC_2(VAR_8->repo, &VAR_8->orig_head_id) < 0 ||
  FUNC_4(VAR_8, VAR_2, 0, "%s\n", VAR_11) < 0 ||
  FUNC_4(VAR_8, VAR_3, 0, "%.*s\n", VAR_1, VAR_9) < 0 ||
  FUNC_4(VAR_8, VAR_5, 0, "%.*s\n", VAR_1, VAR_10) < 0 ||
  FUNC_4(VAR_8, VAR_6, 0, VAR_8->quiet ? "t\n" : "\n") < 0)
  return -1;

 return FUNC_5(VAR_8);
}
