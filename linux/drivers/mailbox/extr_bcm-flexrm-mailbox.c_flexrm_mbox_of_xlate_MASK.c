
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int args_count; size_t* args; } ;
struct mbox_controller {size_t num_chans; struct mbox_chan* chans; } ;
struct mbox_chan {struct flexrm_ring* con_priv; } ;
struct flexrm_ring {size_t msi_count_threshold; size_t msi_timer_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mbox_chan* FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static struct mbox_chan *FUNC_1(struct mbox_controller *VAR_4,
     const struct of_phandle_args *VAR_5)
{
 struct mbox_chan *VAR_6;
 struct flexrm_ring *VAR_7;

 if (VAR_5->args_count < 3)
  return FUNC_0(-VAR_0);

 if (VAR_5->args[0] >= VAR_4->num_chans)
  return FUNC_0(-VAR_1);

 if (VAR_5->args[1] > VAR_2)
  return FUNC_0(-VAR_0);

 if (VAR_5->args[2] > VAR_3)
  return FUNC_0(-VAR_0);

 VAR_6 = &VAR_4->chans[VAR_5->args[0]];
 VAR_7 = VAR_6->con_priv;
 VAR_7->msi_count_threshold = VAR_5->args[1];
 VAR_7->msi_timer_val = VAR_5->args[2];

 return VAR_6;
}
