
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8327_port_cfg {int speed; scalar_t__ txpause; scalar_t__ rxpause; scalar_t__ duplex; int force_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




__attribute__((used)) static u32
FUNC_0(struct ar8327_port_cfg *VAR_9)
{
 u32 VAR_10;

 if (!VAR_9->force_link)
  return VAR_4;

 VAR_10 = VAR_8 | VAR_6;
 VAR_10 |= VAR_9->duplex ? VAR_3 : 0;
 VAR_10 |= VAR_9->rxpause ? VAR_5 : 0;
 VAR_10 |= VAR_9->txpause ? VAR_7 : 0;

 switch (VAR_9->speed) {
 case 130:
  VAR_10 |= VAR_2;
  break;
 case 129:
  VAR_10 |= VAR_1;
  break;
 case 128:
  VAR_10 |= VAR_0;
  break;
 }

 return VAR_10;
}
