
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int dummy; } ;
struct rw_mem_args {int val; int size; int operation; } ;
struct mem_range {int (* handler ) (struct vmctx*,int,int ,int ,int ,int ,int ,int ) ;int arg2; int arg1; } ;


 int FUNC_0 (struct vmctx*,int,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct vmctx *VAR_0, int VAR_1, uint64_t VAR_2, struct mem_range *VAR_3,
    void *VAR_4)
{
 struct rw_mem_args *VAR_5;

 VAR_5 = VAR_4;
 return (VAR_3->handler(VAR_0, VAR_1, VAR_5->operation, VAR_2, VAR_5->size,
     VAR_5->val, VAR_3->arg1, VAR_3->arg2));
}
