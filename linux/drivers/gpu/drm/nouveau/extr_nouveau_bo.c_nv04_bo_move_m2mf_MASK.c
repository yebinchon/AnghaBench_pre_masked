
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ttm_mem_reg {int start; int num_pages; } ;
struct ttm_buffer_object {int dummy; } ;
struct nouveau_channel {int dummy; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nouveau_channel*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 int FUNC_3 (struct ttm_buffer_object*,struct nouveau_channel*,struct ttm_mem_reg*) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_channel *VAR_6, struct ttm_buffer_object *VAR_7,
    struct ttm_mem_reg *VAR_8, struct ttm_mem_reg *VAR_9)
{
 u32 VAR_10 = VAR_8->start << VAR_4;
 u32 VAR_11 = VAR_9->start << VAR_4;
 u32 VAR_12 = VAR_9->num_pages;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_6, 3);
 if (VAR_13)
  return VAR_13;

 FUNC_0(VAR_6, VAR_3, VAR_0, 2);
 FUNC_1 (VAR_6, FUNC_3(VAR_7, VAR_6, VAR_8));
 FUNC_1 (VAR_6, FUNC_3(VAR_7, VAR_6, VAR_9));

 VAR_12 = VAR_9->num_pages;
 while (VAR_12) {
  int VAR_14 = (VAR_12 > 2047) ? 2047 : VAR_12;

  VAR_13 = FUNC_2(VAR_6, 11);
  if (VAR_13)
   return VAR_13;

  FUNC_0(VAR_6, VAR_3,
     VAR_2, 8);
  FUNC_1 (VAR_6, VAR_10);
  FUNC_1 (VAR_6, VAR_11);
  FUNC_1 (VAR_6, VAR_5);
  FUNC_1 (VAR_6, VAR_5);
  FUNC_1 (VAR_6, VAR_5);
  FUNC_1 (VAR_6, VAR_14);
  FUNC_1 (VAR_6, 0x00000101);
  FUNC_1 (VAR_6, 0x00000000);
  FUNC_0(VAR_6, VAR_3, VAR_1, 1);
  FUNC_1 (VAR_6, 0);

  VAR_12 -= VAR_14;
  VAR_10 += (VAR_5 * VAR_14);
  VAR_11 += (VAR_5 * VAR_14);
 }

 return 0;
}
