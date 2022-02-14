
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {char* name; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static inline int
FUNC_1 (const struct message *VAR_0,
              const char *VAR_1,
              int VAR_2,
              int VAR_3) {
  if (VAR_2 != VAR_3) {
    FUNC_0("\n*** Error: %s in '%s' ***\n\n", VAR_1, VAR_0->name);
    FUNC_0("expected %d\n", VAR_2);
    FUNC_0("   found %d\n", VAR_3);
    return 0;
  }
  return 1;
}
