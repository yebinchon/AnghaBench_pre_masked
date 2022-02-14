
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dispc_device {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct dispc_device*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct dispc_device *VAR_1,
      enum omap_channel VAR_2,
      u8 VAR_3)
{
 int VAR_4;

 switch (VAR_3) {
 case 12:
  VAR_4 = 0;
  break;
 case 16:
  VAR_4 = 1;
  break;
 case 18:
  VAR_4 = 2;
  break;
 case 24:
  VAR_4 = 3;
  break;
 default:
  FUNC_0();
  return;
 }

 FUNC_1(VAR_1, VAR_2, VAR_0, VAR_4);
}
