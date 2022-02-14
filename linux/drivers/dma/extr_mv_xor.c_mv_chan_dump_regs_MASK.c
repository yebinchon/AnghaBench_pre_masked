
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_chan {int dummy; } ;


 int FUNC_0 (struct mv_xor_chan*) ;
 int FUNC_1 (struct mv_xor_chan*) ;
 int FUNC_2 (struct mv_xor_chan*) ;
 int FUNC_3 (struct mv_xor_chan*) ;
 int FUNC_4 (struct mv_xor_chan*) ;
 int FUNC_5 (struct mv_xor_chan*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (struct mv_xor_chan*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct mv_xor_chan *VAR_0)
{
 u32 VAR_1;

 VAR_1 = FUNC_8(FUNC_1(VAR_0));
 FUNC_6(FUNC_7(VAR_0), "config       0x%08x\n", VAR_1);

 VAR_1 = FUNC_8(FUNC_0(VAR_0));
 FUNC_6(FUNC_7(VAR_0), "activation   0x%08x\n", VAR_1);

 VAR_1 = FUNC_8(FUNC_4(VAR_0));
 FUNC_6(FUNC_7(VAR_0), "intr cause   0x%08x\n", VAR_1);

 VAR_1 = FUNC_8(FUNC_5(VAR_0));
 FUNC_6(FUNC_7(VAR_0), "intr mask    0x%08x\n", VAR_1);

 VAR_1 = FUNC_8(FUNC_3(VAR_0));
 FUNC_6(FUNC_7(VAR_0), "error cause  0x%08x\n", VAR_1);

 VAR_1 = FUNC_8(FUNC_2(VAR_0));
 FUNC_6(FUNC_7(VAR_0), "error addr   0x%08x\n", VAR_1);
}
