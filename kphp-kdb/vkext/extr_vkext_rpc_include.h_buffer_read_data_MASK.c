
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_buffer {char* rptr; } ;


 int FUNC_0 (struct rpc_buffer*,int) ;

__attribute__((used)) static inline int FUNC_1 (struct rpc_buffer *VAR_0, int VAR_1, char **VAR_2) {
  if (!FUNC_0 (VAR_0, VAR_1)) {
    return -1;
  } else {
    *VAR_2 = VAR_0->rptr;
    VAR_0->rptr += VAR_1;

    return 1;
  }
}
