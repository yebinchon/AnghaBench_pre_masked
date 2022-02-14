
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qxl_head {int y; int x; int width; int height; } ;
struct qxl_device {TYPE_2__* monitors_config; TYPE_1__* ram_header; } ;
struct TYPE_4__ {int count; struct qxl_head* heads; } ;
struct TYPE_3__ {int monitors_config; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,int,int,int) ;
 int FUNC_2 (struct qxl_device*) ;

__attribute__((used)) static void FUNC_3(struct qxl_device *VAR_0)
{
 int VAR_1;

 FUNC_0(!VAR_0->ram_header->monitors_config);

 if (VAR_0->monitors_config->count == 0)
  return;

 for (VAR_1 = 0 ; VAR_1 < VAR_0->monitors_config->count ; ++VAR_1) {
  struct qxl_head *VAR_2 = &VAR_0->monitors_config->heads[VAR_1];

  if (VAR_2->y > 8192 || VAR_2->x > 8192 ||
      VAR_2->width > 8192 || VAR_2->height > 8192) {
   FUNC_1("head %d wrong: %dx%d+%d+%d\n",
      VAR_1, VAR_2->width, VAR_2->height,
      VAR_2->x, VAR_2->y);
   return;
  }
 }
 FUNC_2(VAR_0);
}
