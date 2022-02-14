
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_fifo_chan {int size; int addr; } ;
typedef enum nvkm_object_map { ____Placeholder_nvkm_object_map } nvkm_object_map ;


 int VAR_0 ;
 struct nvkm_fifo_chan* FUNC_0 (struct nvkm_object*) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_object *VAR_1, void *VAR_2, u32 VAR_3,
     enum nvkm_object_map *VAR_4, u64 *VAR_5, u64 *VAR_6)
{
 struct nvkm_fifo_chan *VAR_7 = FUNC_0(VAR_1);
 *VAR_4 = VAR_0;
 *VAR_5 = VAR_7->addr;
 *VAR_6 = VAR_7->size;
 return 0;
}
