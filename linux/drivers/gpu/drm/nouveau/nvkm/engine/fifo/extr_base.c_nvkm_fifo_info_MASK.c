
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_fifo {int nr; TYPE_1__* func; } ;
struct nvkm_engine {int dummy; } ;
struct TYPE_2__ {int (* info ) (struct nvkm_fifo*,int,int*) ;} ;


 int VAR_0 ;

 struct nvkm_fifo* FUNC_0 (struct nvkm_engine*) ;
 int FUNC_1 (struct nvkm_fifo*,int,int*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_engine *VAR_1, u64 VAR_2, u64 *VAR_3)
{
 struct nvkm_fifo *VAR_4 = FUNC_0(VAR_1);
 switch (VAR_2) {
 case 128: *VAR_3 = VAR_4->nr; return 0;
 default:
  if (VAR_4->func->info)
   return VAR_4->func->info(VAR_4, VAR_2, VAR_3);
  break;
 }
 return -VAR_0;
}
