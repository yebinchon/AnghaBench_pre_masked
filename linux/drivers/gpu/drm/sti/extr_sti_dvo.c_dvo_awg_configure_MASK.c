
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_dvo {scalar_t__ regs; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sti_dvo *VAR_4, u32 *VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0("\n");

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_1(VAR_5[VAR_7],
         VAR_4->regs + VAR_3 + VAR_7 * 4);
 for (VAR_7 = VAR_6; VAR_7 < VAR_0; VAR_7++)
  FUNC_1(0, VAR_4->regs + VAR_3 + VAR_7 * 4);

 FUNC_1(VAR_1, VAR_4->regs + VAR_2);
}
