
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int device; } ;
struct nvkm_fault {int nrpfb; int * buffer; TYPE_3__* func; TYPE_1__ subdev; } ;
struct TYPE_5__ {int (* init ) (int ) ;} ;
struct TYPE_6__ {TYPE_2__ buffer; } ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_fault *VAR_0)
{
 FUNC_0(VAR_0->subdev.device, 0x100a2c, 0x80000000, 0x80000000);
 VAR_0->func->buffer.init(VAR_0->buffer[0]);
 FUNC_1(&VAR_0->nrpfb);
}
