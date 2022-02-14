
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;
struct csc_coef_rgb2yuv {int full_range; int cbb; int cbr; int cbg; int crg; int crb; int yb; int crr; int yr; int yg; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;
 int VAR_0 ;
 int FUNC_3 (struct dispc_device*,int ,int ,int,int) ;
 int FUNC_4 (struct dispc_device*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct dispc_device *VAR_1,
        const struct csc_coef_rgb2yuv *VAR_2)
{
 const enum omap_plane_id VAR_3 = VAR_0;



 FUNC_4(VAR_1, FUNC_2(VAR_3, 0), (FUNC_0(VAR_2->yg, 26, 16) | FUNC_0(VAR_2->yr, 10, 0)));
 FUNC_4(VAR_1, FUNC_2(VAR_3, 1), (FUNC_0(VAR_2->crr, 26, 16) | FUNC_0(VAR_2->yb, 10, 0)));
 FUNC_4(VAR_1, FUNC_2(VAR_3, 2), (FUNC_0(VAR_2->crb, 26, 16) | FUNC_0(VAR_2->crg, 10, 0)));
 FUNC_4(VAR_1, FUNC_2(VAR_3, 3), (FUNC_0(VAR_2->cbg, 26, 16) | FUNC_0(VAR_2->cbr, 10, 0)));
 FUNC_4(VAR_1, FUNC_2(VAR_3, 4), (FUNC_0(0, 26, 16) | FUNC_0(VAR_2->cbb, 10, 0)));

 FUNC_3(VAR_1, FUNC_1(VAR_3), VAR_2->full_range, 11, 11);


}
