
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl08x_phy_chan {scalar_t__ reg_config; int id; scalar_t__ reg_busy; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct pl08x_phy_chan *VAR_1)
{
 unsigned int VAR_2;


 if (VAR_1->reg_busy) {
  VAR_2 = FUNC_1(VAR_1->reg_busy);
  return !!(VAR_2 & FUNC_0(VAR_1->id));
 }
 VAR_2 = FUNC_1(VAR_1->reg_config);
 return VAR_2 & VAR_0;
}
