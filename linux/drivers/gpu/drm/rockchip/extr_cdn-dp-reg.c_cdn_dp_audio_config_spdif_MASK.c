
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cdn_dp_device {int spdif_clk; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct cdn_dp_device *VAR_11)
{
 u32 VAR_12;

 FUNC_4(VAR_10, VAR_11->regs + VAR_2);

 VAR_12 = FUNC_1(2) | VAR_0 | FUNC_0(4);
 FUNC_4(VAR_12, VAR_11->regs + VAR_3);
 FUNC_4(VAR_5, VAR_11->regs + VAR_4);

 VAR_12 = VAR_8 | VAR_6 | VAR_9;
 FUNC_4(VAR_12, VAR_11->regs + VAR_7);

 FUNC_2(VAR_11->spdif_clk);
 FUNC_3(VAR_11->spdif_clk, VAR_1);
}
