
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvmppc_slb {int vsid; } ;
typedef int gva_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvmppc_slb*) ;
 int FUNC_1 (struct kvmppc_slb*) ;

__attribute__((used)) static u64 FUNC_2(struct kvmppc_slb *VAR_1, gva_t VAR_2)
{
 VAR_2 &= FUNC_0(VAR_1);

 return (VAR_2 >> VAR_0) |
  ((VAR_1->vsid) << (FUNC_1(VAR_1) - VAR_0));
}
