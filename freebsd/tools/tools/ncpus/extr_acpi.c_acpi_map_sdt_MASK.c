
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct ACPIsdt {int len; } ;


 struct ACPIsdt* FUNC_0 (int ,int) ;

__attribute__((used)) static struct ACPIsdt *
FUNC_1(vm_offset_t VAR_0)
{
 struct ACPIsdt *VAR_1;

 VAR_1 = FUNC_0(VAR_0, sizeof(struct ACPIsdt));
 VAR_1 = FUNC_0(VAR_0, VAR_1->len);
 return (VAR_1);
}
