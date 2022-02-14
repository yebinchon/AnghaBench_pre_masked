
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dw_edma_chip {TYPE_2__* dw; } ;
struct TYPE_3__ {int vaddr; } ;
struct TYPE_4__ {int rd_ch_cnt; int wr_ch_cnt; int mode; int version; int name; TYPE_1__ rg_region; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int ,int *) ;
 int FUNC_2 (char*,int,int ,int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;

void FUNC_4(struct dw_edma_chip *VAR_3)
{
 VAR_1 = VAR_3->dw;
 if (!VAR_1)
  return;

 VAR_2 = VAR_1->rg_region.vaddr;
 if (!VAR_2)
  return;

 VAR_0 = FUNC_0(VAR_1->name, 0);
 if (!VAR_0)
  return;

 FUNC_2("version", 0444, VAR_0, &VAR_1->version);
 FUNC_2("mode", 0444, VAR_0, &VAR_1->mode);
 FUNC_1("wr_ch_cnt", 0444, VAR_0, &VAR_1->wr_ch_cnt);
 FUNC_1("rd_ch_cnt", 0444, VAR_0, &VAR_1->rd_ch_cnt);

 FUNC_3();
}
