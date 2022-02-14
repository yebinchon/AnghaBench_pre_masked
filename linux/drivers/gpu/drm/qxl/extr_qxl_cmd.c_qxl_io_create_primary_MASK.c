
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qxl_surface_create {int type; int flags; struct qxl_device* mem; int stride; int height; int width; int format; } ;
struct qxl_device {struct qxl_bo* primary_bo; TYPE_3__* ram_header; } ;
struct TYPE_5__ {int base; } ;
struct TYPE_4__ {int stride; int height; int width; int format; } ;
struct qxl_bo {int is_primary; TYPE_2__ tbo; TYPE_3__* kptr; TYPE_1__ surf; } ;
struct TYPE_6__ {struct qxl_surface_create create_surface; } ;


 int FUNC_0 (char*,struct qxl_device*,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct qxl_bo*) ;
 int FUNC_2 (int *) ;
 struct qxl_device* FUNC_3 (struct qxl_device*,struct qxl_bo*,int ) ;
 int FUNC_4 (struct qxl_device*,int ,int ) ;

void FUNC_5(struct qxl_device *VAR_3, struct qxl_bo *VAR_4)
{
 struct qxl_surface_create *VAR_5;

 if (FUNC_1(VAR_3->primary_bo))
  return;

 FUNC_0("qdev %p, ram_header %p\n", VAR_3, VAR_3->ram_header);
 VAR_5 = &VAR_3->ram_header->create_surface;
 VAR_5->format = VAR_4->surf.format;
 VAR_5->width = VAR_4->surf.width;
 VAR_5->height = VAR_4->surf.height;
 VAR_5->stride = VAR_4->surf.stride;
 VAR_5->mem = FUNC_3(VAR_3, VAR_4, 0);

 FUNC_0("mem = %llx, from %p\n", VAR_5->mem, VAR_4->kptr);

 VAR_5->flags = VAR_1;
 VAR_5->type = VAR_2;

 FUNC_4(VAR_3, 0, VAR_0);
 VAR_3->primary_bo = VAR_4;
 VAR_3->primary_bo->is_primary = 1;
 FUNC_2(&VAR_3->primary_bo->tbo.base);
}
