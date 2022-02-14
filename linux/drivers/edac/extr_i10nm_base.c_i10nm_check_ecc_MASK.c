
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skx_imc {scalar_t__ mbase; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,char*,int,int ) ;

__attribute__((used)) static bool FUNC_2(struct skx_imc *VAR_0, int VAR_1)
{
 u32 VAR_2;

 VAR_2 = *(u32 *)(VAR_0->mbase + 0x20ef8 + VAR_1 * 0x4000);
 FUNC_1(1, "ch%d mcmtr reg %x\n", VAR_1, VAR_2);

 return !!FUNC_0(VAR_2, 2, 2);
}
