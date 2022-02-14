
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int offset; } ;
struct object_entry {int type; TYPE_1__ idx; int pack_id; } ;
typedef int line ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 struct object_entry* FUNC_4 (struct object_id*) ;
 int * FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (char*,struct object_id*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int ,struct object_entry*) ;
 struct object_entry* FUNC_8 (struct object_id*) ;
 int FUNC_9 (int ,struct object_id*,int *) ;
 char* FUNC_10 (struct object_id*) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*,char**,int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_13(void)
{
 char VAR_7[512];
 FILE *VAR_8 = FUNC_5(VAR_3, "r");
 if (VAR_8)
  ;
 else if (VAR_5 && VAR_2 == VAR_0)
  goto done;
 else
  FUNC_1("cannot read '%s'", VAR_3);
 while (FUNC_3(VAR_7, sizeof(VAR_7), VAR_8)) {
  uintmax_t VAR_9;
  char *VAR_10;
  struct object_id VAR_11;
  struct object_entry *VAR_12;

  VAR_10 = FUNC_11(VAR_7, '\n');
  if (VAR_7[0] != ':' || !VAR_10)
   FUNC_0("corrupt mark line: %s", VAR_7);
  *VAR_10 = 0;
  VAR_9 = FUNC_12(VAR_7 + 1, &VAR_10, 10);
  if (!VAR_9 || VAR_10 == VAR_7 + 1
   || *VAR_10 != ' ' || FUNC_6(VAR_10 + 1, &VAR_11))
   FUNC_0("corrupt mark line: %s", VAR_7);
  VAR_12 = FUNC_4(&VAR_11);
  if (!VAR_12) {
   enum object_type VAR_13 = FUNC_9(VAR_6,
        &VAR_11, ((void*)0));
   if (VAR_13 < 0)
    FUNC_0("object not found: %s", FUNC_10(&VAR_11));
   VAR_12 = FUNC_8(&VAR_11);
   VAR_12->type = VAR_13;
   VAR_12->pack_id = VAR_1;
   VAR_12->idx.offset = 1;
  }
  FUNC_7(VAR_9, VAR_12);
 }
 FUNC_2(VAR_8);
done:
 VAR_4 = 1;
}
