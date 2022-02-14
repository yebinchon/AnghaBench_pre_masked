
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nvkm_outp {TYPE_3__* disp; } ;
struct nvkm_gpio {int dummy; } ;
struct TYPE_13__ {TYPE_5__* conn; } ;
struct nvkm_dp {int hpd; TYPE_6__ outp; } ;
struct TYPE_14__ {struct nvkm_gpio* gpio; } ;
struct TYPE_11__ {scalar_t__ type; } ;
struct TYPE_12__ {TYPE_4__ info; int hpd; } ;
struct TYPE_8__ {TYPE_7__* device; } ;
struct TYPE_9__ {TYPE_1__ subdev; } ;
struct TYPE_10__ {TYPE_2__ engine; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct nvkm_dp* FUNC_1 (struct nvkm_outp*) ;
 int FUNC_2 (struct nvkm_dp*,int) ;
 int FUNC_3 (struct nvkm_gpio*,int ,int ,int) ;
 int FUNC_4 (struct nvkm_gpio*,int ,int ,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct nvkm_outp *VAR_2)
{
 struct nvkm_gpio *VAR_3 = VAR_2->disp->engine.subdev.device->gpio;
 struct nvkm_dp *VAR_4 = FUNC_1(VAR_2);

 FUNC_6(&VAR_4->outp.conn->hpd);





 if (VAR_4->outp.conn->info.type == VAR_0) {
  int VAR_5 = FUNC_3(VAR_3, 0, VAR_1, 0xff);
  if (VAR_5 == 0)
   FUNC_4(VAR_3, 0, VAR_1, 0xff, 1);
  FUNC_0(300);




  if (!FUNC_2(VAR_4, 1) && VAR_5 == 0)
   FUNC_4(VAR_3, 0, VAR_1, 0xff, 0);
 } else {
  FUNC_2(VAR_4, 1);
 }

 FUNC_5(&VAR_4->hpd);
}
