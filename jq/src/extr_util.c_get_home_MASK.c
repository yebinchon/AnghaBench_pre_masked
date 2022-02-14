
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;
typedef int jv ;


 char* FUNC_0 (char*) ;
 struct passwd* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,char*) ;

jv FUNC_6() {
  jv VAR_0;
  char *VAR_1 = FUNC_0("HOME");
  if (!VAR_1) {

    struct passwd* VAR_2 = FUNC_1(FUNC_2());
    if (VAR_2)
      VAR_0 = FUNC_4(VAR_2->pw_dir);
    else
      VAR_0 = FUNC_3(FUNC_4("Could not find home directory."));
  } else {
    VAR_0 = FUNC_4(VAR_1);
  }
  return VAR_0;
}
