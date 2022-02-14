
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8367_port_ability {int speed; scalar_t__ duplex; scalar_t__ link; scalar_t__ rxpause; scalar_t__ txpause; scalar_t__ nway; scalar_t__ force_mode; } ;
struct rtl8366_smi {int dummy; } ;


 int FUNC_0 (struct rtl8366_smi*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct rtl8366_smi *VAR_7, int VAR_8,
       struct rtl8367_port_ability *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_10 = (VAR_2 |
  VAR_3 |
  VAR_6 |
  VAR_4 |
  VAR_1 |
  VAR_0 |
  VAR_5);

 VAR_11 = VAR_9->speed;
 VAR_11 |= VAR_9->force_mode ? VAR_2 : 0;
 VAR_11 |= VAR_9->nway ? VAR_3 : 0;
 VAR_11 |= VAR_9->txpause ? VAR_6 : 0;
 VAR_11 |= VAR_9->rxpause ? VAR_4 : 0;
 VAR_11 |= VAR_9->link ? VAR_1 : 0;
 VAR_11 |= VAR_9->duplex ? VAR_0 : 0;

 FUNC_0(VAR_7, FUNC_1(VAR_8), VAR_10, VAR_11);

 return 0;
}
