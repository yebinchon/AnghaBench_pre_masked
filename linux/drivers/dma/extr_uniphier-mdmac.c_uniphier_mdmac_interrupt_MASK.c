
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_mdmac_desc {scalar_t__ sg_cur; scalar_t__ sg_len; int vd; } ;
struct TYPE_2__ {int lock; } ;
struct uniphier_mdmac_chan {TYPE_1__ vc; struct uniphier_mdmac_desc* md; scalar_t__ reg_ch_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uniphier_mdmac_chan*,struct uniphier_mdmac_desc*) ;
 struct uniphier_mdmac_desc* FUNC_4 (struct uniphier_mdmac_chan*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct uniphier_mdmac_chan *VAR_6 = VAR_5;
 struct uniphier_mdmac_desc *VAR_7;
 irqreturn_t VAR_8 = VAR_0;
 u32 VAR_9;

 FUNC_1(&VAR_6->vc.lock);

 VAR_9 = FUNC_0(VAR_6->reg_ch_base + VAR_2);





 if (!VAR_9) {
  VAR_8 = VAR_1;
  goto out;
 }


 FUNC_6(VAR_9, VAR_6->reg_ch_base + VAR_3);






 VAR_7 = VAR_6->md;
 if (!VAR_7)
  goto out;

 VAR_7->sg_cur++;

 if (VAR_7->sg_cur >= VAR_7->sg_len) {
  FUNC_5(&VAR_7->vd);
  VAR_7 = FUNC_4(VAR_6);
  if (!VAR_7)
   goto out;
 }

 FUNC_3(VAR_6, VAR_7);

out:
 FUNC_2(&VAR_6->vc.lock);

 return VAR_8;
}
