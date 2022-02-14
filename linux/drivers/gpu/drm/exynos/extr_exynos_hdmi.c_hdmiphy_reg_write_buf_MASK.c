
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hdmi_context {scalar_t__ regs_hdmiphy; scalar_t__ hdmiphy_port; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int const*,int) ;
 int FUNC_1 (int const,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hdmi_context *VAR_1,
   u32 VAR_2, const u8 *VAR_3, u32 VAR_4)
{
 if ((VAR_2 + VAR_4) > 32)
  return -VAR_0;

 if (VAR_1->hdmiphy_port) {
  int VAR_5;

  VAR_5 = FUNC_0(VAR_1->hdmiphy_port, VAR_3, VAR_4);
  if (VAR_5 == VAR_4)
   return 0;
  return VAR_5;
 } else {
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   FUNC_1(VAR_3[VAR_6], VAR_1->regs_hdmiphy +
    ((VAR_2 + VAR_6)<<2));
  return 0;
 }
}
