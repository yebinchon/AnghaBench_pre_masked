
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_buffer {int sptr; int wptr; } ;


 int FUNC_0 (struct rpc_buffer*,int) ;
 int FUNC_1 (int,int ,int) ;

__attribute__((used)) static inline void FUNC_2 (struct rpc_buffer *VAR_0) {
  int VAR_1 = (int)((VAR_0->sptr - VAR_0->wptr) & 3);
  FUNC_0 (VAR_0, VAR_1);
  FUNC_1 (VAR_0->wptr, 0, VAR_1);
  VAR_0->wptr += VAR_1;
}
