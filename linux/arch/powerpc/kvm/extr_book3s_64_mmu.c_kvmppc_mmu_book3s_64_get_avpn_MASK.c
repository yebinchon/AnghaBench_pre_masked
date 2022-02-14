
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvmppc_slb {int vsid; } ;
typedef int gva_t ;


 int FUNC_0 (struct kvmppc_slb*,int ) ;
 int FUNC_1 (struct kvmppc_slb*) ;
 int FUNC_2 (struct kvmppc_slb*) ;

__attribute__((used)) static u64 FUNC_3(struct kvmppc_slb *VAR_0, gva_t VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0);
 u64 VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 VAR_3 |= VAR_0->vsid << (FUNC_2(VAR_0) - VAR_2);

 if (VAR_2 < 16)
  VAR_3 >>= ((80 - VAR_2) - 56) - 8;
 else
  VAR_3 <<= VAR_2 - 16;

 return VAR_3;
}
