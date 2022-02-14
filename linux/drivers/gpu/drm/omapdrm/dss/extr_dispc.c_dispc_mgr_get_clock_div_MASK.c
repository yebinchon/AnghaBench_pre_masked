
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;
struct dispc_clock_info {unsigned long lck_div; int pck_div; unsigned long lck; int pck; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct dispc_device*,int ,int,int) ;
 unsigned long FUNC_2 (struct dispc_device*) ;

int FUNC_3(struct dispc_device *VAR_0,
       enum omap_channel VAR_1,
       struct dispc_clock_info *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_2(VAR_0);

 VAR_2->lck_div = FUNC_1(VAR_0, FUNC_0(VAR_1), 23, 16);
 VAR_2->pck_div = FUNC_1(VAR_0, FUNC_0(VAR_1), 7, 0);

 VAR_2->lck = VAR_3 / VAR_2->lck_div;
 VAR_2->pck = VAR_2->lck / VAR_2->pck_div;

 return 0;
}
