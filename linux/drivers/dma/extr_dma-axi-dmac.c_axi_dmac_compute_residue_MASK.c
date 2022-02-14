
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmaengine_result {unsigned int residue; int result; } ;
struct axi_dmac_sg {unsigned int partial_len; } ;
struct TYPE_2__ {struct dmaengine_result tx_result; } ;
struct axi_dmac_desc {int num_completed; unsigned int num_sgs; struct axi_dmac_sg* sg; TYPE_1__ vdesc; } ;
struct axi_dmac_chan {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct axi_dmac_chan*,struct axi_dmac_sg*) ;

__attribute__((used)) static void FUNC_1(struct axi_dmac_chan *VAR_1,
 struct axi_dmac_desc *VAR_2)
{
 struct dmaengine_result *VAR_3 = &VAR_2->vdesc.tx_result;
 unsigned int VAR_4 = VAR_2->num_completed - 1;
 struct axi_dmac_sg *VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_3->result = VAR_0;
 VAR_3->residue = 0;





 for (VAR_6 = VAR_4; VAR_6 < VAR_2->num_sgs; VAR_6++) {
  VAR_5 = &VAR_2->sg[VAR_6];
  VAR_7 = FUNC_0(VAR_1, VAR_5);
  VAR_3->residue += (VAR_7 - VAR_5->partial_len);
 }
}
