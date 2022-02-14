
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_mdmac_device {scalar_t__ reg_base; } ;
struct uniphier_mdmac_chan {scalar_t__ reg_ch_base; int chan_id; struct uniphier_mdmac_device* mdev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int,int,int ,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct uniphier_mdmac_chan *VAR_4)
{
 struct uniphier_mdmac_device *VAR_5 = VAR_4->mdev;
 u32 VAR_6 = VAR_1;
 u32 VAR_7;


 FUNC_2(VAR_6, VAR_4->reg_ch_base + VAR_0);

 FUNC_2(VAR_3 | FUNC_0(VAR_4->chan_id),
        VAR_5->reg_base + VAR_2);





 return FUNC_1(VAR_4->reg_ch_base + VAR_0,
      VAR_7, VAR_7 & VAR_6, 0, 20);
}
