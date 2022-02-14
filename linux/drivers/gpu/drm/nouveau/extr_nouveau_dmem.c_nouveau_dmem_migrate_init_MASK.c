
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int oclass; } ;
struct TYPE_8__ {int chan; TYPE_1__ copy; } ;
struct nouveau_drm {TYPE_4__ ttm; TYPE_3__* dmem; } ;
struct TYPE_6__ {int chan; int copy_func; } ;
struct TYPE_7__ {TYPE_2__ migrate; } ;


 int VAR_0 ;




 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct nouveau_drm *VAR_2)
{
 switch (VAR_2->ttm.copy.oclass) {
 case 131:
 case 130:
 case 128:
 case 129:
  VAR_2->dmem->migrate.copy_func = VAR_1;
  VAR_2->dmem->migrate.chan = VAR_2->ttm.chan;
  return 0;
 default:
  break;
 }
 return -VAR_0;
}
