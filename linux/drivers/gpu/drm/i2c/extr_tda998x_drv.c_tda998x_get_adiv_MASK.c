
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tda998x_priv {int tmds_clock; TYPE_1__* hdmi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned long,unsigned int,unsigned long,int) ;

__attribute__((used)) static u8 FUNC_1(struct tda998x_priv *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4 = VAR_3 * 128;
 unsigned long VAR_5 = VAR_2->tmds_clock * 1000;
 u8 VAR_6;

 for (VAR_6 = VAR_1; VAR_6 != VAR_0; VAR_6--)
  if (VAR_5 > VAR_4 << VAR_6)
   break;

 FUNC_0(&VAR_2->hdmi->dev,
  "ser_clk=%luHz fs=%uHz min_aclk=%luHz adiv=%d\n",
  VAR_5, VAR_3, VAR_4, VAR_6);

 return VAR_6;
}
