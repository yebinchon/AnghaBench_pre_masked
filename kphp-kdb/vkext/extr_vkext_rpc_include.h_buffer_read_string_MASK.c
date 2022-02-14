
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_buffer {int dummy; } ;


 scalar_t__ FUNC_0 (struct rpc_buffer*,char*) ;
 scalar_t__ FUNC_1 (struct rpc_buffer*,int,char**) ;
 int FUNC_2 (struct rpc_buffer*) ;
 int FUNC_3 (int*,char*,int) ;

__attribute__((used)) static inline int FUNC_4 (struct rpc_buffer *VAR_0, int *VAR_1, char **VAR_2) {
  unsigned char VAR_3;
  if (FUNC_0 (VAR_0, (char *)&VAR_3) < 0) {
    return -1;
  }
  *VAR_1 = VAR_3;
  if (*VAR_1 == 255) {
    return -1;
  }
  if (*VAR_1 == 254) {
    char *VAR_4;
    *VAR_1 = 0;
    if (FUNC_1 (VAR_0, 3, &VAR_4) < 0) {
      return -1;
    }
    FUNC_3 (VAR_1, VAR_4, 3);
  }
  if (FUNC_1 (VAR_0, *VAR_1, VAR_2) < 0) {
    return -1;
  }
  FUNC_2 (VAR_0);
  return 1;
}
