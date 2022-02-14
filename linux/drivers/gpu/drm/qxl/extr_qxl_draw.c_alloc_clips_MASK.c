
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_release {int dummy; } ;
struct qxl_rect {int dummy; } ;
struct qxl_device {int dummy; } ;
struct qxl_clip_rects {int dummy; } ;
struct qxl_bo {int dummy; } ;


 int FUNC_0 (struct qxl_device*,struct qxl_release*,int,struct qxl_bo**) ;

__attribute__((used)) static int FUNC_1(struct qxl_device *VAR_0,
         struct qxl_release *VAR_1,
         unsigned int VAR_2,
         struct qxl_bo **VAR_3)
{
 int VAR_4 = sizeof(struct qxl_clip_rects) + sizeof(struct qxl_rect) * VAR_2;

 return FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3);
}
