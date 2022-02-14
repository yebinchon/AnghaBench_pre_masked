
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;
struct csc_coef_yuv2rgb {int full_range; int bcb; int by; int bcr; int gcr; int gcb; int rcb; int gy; int ry; int rcr; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct dispc_device*,int ,int ,int,int) ;
 int FUNC_4 (struct dispc_device*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct dispc_device *VAR_0,
         enum omap_plane_id VAR_1,
         const struct csc_coef_yuv2rgb *VAR_2)
{


 FUNC_4(VAR_0, FUNC_2(VAR_1, 0), (FUNC_0(VAR_2->rcr, 26, 16) | FUNC_0(VAR_2->ry, 10, 0)));
 FUNC_4(VAR_0, FUNC_2(VAR_1, 1), (FUNC_0(VAR_2->gy, 26, 16) | FUNC_0(VAR_2->rcb, 10, 0)));
 FUNC_4(VAR_0, FUNC_2(VAR_1, 2), (FUNC_0(VAR_2->gcb, 26, 16) | FUNC_0(VAR_2->gcr, 10, 0)));
 FUNC_4(VAR_0, FUNC_2(VAR_1, 3), (FUNC_0(VAR_2->bcr, 26, 16) | FUNC_0(VAR_2->by, 10, 0)));
 FUNC_4(VAR_0, FUNC_2(VAR_1, 4), (FUNC_0(0, 26, 16) | FUNC_0(VAR_2->bcb, 10, 0)));

 FUNC_3(VAR_0, FUNC_1(VAR_1), VAR_2->full_range, 11, 11);


}
