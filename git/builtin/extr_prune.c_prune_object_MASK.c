
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mtime; } ;
struct rev_info {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct object_id const*,struct rev_info*) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (int ,struct object_id const*,int *) ;
 char* FUNC_4 (struct object_id const*) ;
 int FUNC_5 (char*,char*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char const*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_8(const struct object_id *VAR_4, const char *VAR_5,
   void *VAR_6)
{
 struct rev_info *VAR_7 = VAR_6;
 struct stat VAR_8;

 if (FUNC_1(VAR_4, VAR_7))
  return 0;

 if (FUNC_2(VAR_5, &VAR_8)) {

  FUNC_0("Could not stat '%s'", VAR_5);
  return 0;
 }
 if (VAR_8.st_mtime > VAR_0)
  return 0;
 if (VAR_1 || VAR_3) {
  enum object_type VAR_9 = FUNC_3(VAR_2, VAR_4,
       ((void*)0));
  FUNC_5("%s %s\n", FUNC_4(VAR_4),
         (VAR_9 > 0) ? FUNC_6(VAR_9) : "unknown");
 }
 if (!VAR_1)
  FUNC_7(VAR_5);
 return 0;
}
