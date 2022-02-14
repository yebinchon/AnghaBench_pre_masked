
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;
struct dispc_clock_info {int pck_div; int lck_div; int pck; int lck; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct dispc_device*,int,int ,int ) ;

void FUNC_2(struct dispc_device *VAR_0,
        enum omap_channel VAR_1,
        const struct dispc_clock_info *VAR_2)
{
 FUNC_0("lck = %lu (%u)\n", VAR_2->lck, VAR_2->lck_div);
 FUNC_0("pck = %lu (%u)\n", VAR_2->pck, VAR_2->pck_div);

 FUNC_1(VAR_0, VAR_1, VAR_2->lck_div,
      VAR_2->pck_div);
}
