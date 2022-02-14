
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_fault {int nrpfb; int * buffer; TYPE_2__* func; } ;
struct TYPE_3__ {int (* init ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ buffer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_fault *VAR_0)
{

 VAR_0->func->buffer.init(VAR_0->buffer[0]);
 FUNC_0(&VAR_0->nrpfb);
}
