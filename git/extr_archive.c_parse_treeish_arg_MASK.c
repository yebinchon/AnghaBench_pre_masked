
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {int oid; } ;
struct tree {TYPE_2__ object; } ;
struct object_id {int dummy; } ;
struct TYPE_3__ {struct object_id oid; } ;
struct commit {int date; TYPE_1__ object; } ;
struct archiver_args {int time; struct commit const* commit; struct object_id const* commit_oid; struct tree* tree; int repo; } ;


 int FUNC_0 (unsigned short) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (char const*,int,struct object_id*,char**) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,struct object_id*) ;
 int FUNC_6 (int ,int *,char const*,struct object_id*,unsigned short*) ;
 struct commit* FUNC_7 (int ,struct object_id*,int) ;
 int FUNC_8 (struct object_id*) ;
 struct tree* FUNC_9 (struct object_id*) ;
 int VAR_0 ;
 char* FUNC_10 (char const*,char) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(const char **VAR_1,
  struct archiver_args *VAR_2, const char *VAR_3,
  int VAR_4)
{
 const char *VAR_5 = VAR_1[0];
 const struct object_id *VAR_6;
 time_t VAR_7;
 struct tree *VAR_8;
 const struct commit *VAR_9;
 struct object_id VAR_10;


 if (VAR_4 && !VAR_0) {
  char *VAR_11 = ((void*)0);
  const char *VAR_12 = FUNC_10(VAR_5, ':');
  int VAR_13 = VAR_12 - VAR_5;

  if (!FUNC_3(VAR_5, VAR_13, &VAR_10, &VAR_11))
   FUNC_2(FUNC_1("no such ref: %.*s"), VAR_13, VAR_5);
  FUNC_4(VAR_11);
 }

 if (FUNC_5(VAR_5, &VAR_10))
  FUNC_2(FUNC_1("not a valid object name: %s"), VAR_5);

 VAR_9 = FUNC_7(VAR_2->repo, &VAR_10, 1);
 if (VAR_9) {
  VAR_6 = &VAR_9->object.oid;
  VAR_7 = VAR_9->date;
 } else {
  VAR_6 = ((void*)0);
  VAR_7 = FUNC_11(((void*)0));
 }

 VAR_8 = FUNC_9(&VAR_10);
 if (VAR_8 == ((void*)0))
  FUNC_2(FUNC_1("not a tree object: %s"), FUNC_8(&VAR_10));

 if (VAR_3) {
  struct object_id VAR_14;
  unsigned short VAR_15;
  int VAR_16;

  VAR_16 = FUNC_6(VAR_2->repo,
         &VAR_8->object.oid,
         VAR_3, &VAR_14,
         &VAR_15);
  if (VAR_16 || !FUNC_0(VAR_15))
   FUNC_2(FUNC_1("current working directory is untracked"));

  VAR_8 = FUNC_9(&VAR_14);
 }
 VAR_2->tree = VAR_8;
 VAR_2->commit_oid = VAR_6;
 VAR_2->commit = VAR_9;
 VAR_2->time = VAR_7;
}
