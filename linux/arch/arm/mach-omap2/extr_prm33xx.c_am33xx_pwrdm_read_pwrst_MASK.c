
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct powerdomain {int pwrstst_offs; int prcm_offs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct powerdomain *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->prcm_offs, VAR_2->pwrstst_offs);
 VAR_3 &= VAR_0;
 VAR_3 >>= VAR_1;

 return VAR_3;
}
