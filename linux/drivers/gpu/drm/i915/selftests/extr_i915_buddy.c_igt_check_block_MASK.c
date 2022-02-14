
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i915_buddy_mm {int chunk_size; } ;
struct i915_buddy_block {scalar_t__ parent; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int,int) ;
 struct i915_buddy_block* FUNC_1 (struct i915_buddy_block*) ;
 int FUNC_2 (struct i915_buddy_block*) ;
 int FUNC_3 (struct i915_buddy_mm*,struct i915_buddy_block*) ;
 unsigned int FUNC_4 (struct i915_buddy_block*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct i915_buddy_mm *VAR_4,
      struct i915_buddy_block *VAR_5)
{
 struct i915_buddy_block *VAR_6;
 unsigned int VAR_7;
 u64 VAR_8;
 u64 VAR_9;
 int VAR_10 = 0;

 VAR_7 = FUNC_4(VAR_5);

 if (VAR_7 != VAR_1 &&
     VAR_7 != VAR_2 &&
     VAR_7 != VAR_3) {
  FUNC_6("block state mismatch\n");
  VAR_10 = -VAR_0;
 }

 VAR_8 = FUNC_3(VAR_4, VAR_5);
 VAR_9 = FUNC_2(VAR_5);

 if (VAR_8 < VAR_4->chunk_size) {
  FUNC_6("block size smaller than min size\n");
  VAR_10 = -VAR_0;
 }

 if (!FUNC_5(VAR_8)) {
  FUNC_6("block size not power of two\n");
  VAR_10 = -VAR_0;
 }

 if (!FUNC_0(VAR_8, VAR_4->chunk_size)) {
  FUNC_6("block size not aligned to min size\n");
  VAR_10 = -VAR_0;
 }

 if (!FUNC_0(VAR_9, VAR_4->chunk_size)) {
  FUNC_6("block offset not aligned to min size\n");
  VAR_10 = -VAR_0;
 }

 if (!FUNC_0(VAR_9, VAR_8)) {
  FUNC_6("block offset not aligned to block size\n");
  VAR_10 = -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_5);

 if (!VAR_6 && VAR_5->parent) {
  FUNC_6("buddy has gone fishing\n");
  VAR_10 = -VAR_0;
 }

 if (VAR_6) {
  if (FUNC_2(VAR_6) != (VAR_9 ^ VAR_8)) {
   FUNC_6("buddy has wrong offset\n");
   VAR_10 = -VAR_0;
  }

  if (FUNC_3(VAR_4, VAR_6) != VAR_8) {
   FUNC_6("buddy size mismatch\n");
   VAR_10 = -VAR_0;
  }

  if (FUNC_4(VAR_6) == VAR_7 &&
      VAR_7 == VAR_2) {
   FUNC_6("block and its buddy are free\n");
   VAR_10 = -VAR_0;
  }
 }

 return VAR_10;
}
