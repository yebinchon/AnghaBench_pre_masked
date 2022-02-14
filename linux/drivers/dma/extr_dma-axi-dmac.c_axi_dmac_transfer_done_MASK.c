
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct axi_dmac_sg {scalar_t__ id; int schedule_when_free; scalar_t__ partial_len; } ;
struct TYPE_3__ {int node; } ;
struct axi_dmac_desc {size_t num_completed; size_t num_sgs; TYPE_1__ vdesc; scalar_t__ cyclic; struct axi_dmac_sg* sg; } ;
struct axi_dmac_chan {scalar_t__ hw_partial_xfer; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct axi_dmac_desc* FUNC_1 (struct axi_dmac_chan*) ;
 int FUNC_2 (struct axi_dmac_chan*,struct axi_dmac_desc*) ;
 int FUNC_3 (struct axi_dmac_chan*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_7(struct axi_dmac_chan *VAR_2,
 unsigned int VAR_3)
{
 struct axi_dmac_desc *VAR_4;
 struct axi_dmac_sg *VAR_5;
 bool VAR_6 = 0;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return 0;

 if (VAR_2->hw_partial_xfer &&
     (VAR_3 & VAR_0))
  FUNC_3(VAR_2);

 do {
  VAR_5 = &VAR_4->sg[VAR_4->num_completed];
  if (VAR_5->id == VAR_1)
   break;
  if (!(FUNC_0(VAR_5->id) & VAR_3))
   break;
  VAR_4->num_completed++;
  VAR_5->id = VAR_1;
  if (VAR_5->schedule_when_free) {
   VAR_5->schedule_when_free = 0;
   VAR_6 = 1;
  }

  if (VAR_5->partial_len)
   FUNC_2(VAR_2, VAR_4);

  if (VAR_4->cyclic)
   FUNC_6(&VAR_4->vdesc);

  if (VAR_4->num_completed == VAR_4->num_sgs ||
      VAR_5->partial_len) {
   if (VAR_4->cyclic) {
    VAR_4->num_completed = 0;
   } else {
    FUNC_4(&VAR_4->vdesc.node);
    FUNC_5(&VAR_4->vdesc);
    VAR_4 = FUNC_1(VAR_2);
   }
  }
 } while (VAR_4);

 return VAR_6;
}
