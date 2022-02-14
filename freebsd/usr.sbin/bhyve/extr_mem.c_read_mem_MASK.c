
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int dummy; } ;
struct rw_mem_args {int size; int operation; int * val; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmctx*,int,int ,int ,struct rw_mem_args*) ;
 int VAR_1 ;

int
FUNC_1(struct vmctx *VAR_2, int VAR_3, uint64_t VAR_4, uint64_t *VAR_5, int VAR_6)
{
 struct rw_mem_args VAR_7;

 VAR_7.val = VAR_5;
 VAR_7.size = VAR_6;
 VAR_7.operation = VAR_0;
 return (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1, &VAR_7));
}
