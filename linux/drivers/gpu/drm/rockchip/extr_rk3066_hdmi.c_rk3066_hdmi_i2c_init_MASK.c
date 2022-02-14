
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3066_hdmi {int tmdsclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rk3066_hdmi*,int ,int,int ) ;
 int FUNC_1 (struct rk3066_hdmi*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rk3066_hdmi *VAR_6)
{
 int VAR_7;

 VAR_7 = (VAR_6->tmdsclk >> 2) / VAR_5;

 FUNC_1(VAR_6, VAR_1, VAR_7 & 0xFF);
 FUNC_1(VAR_6, VAR_0, (VAR_7 >> 8) & 0xFF);


 FUNC_0(VAR_6, VAR_3, VAR_2, 0);
 FUNC_1(VAR_6, VAR_4, VAR_2);
}
