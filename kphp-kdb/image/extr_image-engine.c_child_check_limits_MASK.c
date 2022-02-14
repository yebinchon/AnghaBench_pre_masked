
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 scalar_t__ FUNC_0 (scalar_t__,long long*,int) ;
 long long VAR_0 ;
 int FUNC_1 (int,char*,int) ;
 long long VAR_1 ;

__attribute__((used)) static int FUNC_2 (pid_t VAR_2) {
  long long VAR_3[2];
  if (FUNC_0 (VAR_2, VAR_3, 2) < 0) {
    return -1;
  }
  if (VAR_3[0] > VAR_1) {
    FUNC_1 (1, "[%d] exceeds vmsize_limit\n", (int) VAR_2);
    return 1;
  }
  if (VAR_3[1] > VAR_0) {
    FUNC_1 (1, "[%d] exceeds rss_memory_limit\n", (int) VAR_2);
    return 1;
  }
  return 0;
}
