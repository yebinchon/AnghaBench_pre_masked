
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_buffer {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rpc_buffer*,int) ;
 int FUNC_2 (struct rpc_buffer*,...) ;
 int FUNC_3 (struct rpc_buffer*) ;

__attribute__((used)) static inline void FUNC_4 (struct rpc_buffer *VAR_0, int VAR_1, const char *VAR_2) {
  FUNC_0 (!(VAR_1 & 0xff000000));
  FUNC_1 (VAR_0, 254);
  FUNC_2 (VAR_0, &VAR_1, 3);
  FUNC_2 (VAR_0, VAR_2, VAR_1);
  FUNC_3 (VAR_0);
}
