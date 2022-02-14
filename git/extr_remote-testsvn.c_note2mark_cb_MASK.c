
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_note {int rev_nr; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct object_id const*) ;
 scalar_t__ FUNC_3 (char*,struct rev_note*) ;
 char* FUNC_4 (struct object_id const*,int*,unsigned long*) ;

__attribute__((used)) static int FUNC_5(const struct object_id *VAR_1,
  const struct object_id *VAR_2, char *VAR_3,
  void *VAR_4)
{
 FILE *VAR_5 = (FILE *)VAR_4;
 char *VAR_6;
 unsigned long VAR_7;
 enum object_type VAR_8;
 struct rev_note VAR_9;

 if (!(VAR_6 = FUNC_4(VAR_2, &VAR_8, &VAR_7)) ||
   !VAR_7 || VAR_8 != VAR_0) {
  FUNC_1(VAR_6);
  return 1;
 }
 if (FUNC_3(VAR_6, &VAR_9))
  return 2;
 if (FUNC_0(VAR_5, ":%d %s\n", VAR_9.rev_nr, FUNC_2(VAR_1)) < 1)
  return 3;
 return 0;
}
