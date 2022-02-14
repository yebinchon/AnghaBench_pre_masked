
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cppi41_dd {scalar_t__ qmgr_mem; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct cppi41_dd *VAR_0, unsigned VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_0->qmgr_mem + FUNC_0(VAR_1));
 VAR_2 &= ~0x1f;
 return VAR_2;
}
