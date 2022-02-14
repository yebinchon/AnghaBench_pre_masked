
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uniphier_mdmac_device {scalar_t__ reg_base; } ;
struct uniphier_mdmac_desc {size_t sg_cur; scalar_t__ dir; struct scatterlist* sgl; } ;
struct uniphier_mdmac_chan {int chan_id; scalar_t__ reg_ch_base; struct uniphier_mdmac_device* mdev; } ;
struct scatterlist {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uniphier_mdmac_chan *VAR_12,
      struct uniphier_mdmac_desc *VAR_13)
{
 struct uniphier_mdmac_device *VAR_14 = VAR_12->mdev;
 struct scatterlist *VAR_15;
 u32 VAR_16 = VAR_5;
 u32 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 VAR_15 = &VAR_13->sgl[VAR_13->sg_cur];

 if (VAR_13->dir == VAR_0) {
  VAR_17 = VAR_7;
  VAR_18 = FUNC_1(VAR_15);
  VAR_19 = VAR_6;
  VAR_20 = 0;
 } else {
  VAR_17 = VAR_6;
  VAR_18 = 0;
  VAR_19 = VAR_7;
  VAR_20 = FUNC_1(VAR_15);
 }

 VAR_21 = FUNC_2(VAR_15);

 FUNC_3(VAR_17, VAR_12->reg_ch_base + VAR_10);
 FUNC_3(VAR_19, VAR_12->reg_ch_base + VAR_2);
 FUNC_3(VAR_18, VAR_12->reg_ch_base + VAR_9);
 FUNC_3(VAR_20, VAR_12->reg_ch_base + VAR_1);
 FUNC_3(VAR_21, VAR_12->reg_ch_base + VAR_8);


 FUNC_3(VAR_16, VAR_12->reg_ch_base + VAR_4);

 FUNC_3(VAR_16, VAR_12->reg_ch_base + VAR_3);

 FUNC_3(FUNC_0(VAR_12->chan_id), VAR_14->reg_base + VAR_11);
}
