
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct nvkm_grctx {size_t* ucode; int ctxprog_max; size_t ctxprog_len; int ctxvals_pos; int mode; struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t*) ;
 size_t* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nvkm_grctx*) ;
 int FUNC_3 (struct nvkm_device*,int,size_t) ;

int
FUNC_4(struct nvkm_device *VAR_3, u32 *VAR_4)
{
 u32 *VAR_5 = FUNC_1(512 * 4, VAR_1), VAR_6;
 struct nvkm_grctx VAR_7 = {
  .device = VAR_3,
  .mode = VAR_2,
  .ucode = VAR_5,
  .ctxprog_max = 512,
 };

 if (!VAR_5)
  return -VAR_0;
 FUNC_2(&VAR_7);

 FUNC_3(VAR_3, 0x400324, 0);
 for (VAR_6 = 0; VAR_6 < VAR_7.ctxprog_len; VAR_6++)
  FUNC_3(VAR_3, 0x400328, VAR_5[VAR_6]);
 *VAR_4 = VAR_7.ctxvals_pos * 4;
 FUNC_0(VAR_5);
 return 0;
}
