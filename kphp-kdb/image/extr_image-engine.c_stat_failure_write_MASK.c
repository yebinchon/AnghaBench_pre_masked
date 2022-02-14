
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_failure {int size; int * prog; } ;
struct connection {int dummy; } ;


 int FUNC_0 (struct connection*,char const*,int *,int ) ;
 int FUNC_1 (int,char*,int *,int ) ;

__attribute__((used)) static int FUNC_2 (struct connection *VAR_0, const char *VAR_1, struct stat_failure *VAR_2) {
  FUNC_1 (4, "stat_failure_write (S->prog: %s, S->size: %d)\n", VAR_2->prog, VAR_2->size);
  if (VAR_2->prog == ((void*)0)) {
    return 0;
  }
  return FUNC_0 (VAR_0, VAR_1, VAR_2->prog, VAR_2->size);
}
