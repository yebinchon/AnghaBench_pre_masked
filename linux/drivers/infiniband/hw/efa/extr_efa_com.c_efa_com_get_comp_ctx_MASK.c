
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct efa_comp_ctx {int occupied; } ;
struct efa_com_admin_queue {int depth; struct efa_comp_ctx* comp_ctx; int efa_dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static struct efa_comp_ctx *FUNC_2(struct efa_com_admin_queue *VAR_0,
       u16 VAR_1, bool VAR_2)
{
 u16 VAR_3 = VAR_1 & (VAR_0->depth - 1);

 if (VAR_0->comp_ctx[VAR_3].occupied && VAR_2) {
  FUNC_1(
   VAR_0->efa_dev,
   "Completion context for command_id %#x is occupied\n",
   VAR_1);
  return ((void*)0);
 }

 if (VAR_2) {
  VAR_0->comp_ctx[VAR_3].occupied = 1;
  FUNC_0(VAR_0->efa_dev,
     "Take completion ctxt for command_id %#x\n", VAR_1);
 }

 return &VAR_0->comp_ctx[VAR_3];
}
