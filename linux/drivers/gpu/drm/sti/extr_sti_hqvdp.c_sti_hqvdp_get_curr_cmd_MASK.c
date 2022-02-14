
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sti_hqvdp_cmd {int dummy; } ;
struct sti_hqvdp {scalar_t__ hqvdp_cmd_paddr; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct sti_hqvdp *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = VAR_2->hqvdp_cmd_paddr;
 unsigned int VAR_5;

 VAR_3 = FUNC_0(VAR_2->regs + VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4 == VAR_3)
   return VAR_5 * sizeof(struct sti_hqvdp_cmd);

  VAR_4 += sizeof(struct sti_hqvdp_cmd);
 }

 return -1;
}
