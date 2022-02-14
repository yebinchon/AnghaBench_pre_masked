
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_fifo_chan {scalar_t__ user; scalar_t__ size; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 struct nvkm_fifo_chan* FUNC_2 (struct nvkm_object*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_object *VAR_2, u64 VAR_3, u32 *VAR_4)
{
 struct nvkm_fifo_chan *VAR_5 = FUNC_2(VAR_2);
 if (FUNC_3(!VAR_5->user)) {
  VAR_5->user = FUNC_1(VAR_5->addr, VAR_5->size);
  if (!VAR_5->user)
   return -VAR_1;
 }
 if (FUNC_3(VAR_3 + 4 > VAR_5->size))
  return -VAR_0;
 *VAR_4 = FUNC_0(VAR_5->user + VAR_3);
 return 0;
}
