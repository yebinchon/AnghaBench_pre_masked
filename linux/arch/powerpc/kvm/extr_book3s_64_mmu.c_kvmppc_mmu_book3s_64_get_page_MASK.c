
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvmppc_slb {int dummy; } ;
typedef int gva_t ;


 int FUNC_0 (struct kvmppc_slb*) ;
 int FUNC_1 (struct kvmppc_slb*) ;

__attribute__((used)) static u32 FUNC_2(struct kvmppc_slb *VAR_0, gva_t VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);

 return ((VAR_1 & FUNC_1(VAR_0)) >> VAR_2);
}
