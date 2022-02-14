
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
struct ttm_buffer_object {int dummy; } ;
struct ttm_bo_kmap_obj {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,void*,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (struct ttm_buffer_object*,unsigned long,int,struct ttm_bo_kmap_obj*) ;
 int FUNC_4 (struct ttm_bo_kmap_obj*) ;
 scalar_t__ FUNC_5 (struct ttm_bo_kmap_obj*,int*) ;

__attribute__((used)) static int FUNC_6(struct ttm_buffer_object *VAR_2,
     unsigned long VAR_3,
     uint8_t *VAR_4, int VAR_5, int VAR_6)
{
 unsigned long VAR_7 = VAR_3 >> VAR_0;
 unsigned long VAR_8 = VAR_5;
 int VAR_9;




 VAR_3 -= VAR_7 << VAR_0;
 do {
  unsigned long VAR_10 = FUNC_2(VAR_8, VAR_1 - VAR_3);
  struct ttm_bo_kmap_obj VAR_11;
  void *VAR_12;
  bool VAR_13;

  VAR_9 = FUNC_3(VAR_2, VAR_7, 1, &VAR_11);
  if (VAR_9)
   return VAR_9;

  VAR_12 = (uint8_t *)FUNC_5(&VAR_11, &VAR_13) + VAR_3;
  FUNC_0(VAR_13);
  if (VAR_6)
   FUNC_1(VAR_12, VAR_4, VAR_10);
  else
   FUNC_1(VAR_4, VAR_12, VAR_10);
  FUNC_4(&VAR_11);

  VAR_7++;
  VAR_4 += VAR_10;
  VAR_8 -= VAR_10;
  VAR_3 = 0;
 } while (VAR_8);

 return VAR_5;
}
