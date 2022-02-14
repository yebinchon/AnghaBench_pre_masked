
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gyroadc {scalar_t__ mode; scalar_t__ model; scalar_t__ regs; int clk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long const,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rcar_gyroadc *VAR_7)
{
 const unsigned long VAR_8 = FUNC_0(VAR_7->clk) / 1000000;
 const unsigned long VAR_9 =
  (VAR_7->mode == VAR_5) ? 10 : 5;
 unsigned long VAR_10 = VAR_8 * VAR_9;






 if (VAR_10 & 1)
  VAR_10++;


 FUNC_1(0, VAR_7->regs + VAR_6);


 if (VAR_7->model == VAR_3)
  FUNC_1(0, VAR_7->regs + VAR_2);


 FUNC_1(VAR_7->mode, VAR_7->regs + VAR_4);
 FUNC_1(VAR_10, VAR_7->regs + VAR_1);
 FUNC_1(VAR_8 * 1250, VAR_7->regs + VAR_0);
}
