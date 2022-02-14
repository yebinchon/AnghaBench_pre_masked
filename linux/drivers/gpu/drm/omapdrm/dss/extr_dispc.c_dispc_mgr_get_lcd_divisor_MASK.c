
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dispc_device {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct dispc_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct dispc_device *VAR_0,
          enum omap_channel VAR_1, int *VAR_2,
          int *VAR_3)
{
 u32 VAR_4;
 VAR_4 = FUNC_2(VAR_0, FUNC_0(VAR_1));
 *VAR_2 = FUNC_1(VAR_4, 23, 16);
 *VAR_3 = FUNC_1(VAR_4, 7, 0);
}
