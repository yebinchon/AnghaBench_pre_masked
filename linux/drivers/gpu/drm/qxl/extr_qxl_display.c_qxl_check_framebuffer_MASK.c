
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qxl_device {int dummy; } ;
struct TYPE_2__ {int height; int width; } ;
struct qxl_bo {TYPE_1__ surf; } ;


 int FUNC_0 (struct qxl_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct qxl_device *VAR_0,
     struct qxl_bo *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->surf.width, VAR_1->surf.height);
}
