
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sti_hqvdp_cmd {int dummy; } ;
struct sti_hqvdp {scalar_t__ hqvdp_cmd_paddr; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct sti_hqvdp *VAR_3)
{
 u32 VAR_4, VAR_5;
 u32 VAR_6 = VAR_3->hqvdp_cmd_paddr;
 int VAR_7;

 VAR_4 = FUNC_0(VAR_3->regs + VAR_0);
 VAR_5 = FUNC_0(VAR_3->regs + VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if ((VAR_6 != VAR_4) && (VAR_6 != VAR_5))
   return VAR_7 * sizeof(struct sti_hqvdp_cmd);
  VAR_6 += sizeof(struct sti_hqvdp_cmd);
 }

 return -1;
}
