
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_hdmi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dw_hdmi*,int ) ;
 int FUNC_1 (struct dw_hdmi*,int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct dw_hdmi *VAR_1, int VAR_2)
{
 u32 VAR_3;

 while ((VAR_3 = FUNC_0(VAR_1, VAR_0) & 0x3) == 0) {
  if (VAR_2-- == 0)
   return 0;
  FUNC_2(1000);
 }
 FUNC_1(VAR_1, VAR_3, VAR_0);

 return 1;
}
