
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct cppi41_desc {int dummy; } ;
struct TYPE_4__ {int channels; } ;
struct cppi41_dd {int n_chans; int descs_phys; int first_td_desc; TYPE_2__ ddev; int * cd; scalar_t__ ctrl_mem; } ;
struct TYPE_3__ {int device_node; TYPE_2__* device; } ;
struct cppi41_channel {int is_tx; int port_num; int desc_phys; TYPE_1__ chan; int * desc; scalar_t__ gcr_reg; struct cppi41_dd* cdd; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cppi41_channel* FUNC_2 (struct device*,int,int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct cppi41_dd *VAR_3)
{
 struct cppi41_channel *VAR_4, *VAR_5;
 int VAR_6;
 u32 VAR_7 = VAR_3->n_chans;





 VAR_7 *= 2;

 VAR_5 = FUNC_2(VAR_2, VAR_7, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_4 = &VAR_5[VAR_6];

  VAR_4->cdd = VAR_3;
  if (VAR_6 & 1) {
   VAR_4->gcr_reg = VAR_3->ctrl_mem + FUNC_1(VAR_6 >> 1);
   VAR_4->is_tx = 1;
  } else {
   VAR_4->gcr_reg = VAR_3->ctrl_mem + FUNC_0(VAR_6 >> 1);
   VAR_4->is_tx = 0;
  }
  VAR_4->port_num = VAR_6 >> 1;
  VAR_4->desc = &VAR_3->cd[VAR_6];
  VAR_4->desc_phys = VAR_3->descs_phys;
  VAR_4->desc_phys += VAR_6 * sizeof(struct cppi41_desc);
  VAR_4->chan.device = &VAR_3->ddev;
  FUNC_3(&VAR_4->chan.device_node, &VAR_3->ddev.channels);
 }
 VAR_3->first_td_desc = VAR_7;

 return 0;
}
