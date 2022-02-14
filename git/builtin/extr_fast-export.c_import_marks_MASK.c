
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct stat {int dummy; } ;
struct object_id {int dummy; } ;
struct object {int flags; } ;
struct commit {struct object object; } ;
typedef int line ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 scalar_t__ FUNC_4 (char*,struct object_id*) ;
 scalar_t__ VAR_2 ;
 struct commit* FUNC_5 (int ,struct object_id*) ;
 int FUNC_6 (struct object*,scalar_t__) ;
 int FUNC_7 (int ,struct object_id*,int *) ;
 char* FUNC_8 (struct object_id*) ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*,char**,int) ;
 int VAR_3 ;
 int * FUNC_12 (char*,char*) ;

__attribute__((used)) static void FUNC_13(char *VAR_4, int VAR_5)
{
 char VAR_6[512];
 FILE *VAR_7;
 struct stat VAR_8;

 if (VAR_5 && FUNC_9(VAR_4, &VAR_8))
  return;

 VAR_7 = FUNC_12(VAR_4, "r");
 while (FUNC_3(VAR_6, sizeof(VAR_6), VAR_7)) {
  uint32_t VAR_9;
  char *VAR_10, *VAR_11;
  struct object_id VAR_12;
  struct object *VAR_13;
  struct commit *VAR_14;
  enum object_type VAR_15;

  VAR_10 = FUNC_10(VAR_6, '\n');
  if (VAR_6[0] != ':' || !VAR_10)
   FUNC_0("corrupt mark line: %s", VAR_6);
  *VAR_10 = '\0';

  VAR_9 = FUNC_11(VAR_6 + 1, &VAR_11, 10);
  if (!VAR_9 || VAR_11 == VAR_6 + 1
   || *VAR_11 != ' ' || FUNC_4(VAR_11 + 1, &VAR_12))
   FUNC_0("corrupt mark line: %s", VAR_6);

  if (VAR_2 < VAR_9)
   VAR_2 = VAR_9;

  VAR_15 = FUNC_7(VAR_3, &VAR_12, ((void*)0));
  if (VAR_15 < 0)
   FUNC_0("object not found: %s", FUNC_8(&VAR_12));

  if (VAR_15 != VAR_0)

   continue;

  VAR_14 = FUNC_5(VAR_3, &VAR_12);
  if (!VAR_14)
   FUNC_0("not a commit? can't happen: %s", FUNC_8(&VAR_12));

  VAR_13 = &VAR_14->object;

  if (VAR_13->flags & VAR_1)
   FUNC_1("Object %s already has a mark", FUNC_8(&VAR_12));

  FUNC_6(VAR_13, VAR_9);

  VAR_13->flags |= VAR_1;
 }
 FUNC_2(VAR_7);
}
