
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_chan {int idx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (struct mv_xor_chan*) ;
 int FUNC_4 (struct mv_xor_chan*) ;

__attribute__((used)) static void FUNC_5(struct mv_xor_chan *VAR_1,
       u32 VAR_2)
{
 if (VAR_2 & VAR_0) {
  FUNC_1(FUNC_4(VAR_1), "ignoring address decode error\n");
  return;
 }

 FUNC_2(FUNC_4(VAR_1), "error on chan %d. intr cause 0x%08x\n",
  VAR_1->idx, VAR_2);

 FUNC_3(VAR_1);
 FUNC_0(1);
}
