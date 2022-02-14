
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct stat {int dummy; } ;
struct object_id {int dummy; } ;
struct child_process {char const** argv; int git_cmd; int in; int out; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {scalar_t__ hexsz; } ;
struct TYPE_3__ {int index; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct strbuf VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,...) ;
 scalar_t__ FUNC_4 (struct child_process*) ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 scalar_t__ FUNC_6 (int ,struct object_id*) ;
 scalar_t__ FUNC_7 (int ,struct object_id*,int,struct stat*,int,int *,int) ;
 int FUNC_8 (char const*,int ) ;
 scalar_t__ FUNC_9 (struct child_process*) ;
 scalar_t__ FUNC_10 (struct strbuf*,int,scalar_t__) ;
 int FUNC_11 (struct strbuf*) ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static int FUNC_12(struct object_id *VAR_8, enum object_type VAR_9,
     int VAR_10, const char *VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_8(VAR_11, VAR_4);
 if (VAR_12 < 0)
  return FUNC_3(FUNC_0("unable to open %s for reading"), VAR_11);

 if (!VAR_10 && VAR_9 == VAR_3) {
  const char *VAR_13[] = { "mktree", ((void*)0) };
  struct child_process VAR_14 = VAR_0;
  struct strbuf VAR_15 = VAR_5;

  VAR_14.argv = VAR_13;
  VAR_14.git_cmd = 1;
  VAR_14.in = VAR_12;
  VAR_14.out = -1;

  if (FUNC_9(&VAR_14)) {
   FUNC_1(VAR_12);
   return FUNC_2(FUNC_0("unable to spawn mktree"));
  }

  if (FUNC_10(&VAR_15, VAR_14.out, VAR_6->hexsz + 1) < 0) {
   FUNC_3(FUNC_0("unable to read from mktree"));
   FUNC_1(VAR_12);
   FUNC_1(VAR_14.out);
   return -1;
  }
  FUNC_1(VAR_14.out);

  if (FUNC_4(&VAR_14)) {
   FUNC_11(&VAR_15);
   return FUNC_2(FUNC_0("mktree reported failure"));
  }
  if (FUNC_6(VAR_15.buf, VAR_8) < 0) {
   FUNC_11(&VAR_15);
   return FUNC_2(FUNC_0("mktree did not return an object name"));
  }

  FUNC_11(&VAR_15);
 } else {
  struct stat VAR_16;
  int VAR_17 = VAR_1 | VAR_2;

  if (FUNC_5(VAR_12, &VAR_16) < 0) {
   FUNC_3(FUNC_0("unable to fstat %s"), VAR_11);
   FUNC_1(VAR_12);
   return -1;
  }
  if (FUNC_7(VAR_7->index, VAR_8, VAR_12, &VAR_16, VAR_9, ((void*)0), VAR_17) < 0)
   return FUNC_2(FUNC_0("unable to write object to database"));

 }





 return 0;
}
