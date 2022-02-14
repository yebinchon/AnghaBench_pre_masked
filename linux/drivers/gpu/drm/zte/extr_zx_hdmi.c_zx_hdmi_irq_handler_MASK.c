
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zx_hdmi {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct zx_hdmi*,int ) ;
 int FUNC_1 (struct zx_hdmi*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 struct zx_hdmi *VAR_8 = VAR_7;
 u8 VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_4);


 if (VAR_9 & VAR_5) {
  u8 VAR_10;

  VAR_10 = FUNC_0(VAR_8, VAR_1);
  FUNC_1(VAR_8, VAR_1, VAR_10);

  if (VAR_10 & VAR_0)
   return VAR_3;
 }

 return VAR_2;
}
