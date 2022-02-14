
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct decon_context {scalar_t__ regs; int i80_if; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct decon_context *VAR_9)
{
 u32 VAR_10;

 FUNC_1(VAR_4, VAR_9->regs + VAR_3);

 VAR_10 = VAR_7;
 if (!VAR_9->i80_if)
  VAR_10 |= VAR_8;
 FUNC_1(VAR_10, VAR_9->regs + VAR_6);

 FUNC_1(VAR_1 | VAR_2, VAR_9->regs + VAR_0);

 if (!VAR_9->i80_if)
  FUNC_1(VAR_5, VAR_9->regs + FUNC_0(0));
}
