
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef scalar_t__ u32 ;
struct pt_regs {void* ccr; void* msr; void* nip; void* dsisr; void* dar; void* xer; void* link; void* ctr; void** gpr; } ;





 scalar_t__ VAR_0 ;






__attribute__((used)) static inline void FUNC_0(struct pt_regs *VAR_1,
       u32 VAR_2, u32 VAR_3,
       u64 VAR_4)
{
 if (VAR_2 == VAR_0) {
  if (VAR_3 < 32)
   VAR_1->gpr[VAR_3] = VAR_4;
  return;
 }

 switch (VAR_3) {
 case 132:
  VAR_1->ctr = VAR_4;
  break;
 case 129:
  VAR_1->link = VAR_4;
  break;
 case 128:
  VAR_1->xer = VAR_4;
  break;
 case 131:
  VAR_1->dar = VAR_4;
  break;
 case 130:
  VAR_1->dsisr = VAR_4;
  break;
 case 133:
  VAR_1->nip = VAR_4;
  break;
 case 134:
  VAR_1->msr = VAR_4;
  break;
 case 135:
  VAR_1->ccr = VAR_4;
  break;
 }
}
