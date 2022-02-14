
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_memory {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mn; } ;
struct TYPE_3__ {scalar_t__ length; } ;


 TYPE_2__* FUNC_0 (struct nvkm_memory*) ;

__attribute__((used)) static u64
FUNC_1(struct nvkm_memory *VAR_0)
{
 return (u64)FUNC_0(VAR_0)->mn->length << 12;
}
