
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ipu_ic_priv {int lock; } ;
struct TYPE_7__ {scalar_t__ cs; } ;
struct TYPE_6__ {scalar_t__ cs; } ;
struct TYPE_5__ {scalar_t__ cs; } ;
struct ipu_ic {TYPE_4__* bit; TYPE_3__ out_cs; TYPE_2__ g_in_cs; scalar_t__ graphics; TYPE_1__ in_cs; scalar_t__ rotation; struct ipu_ic_priv* priv; } ;
struct TYPE_8__ {int ic_conf_csc2_en; int ic_conf_csc1_en; int ic_conf_cmb_en; int ic_conf_rot_en; int ic_conf_en; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipu_ic*,int ) ;
 int FUNC_1 (struct ipu_ic*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct ipu_ic *VAR_1)
{
 struct ipu_ic_priv *VAR_2 = VAR_1->priv;
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_2(&VAR_2->lock, VAR_3);

 VAR_4 = FUNC_0(VAR_1, VAR_0);

 VAR_4 |= VAR_1->bit->ic_conf_en;

 if (VAR_1->rotation)
  VAR_4 |= VAR_1->bit->ic_conf_rot_en;

 if (VAR_1->in_cs.cs != VAR_1->out_cs.cs)
  VAR_4 |= VAR_1->bit->ic_conf_csc1_en;

 if (VAR_1->graphics) {
  VAR_4 |= VAR_1->bit->ic_conf_cmb_en;
  VAR_4 |= VAR_1->bit->ic_conf_csc1_en;

  if (VAR_1->g_in_cs.cs != VAR_1->out_cs.cs)
   VAR_4 |= VAR_1->bit->ic_conf_csc2_en;
 }

 FUNC_1(VAR_1, VAR_4, VAR_0);

 FUNC_3(&VAR_2->lock, VAR_3);
}
