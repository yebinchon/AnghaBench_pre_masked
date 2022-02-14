
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i915_syncmap {int bitmap; scalar_t__ parent; int prefix; scalar_t__ height; } ;


 int VAR_0 ;
 int FUNC_0 (struct i915_syncmap*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i915_syncmap**,int ,int) ;
 int FUNC_3 (struct i915_syncmap**,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,...) ;

__attribute__((used)) static int FUNC_6(struct i915_syncmap **VAR_1, u64 VAR_2, u32 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 if ((*VAR_1)->height) {
  FUNC_5("Inserting first context=%llx did not return leaf (height=%d, prefix=%llx\n",
         VAR_2, (*VAR_1)->height, (*VAR_1)->prefix);
  return -VAR_0;
 }

 if ((*VAR_1)->parent) {
  FUNC_5("Inserting first context=%llx created branches!\n",
         VAR_2);
  return -VAR_0;
 }

 if (FUNC_1((*VAR_1)->bitmap) != 1) {
  FUNC_5("First bitmap does not contain a single entry, found %x (count=%d)!\n",
         (*VAR_1)->bitmap, FUNC_1((*VAR_1)->bitmap));
  return -VAR_0;
 }

 VAR_4 = FUNC_0((*VAR_1), FUNC_4((*VAR_1)->bitmap), VAR_3);
 if (VAR_4)
  return VAR_4;

 if (!FUNC_2(VAR_1, VAR_2, VAR_3)) {
  FUNC_5("Lookup of first context=%llx/seqno=%x failed!\n",
         VAR_2, VAR_3);
  return -VAR_0;
 }

 return 0;
}
