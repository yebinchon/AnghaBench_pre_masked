
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_device {TYPE_1__* func; } ;
struct io_mapping {int dummy; } ;
struct TYPE_2__ {int (* resource_size ) (struct nvkm_device*,int) ;int (* resource_addr ) (struct nvkm_device*,int) ;} ;


 struct io_mapping* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;

__attribute__((used)) static inline struct io_mapping *
FUNC_3(struct nvkm_device *VAR_0)
{
 return FUNC_0(VAR_0->func->resource_addr(VAR_0, 1),
        VAR_0->func->resource_size(VAR_0, 1));
}
