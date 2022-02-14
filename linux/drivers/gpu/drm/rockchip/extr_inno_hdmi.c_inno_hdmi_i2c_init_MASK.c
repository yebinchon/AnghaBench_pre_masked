
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inno_hdmi {int tmds_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inno_hdmi*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct inno_hdmi *VAR_6)
{
 int VAR_7;

 VAR_7 = (VAR_6->tmds_rate >> 2) / VAR_4;

 FUNC_0(VAR_6, VAR_1, VAR_7 & 0xFF);
 FUNC_0(VAR_6, VAR_0, (VAR_7 >> 8) & 0xFF);


 FUNC_0(VAR_6, VAR_2, 0);
 FUNC_0(VAR_6, VAR_3, VAR_5);
}
