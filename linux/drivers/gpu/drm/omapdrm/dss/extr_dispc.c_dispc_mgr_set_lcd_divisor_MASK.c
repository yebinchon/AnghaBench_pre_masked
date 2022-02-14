
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dispc_device {int core_clk_rate; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int,int) ;
 int VAR_1 ;
 int FUNC_3 (struct dispc_device*) ;
 int FUNC_4 (struct dispc_device*,int ) ;
 int FUNC_5 (struct dispc_device*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct dispc_device *VAR_2,
          enum omap_channel VAR_3, u16 VAR_4,
          u16 VAR_5)
{
 FUNC_0(VAR_4 < 1);
 FUNC_0(VAR_5 < 1);

 FUNC_5(VAR_2, FUNC_1(VAR_3),
   FUNC_2(VAR_4, 23, 16) | FUNC_2(VAR_5, 7, 0));

 if (!FUNC_4(VAR_2, VAR_0) &&
   VAR_3 == VAR_1)
  VAR_2->core_clk_rate = FUNC_3(VAR_2) / VAR_4;
}
