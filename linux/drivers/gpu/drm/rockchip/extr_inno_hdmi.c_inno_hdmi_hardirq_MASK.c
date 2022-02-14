
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct inno_hdmi {scalar_t__ i2c; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inno_hdmi*,int ,int,int) ;
 int FUNC_1 (struct inno_hdmi*,int ) ;
 int FUNC_2 (struct inno_hdmi*) ;
 int VAR_3 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct inno_hdmi *VAR_6 = VAR_5;
 irqreturn_t VAR_7 = VAR_1;
 u8 VAR_8;

 if (VAR_6->i2c)
  VAR_7 = FUNC_2(VAR_6);

 VAR_8 = FUNC_1(VAR_6, VAR_0);
 if (VAR_8 & VAR_3) {
  FUNC_0(VAR_6, VAR_0, VAR_3, VAR_3);
  VAR_7 = VAR_2;
 }

 return VAR_7;
}
