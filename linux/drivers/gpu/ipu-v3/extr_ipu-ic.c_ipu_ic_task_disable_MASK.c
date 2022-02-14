
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipu_ic_priv {int lock; } ;
struct ipu_ic {TYPE_1__* bit; struct ipu_ic_priv* priv; } ;
struct TYPE_2__ {int ic_conf_en; int ic_conf_csc1_en; int ic_conf_rot_en; int ic_conf_csc2_en; int ic_conf_cmb_en; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipu_ic*,int ) ;
 int FUNC_1 (struct ipu_ic*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct ipu_ic *VAR_1)
{
 struct ipu_ic_priv *VAR_2 = VAR_1->priv;
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_2(&VAR_2->lock, VAR_3);

 VAR_4 = FUNC_0(VAR_1, VAR_0);

 VAR_4 &= ~(VAR_1->bit->ic_conf_en |
       VAR_1->bit->ic_conf_csc1_en |
       VAR_1->bit->ic_conf_rot_en);
 if (VAR_1->bit->ic_conf_csc2_en)
  VAR_4 &= ~VAR_1->bit->ic_conf_csc2_en;
 if (VAR_1->bit->ic_conf_cmb_en)
  VAR_4 &= ~VAR_1->bit->ic_conf_cmb_en;

 FUNC_1(VAR_1, VAR_4, VAR_0);

 FUNC_3(&VAR_2->lock, VAR_3);
}
