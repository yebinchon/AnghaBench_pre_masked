
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {char* name; } ;


 int FUNC_0 (char*,char const*,...) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static inline int
FUNC_2 (const struct message *VAR_0,
              const char *VAR_1,
              const char *VAR_2,
              const char *VAR_3) {
  if ((VAR_2 == ((void*)0)) != (VAR_3 == ((void*)0))) {
    FUNC_0("\n*** Error: %s in '%s' ***\n\n", VAR_1, VAR_0->name);
    FUNC_0("expected %s\n", (VAR_2 == ((void*)0)) ? "NULL" : VAR_2);
    FUNC_0("   found %s\n", (VAR_3 == ((void*)0)) ? "NULL" : VAR_3);
    return 0;
  }
  if (VAR_2 != ((void*)0) && 0 != FUNC_1(VAR_2, VAR_3)) {
    FUNC_0("\n*** Error: %s in '%s' ***\n\n", VAR_1, VAR_0->name);
    FUNC_0("expected '%s'\n", VAR_2);
    FUNC_0("   found '%s'\n", VAR_3);
    return 0;
  }
  return 1;
}
