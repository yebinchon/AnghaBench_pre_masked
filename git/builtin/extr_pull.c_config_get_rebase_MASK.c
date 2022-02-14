
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch {int name; } ;
typedef enum rebase_type { ____Placeholder_rebase_type } rebase_type ;


 int VAR_0 ;
 struct branch* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const**) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char*,int ) ;

__attribute__((used)) static enum rebase_type FUNC_5(void)
{
 struct branch *VAR_1 = FUNC_0("HEAD");
 const char *VAR_2;

 if (VAR_1) {
  char *VAR_3 = FUNC_4("branch.%s.rebase", VAR_1->name);

  if (!FUNC_2(VAR_3, &VAR_2)) {
   enum rebase_type VAR_4 = FUNC_3(VAR_3, VAR_2, 1);
   FUNC_1(VAR_3);
   return VAR_4;
  }

  FUNC_1(VAR_3);
 }

 if (!FUNC_2("pull.rebase", &VAR_2))
  return FUNC_3("pull.rebase", VAR_2, 1);

 return VAR_0;
}
