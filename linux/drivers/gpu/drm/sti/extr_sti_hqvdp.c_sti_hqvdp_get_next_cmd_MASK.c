
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hqvdp_cmd {int dummy; } ;
struct sti_hqvdp {int hqvdp_cmd_paddr; scalar_t__ regs; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct sti_hqvdp *VAR_2)
{
 int VAR_3;
 dma_addr_t VAR_4 = VAR_2->hqvdp_cmd_paddr;
 unsigned int VAR_5;

 VAR_3 = FUNC_0(VAR_2->regs + VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4 == VAR_3)
   return VAR_5 * sizeof(struct sti_hqvdp_cmd);

  VAR_4 += sizeof(struct sti_hqvdp_cmd);
 }

 return -1;
}
