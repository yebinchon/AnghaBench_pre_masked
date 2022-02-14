
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct decon_context {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct decon_context *VAR_1,
         unsigned int VAR_2, bool VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_2);

 VAR_5 = FUNC_1(VAR_1->regs + VAR_0);
 if (VAR_3)
  VAR_5 |= VAR_4;
 else
  VAR_5 &= ~VAR_4;
 FUNC_2(VAR_5, VAR_1->regs + VAR_0);
}
