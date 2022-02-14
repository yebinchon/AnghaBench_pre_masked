
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ttm_mem_reg {int num_pages; } ;
struct ttm_buffer_object {int dummy; } ;
struct nouveau_mem {int kind; TYPE_1__* vma; } ;
struct nouveau_channel {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nouveau_channel*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 struct nouveau_mem* FUNC_5 (struct ttm_mem_reg*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_channel *VAR_3, struct ttm_buffer_object *VAR_4,
    struct ttm_mem_reg *VAR_5, struct ttm_mem_reg *VAR_6)
{
 struct nouveau_mem *VAR_7 = FUNC_5(VAR_5);
 u64 VAR_8 = (VAR_6->num_pages << VAR_2);
 u64 VAR_9 = VAR_7->vma[0].addr;
 u64 VAR_10 = VAR_7->vma[1].addr;
 int VAR_11 = !!VAR_7->kind;
 int VAR_12 = !!FUNC_5(VAR_6)->kind;
 int VAR_13;

 while (VAR_8) {
  u32 VAR_14, VAR_15, VAR_16;

  VAR_13 = FUNC_2(VAR_3, 18 + 6 * (VAR_11 + VAR_12));
  if (VAR_13)
   return VAR_13;

  VAR_14 = FUNC_4(VAR_8, (u64)(4 * 1024 * 1024));
  VAR_15 = 16 * 4;
  VAR_16 = VAR_14 / VAR_15;

  if (VAR_11) {
   FUNC_0(VAR_3, VAR_1, 0x0200, 7);
   FUNC_1 (VAR_3, 0);
   FUNC_1 (VAR_3, 0);
   FUNC_1 (VAR_3, VAR_15);
   FUNC_1 (VAR_3, VAR_16);
   FUNC_1 (VAR_3, 1);
   FUNC_1 (VAR_3, 0);
   FUNC_1 (VAR_3, 0);
  } else {
   FUNC_0(VAR_3, VAR_1, 0x0200, 1);
   FUNC_1 (VAR_3, 1);
  }
  if (VAR_12) {
   FUNC_0(VAR_3, VAR_1, 0x021c, 7);
   FUNC_1 (VAR_3, 0);
   FUNC_1 (VAR_3, 0);
   FUNC_1 (VAR_3, VAR_15);
   FUNC_1 (VAR_3, VAR_16);
   FUNC_1 (VAR_3, 1);
   FUNC_1 (VAR_3, 0);
   FUNC_1 (VAR_3, 0);
  } else {
   FUNC_0(VAR_3, VAR_1, 0x021c, 1);
   FUNC_1 (VAR_3, 1);
  }

  FUNC_0(VAR_3, VAR_1, 0x0238, 2);
  FUNC_1 (VAR_3, FUNC_6(VAR_9));
  FUNC_1 (VAR_3, FUNC_6(VAR_10));
  FUNC_0(VAR_3, VAR_1, 0x030c, 8);
  FUNC_1 (VAR_3, FUNC_3(VAR_9));
  FUNC_1 (VAR_3, FUNC_3(VAR_10));
  FUNC_1 (VAR_3, VAR_15);
  FUNC_1 (VAR_3, VAR_15);
  FUNC_1 (VAR_3, VAR_15);
  FUNC_1 (VAR_3, VAR_16);
  FUNC_1 (VAR_3, 0x00000101);
  FUNC_1 (VAR_3, 0x00000000);
  FUNC_0(VAR_3, VAR_1, VAR_0, 1);
  FUNC_1 (VAR_3, 0);

  VAR_8 -= VAR_14;
  VAR_9 += VAR_14;
  VAR_10 += VAR_14;
 }

 return 0;
}
