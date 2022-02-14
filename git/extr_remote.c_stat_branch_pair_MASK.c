
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int flags; int oid; } ;
struct commit {TYPE_1__ object; } ;
struct argv_array {int argv; int argc; } ;
typedef enum ahead_behind_flags { ____Placeholder_ahead_behind_flags } ahead_behind_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct argv_array VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct argv_array*) ;
 int FUNC_3 (struct argv_array*,char*) ;
 int FUNC_4 (struct argv_array*,char*,int ,int ) ;
 int FUNC_5 (struct commit*,int ) ;
 int FUNC_6 (int ) ;
 struct commit* FUNC_7 (struct rev_info*) ;
 struct commit* FUNC_8 (int ,struct object_id*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct rev_info*) ;
 scalar_t__ FUNC_11 (char const*,struct object_id*) ;
 int FUNC_12 (int ,struct rev_info*,int *) ;
 int FUNC_13 (int ,int ,struct rev_info*,int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_14(const char *VAR_6, const char *VAR_7,
        int *VAR_8, int *VAR_9,
        enum ahead_behind_flags VAR_10)
{
 struct object_id VAR_11;
 struct commit *VAR_12, *VAR_13;
 struct rev_info VAR_14;
 struct argv_array VAR_15 = VAR_3;


 if (FUNC_11(VAR_7, &VAR_11))
  return -1;
 VAR_13 = FUNC_8(VAR_5, &VAR_11);
 if (!VAR_13)
  return -1;

 if (FUNC_11(VAR_6, &VAR_11))
  return -1;
 VAR_12 = FUNC_8(VAR_5, &VAR_11);
 if (!VAR_12)
  return -1;

 *VAR_9 = *VAR_8 = 0;


 if (VAR_13 == VAR_12)
  return 0;
 if (VAR_10 == VAR_1)
  return 1;
 if (VAR_10 != VAR_0)
  FUNC_0("stat_branch_pair: invalid abf '%d'", VAR_10);


 FUNC_3(&VAR_15, "");
 FUNC_3(&VAR_15, "--left-right");
 FUNC_4(&VAR_15, "%s...%s",
    FUNC_9(&VAR_12->object.oid),
    FUNC_9(&VAR_13->object.oid));
 FUNC_3(&VAR_15, "--");

 FUNC_12(VAR_5, &VAR_14, ((void*)0));
 FUNC_13(VAR_15.argc, VAR_15.argv, &VAR_14, ((void*)0));
 if (FUNC_10(&VAR_14))
  FUNC_6(FUNC_1("revision walk setup failed"));


 while (1) {
  struct commit *VAR_16 = FUNC_7(&VAR_14);
  if (!VAR_16)
   break;
  if (VAR_16->object.flags & VAR_4)
   (*VAR_8)++;
  else
   (*VAR_9)++;
 }


 FUNC_5(VAR_12, VAR_2);
 FUNC_5(VAR_13, VAR_2);

 FUNC_2(&VAR_15);
 return 1;
}
