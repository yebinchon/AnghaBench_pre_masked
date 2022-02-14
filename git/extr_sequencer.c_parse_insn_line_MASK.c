
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct todo_item {int command; int arg_offset; int arg_len; int * commit; int flags; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 char const VAR_8 ;
 int FUNC_2 (int ,int,...) ;
 int FUNC_3 (char const*,struct object_id*) ;
 scalar_t__ FUNC_4 (int,char const**) ;
 int * FUNC_5 (struct repository*,struct object_id*) ;
 scalar_t__ FUNC_6 (char const*,char*,char const**) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(struct repository *VAR_9, struct todo_item *VAR_10,
      const char *VAR_11, const char *VAR_12, char *VAR_13)
{
 struct object_id VAR_14;
 char *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_10->flags = 0;


 VAR_12 += FUNC_8(VAR_12, " \t");

 if (VAR_12 == VAR_13 || *VAR_12 == '\r' || *VAR_12 == VAR_8) {
  VAR_10->command = VAR_1;
  VAR_10->commit = ((void*)0);
  VAR_10->arg_offset = VAR_12 - VAR_11;
  VAR_10->arg_len = VAR_13 - VAR_12;
  return 0;
 }

 for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++)
  if (FUNC_4(VAR_16, &VAR_12)) {
   VAR_10->command = VAR_16;
   break;
  }
 if (VAR_16 >= VAR_1)
  return -1;


 VAR_19 = FUNC_8(VAR_12, " \t");
 VAR_12 += VAR_19;

 if (VAR_10->command == VAR_6 || VAR_10->command == VAR_0) {
  if (VAR_12 != VAR_13)
   return FUNC_2(FUNC_0("%s does not accept arguments: '%s'"),
         FUNC_1(VAR_10->command), VAR_12);
  VAR_10->commit = ((void*)0);
  VAR_10->arg_offset = VAR_12 - VAR_11;
  VAR_10->arg_len = VAR_13 - VAR_12;
  return 0;
 }

 if (!VAR_19)
  return FUNC_2(FUNC_0("missing arguments for %s"),
        FUNC_1(VAR_10->command));

 if (VAR_10->command == VAR_3 || VAR_10->command == VAR_4 ||
     VAR_10->command == VAR_7) {
  VAR_10->commit = ((void*)0);
  VAR_10->arg_offset = VAR_12 - VAR_11;
  VAR_10->arg_len = (int)(VAR_13 - VAR_12);
  return 0;
 }

 if (VAR_10->command == VAR_5) {
  if (FUNC_6(VAR_12, "-C", &VAR_12))
   VAR_12 += FUNC_8(VAR_12, " \t");
  else if (FUNC_6(VAR_12, "-c", &VAR_12)) {
   VAR_12 += FUNC_8(VAR_12, " \t");
   VAR_10->flags |= VAR_2;
  } else {
   VAR_10->flags |= VAR_2;
   VAR_10->commit = ((void*)0);
   VAR_10->arg_offset = VAR_12 - VAR_11;
   VAR_10->arg_len = (int)(VAR_13 - VAR_12);
   return 0;
  }
 }

 VAR_15 = (char *) VAR_12 + FUNC_7(VAR_12, " \t\n");
 VAR_17 = *VAR_15;
 *VAR_15 = '\0';
 VAR_18 = FUNC_3(VAR_12, &VAR_14);
 *VAR_15 = VAR_17;

 VAR_12 = VAR_15 + FUNC_8(VAR_15, " \t");
 VAR_10->arg_offset = VAR_12 - VAR_11;
 VAR_10->arg_len = (int)(VAR_13 - VAR_12);

 if (VAR_18 < 0)
  return FUNC_2(FUNC_0("could not parse '%.*s'"),
        (int)(VAR_15 - VAR_12), VAR_12);

 VAR_10->commit = FUNC_5(VAR_9, &VAR_14);
 return !VAR_10->commit;
}
