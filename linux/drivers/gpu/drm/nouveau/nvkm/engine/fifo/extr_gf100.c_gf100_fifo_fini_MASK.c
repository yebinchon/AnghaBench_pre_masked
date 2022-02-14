
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_fifo {int dummy; } ;
struct TYPE_2__ {int work; } ;
struct gf100_fifo {TYPE_1__ recover; } ;


 int FUNC_0 (int *) ;
 struct gf100_fifo* FUNC_1 (struct nvkm_fifo*) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_fifo *VAR_0)
{
 struct gf100_fifo *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(&VAR_1->recover.work);
}
