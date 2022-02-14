
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_buffer {scalar_t__ sptr; scalar_t__ eptr; scalar_t__ magic; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct rpc_buffer*,int) ;

__attribute__((used)) static struct rpc_buffer *FUNC_2 (struct rpc_buffer *VAR_0) {
  VAR_0->magic = 0;
  FUNC_0 (VAR_0->sptr, VAR_0->eptr - VAR_0->sptr);
  FUNC_1 (VAR_0, sizeof (*VAR_0));
  return 0;
}
