
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_type {char* (* func ) (int *) ;} ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,char const*,...) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_4 (char const*,char*) ;
 char* FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct hash_type *VAR_2, const char *VAR_3, bool VAR_4)
{
 const char *VAR_5;

 if (!VAR_3 || !FUNC_4(VAR_3, "-")) {
  VAR_5 = VAR_2->func(VAR_1);
 } else {
  FILE *VAR_6 = FUNC_1(VAR_3, "r");

  if (!VAR_6) {
   FUNC_2(VAR_0, "Failed to open '%s'\n", VAR_3);
   return 1;
  }
  VAR_5 = VAR_2->func(VAR_6);
  FUNC_0(VAR_6);
 }

 if (!VAR_5) {
  FUNC_2(VAR_0, "Failed to generate hash\n");
  return 1;
 }

 if (VAR_4)
  FUNC_3("%s %s\n", VAR_5, VAR_3 ? VAR_3 : "-");
 else
  FUNC_3("%s\n", VAR_5);
 return 0;
}
