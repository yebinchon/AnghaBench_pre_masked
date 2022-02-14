
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pl08x_phy_chan {scalar_t__ id; scalar_t__ reg_config; scalar_t__ reg_control; scalar_t__ ftdmac020; } ;
struct pl08x_driver_data {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pl08x_driver_data *VAR_10,
 struct pl08x_phy_chan *VAR_11)
{
 u32 VAR_12;


 if (VAR_11->ftdmac020) {

  VAR_12 = FUNC_1(VAR_11->reg_config);
  VAR_12 |= (VAR_0 |
   VAR_1 |
   VAR_2);
  FUNC_2(VAR_12, VAR_11->reg_config);


  VAR_12 = FUNC_1(VAR_11->reg_control);
  VAR_12 &= ~VAR_4;
  VAR_12 |= VAR_3;
  FUNC_2(VAR_12, VAR_11->reg_control);


  FUNC_2(FUNC_0(VAR_11->id) | FUNC_0(VAR_11->id + 16),
         VAR_10->base + VAR_8);
  FUNC_2(FUNC_0(VAR_11->id), VAR_10->base + VAR_9);

  return;
 }

 VAR_12 = FUNC_1(VAR_11->reg_config);
 VAR_12 &= ~(VAR_5 | VAR_6 |
   VAR_7);
 FUNC_2(VAR_12, VAR_11->reg_config);

 FUNC_2(FUNC_0(VAR_11->id), VAR_10->base + VAR_8);
 FUNC_2(FUNC_0(VAR_11->id), VAR_10->base + VAR_9);
}
