
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pt_regs {int si; int dx; int cx; int bx; int orig_ax; int r10; int di; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct pt_regs *VAR_1, u32 VAR_2)
{






 {
  FUNC_0(VAR_1->orig_ax, VAR_1->bx,
        VAR_1->cx, VAR_1->dx, VAR_1->si);
 }
}
