
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int dummy; } ;
struct vm_guest_paging {int dummy; } ;
struct vie {int dummy; } ;
struct emulate_mem_args {struct vm_guest_paging* paging; struct vie* vie; } ;


 int FUNC_0 (struct vmctx*,int,int ,int ,struct emulate_mem_args*) ;
 int VAR_0 ;

int
FUNC_1(struct vmctx *VAR_1, int VAR_2, uint64_t VAR_3, struct vie *VAR_4,
    struct vm_guest_paging *VAR_5)

{
 struct emulate_mem_args VAR_6;

 VAR_6.vie = VAR_4;
 VAR_6.paging = VAR_5;
 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0, &VAR_6));
}
