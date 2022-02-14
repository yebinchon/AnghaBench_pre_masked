
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int tpc; int tnpc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct pt_regs *VAR_1)
{
 VAR_1->tpc = VAR_1->tnpc;
 VAR_1->tnpc += 4;
 if (FUNC_0(VAR_0)) {
  VAR_1->tpc &= 0xffffffff;
  VAR_1->tnpc &= 0xffffffff;
 }
}
