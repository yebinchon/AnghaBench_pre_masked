
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_open_hash {int dummy; } ;
struct drm_hash_item {unsigned long key; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_open_hash*,struct drm_hash_item*) ;
 unsigned long FUNC_2 (unsigned long,int) ;

int FUNC_3(struct drm_open_hash *VAR_1, struct drm_hash_item *VAR_2,
         unsigned long VAR_3, int VAR_4, int VAR_5,
         unsigned long VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = (1UL << VAR_4) - 1;
 unsigned long VAR_9, VAR_10;

 VAR_10 = FUNC_2(VAR_3, VAR_4);
 VAR_9 = VAR_10;
 do {
  VAR_2->key = (VAR_10 << VAR_5) + VAR_6;
  VAR_7 = FUNC_1(VAR_1, VAR_2);
  if (VAR_7)
   VAR_10 = (VAR_10 + 1) & VAR_8;
 } while(VAR_7 && (VAR_10 != VAR_9));

 if (VAR_7) {
  FUNC_0("Available key bit space exhausted\n");
  return -VAR_0;
 }
 return 0;
}
