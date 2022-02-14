
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dispc_device*,int ,int,int,int) ;
 int FUNC_1 (struct dispc_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct dispc_device *VAR_4,
      enum omap_channel VAR_5,
      bool VAR_6)
{
 if (!FUNC_1(VAR_4, VAR_1))
  return;

 if (VAR_5 == VAR_3)
  FUNC_0(VAR_4, VAR_0, VAR_6, 18, 18);
 else if (VAR_5 == VAR_2)
  FUNC_0(VAR_4, VAR_0, VAR_6, 19, 19);
}
