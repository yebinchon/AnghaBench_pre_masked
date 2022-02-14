
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct lock_file {int dummy; } ;


 struct lock_file VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 () ;
 char* FUNC_5 (char*,char const*) ;
 int FUNC_6 (struct lock_file*,char const*,int ,int ) ;
 int FUNC_7 (struct object_id const*) ;
 int FUNC_8 (struct object_id*,struct object_id const*) ;
 scalar_t__ FUNC_9 (char const*,struct object_id*) ;
 int FUNC_10 (struct lock_file*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12(const char *VAR_1, const struct object_id *VAR_2)
{
 const char *VAR_3;

 VAR_3 = FUNC_5("%s", VAR_1);

 if (VAR_2 && !FUNC_7(VAR_2)) {
  struct lock_file VAR_4 = VAR_0;
  int VAR_5;
  struct object_id VAR_6;

  VAR_5 = FUNC_6(
    &VAR_4, VAR_3, 0,
    FUNC_4());
  if (VAR_5 < 0) {
   FUNC_3(FUNC_0("could not open '%s' for writing"),
        VAR_3);
   return -1;
  }
  if (FUNC_9(VAR_1, &VAR_6))
   FUNC_1(FUNC_0("could not read ref '%s'"), VAR_1);
  if (!FUNC_8(&VAR_6, VAR_2)) {
   FUNC_2(FUNC_0("unexpected object ID when deleting '%s'"),
         VAR_1);
   FUNC_10(&VAR_4);
   return -1;
  }

  FUNC_11(VAR_3);
  FUNC_10(&VAR_4);
 } else {
  FUNC_11(VAR_3);
 }

 return 0;
}
