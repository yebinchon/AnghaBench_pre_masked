
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct msm_dsi_host {int tx_buf_paddr; } ;


 int VAR_0 ;

int FUNC_0(struct msm_dsi_host *VAR_1, uint64_t *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 *VAR_2 = VAR_1->tx_buf_paddr;
 return 0;
}
