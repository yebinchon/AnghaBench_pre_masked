
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int device; } ;
struct nvkm_fault {TYPE_3__ subdev; scalar_t__* buffer; TYPE_2__* func; int nrpfb; } ;
struct TYPE_4__ {int (* fini ) (scalar_t__) ;} ;
struct TYPE_5__ {TYPE_1__ buffer; } ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_fault *VAR_0)
{
 FUNC_1(&VAR_0->nrpfb);
 if (VAR_0->buffer[0])
  VAR_0->func->buffer.fini(VAR_0->buffer[0]);
 FUNC_0(VAR_0->subdev.device, 0x100a34, 0x80000000, 0x80000000);
}
