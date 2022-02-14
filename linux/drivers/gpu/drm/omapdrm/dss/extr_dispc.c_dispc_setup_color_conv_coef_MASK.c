
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dispc_device {TYPE_1__* feat; } ;
struct csc_coef_yuv2rgb {int member_0; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_9; int member_8; int member_1; } ;
struct csc_coef_rgb2yuv {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; int member_9; } ;
struct TYPE_2__ {scalar_t__ has_writeback; } ;


 int FUNC_0 (struct dispc_device*) ;
 int FUNC_1 (struct dispc_device*,int,struct csc_coef_yuv2rgb const*) ;
 int FUNC_2 (struct dispc_device*,struct csc_coef_rgb2yuv const*) ;

__attribute__((used)) static void FUNC_3(struct dispc_device *VAR_0)
{
 int VAR_1;
 int VAR_2 = FUNC_0(VAR_0);


 const struct csc_coef_yuv2rgb VAR_3 = {
  298, 0, 409,
  298, -100, -208,
  298, 516, 0,
  0,
 };


 const struct csc_coef_rgb2yuv VAR_4 = {
   66, 129, 25,
  -38, -74, 112,
  112, -94, -18,
  0,
 };

 for (VAR_1 = 1; VAR_1 < VAR_2; VAR_1++)
  FUNC_1(VAR_0, VAR_1, &VAR_3);

 if (VAR_0->feat->has_writeback)
  FUNC_2(VAR_0, &VAR_4);
}
