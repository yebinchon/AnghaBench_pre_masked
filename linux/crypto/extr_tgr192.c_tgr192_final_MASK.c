
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tgr192_ctx {int nblocks; int count; int* hash; int c; int b; int a; } ;
struct shash_desc {int dummy; } ;
typedef int __le32 ;
typedef int __be64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int) ;
 struct tgr192_ctx* FUNC_3 (struct shash_desc*) ;
 int FUNC_4 (struct tgr192_ctx*,int*) ;
 int FUNC_5 (struct shash_desc*,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct shash_desc *VAR_0, u8 * VAR_1)
{
 struct tgr192_ctx *VAR_2 = FUNC_3(VAR_0);
 __be64 *VAR_3 = (__be64 *)VAR_1;
 __be64 *VAR_4;
 __le32 *VAR_5;
 u32 VAR_6, VAR_7, VAR_8;

 FUNC_5(VAR_0, ((void*)0), 0); ;

 VAR_7 = 0;
 VAR_6 = VAR_2->nblocks;
 if ((VAR_8 = VAR_6 << 6) < VAR_6) {
  VAR_7++;
 }
 VAR_7 += VAR_6 >> 26;
 VAR_6 = VAR_8;
 if ((VAR_8 = VAR_6 + VAR_2->count) < VAR_6) {
  VAR_7++;
 }
 VAR_6 = VAR_8;
 if ((VAR_8 = VAR_6 << 3) < VAR_6) {
  VAR_7++;
 }
 VAR_7 += VAR_6 >> 29;

 if (VAR_2->count < 56) {
  VAR_2->hash[VAR_2->count++] = 0x01;
  while (VAR_2->count < 56) {
   VAR_2->hash[VAR_2->count++] = 0;
  }
 } else {
  VAR_2->hash[VAR_2->count++] = 0x01;
  while (VAR_2->count < 64) {
   VAR_2->hash[VAR_2->count++] = 0;
  }
  FUNC_5(VAR_0, ((void*)0), 0); ;
  FUNC_2(VAR_2->hash, 0, 56);
 }

 VAR_5 = (__le32 *)&VAR_2->hash[56];
 VAR_5[0] = FUNC_1(VAR_8);
 VAR_5[1] = FUNC_1(VAR_7);

 FUNC_4(VAR_2, VAR_2->hash);

 VAR_4 = (__be64 *)VAR_2->hash;
 VAR_3[0] = VAR_4[0] = FUNC_0(VAR_2->a);
 VAR_3[1] = VAR_4[1] = FUNC_0(VAR_2->b);
 VAR_3[2] = VAR_4[2] = FUNC_0(VAR_2->c);

 return 0;
}
