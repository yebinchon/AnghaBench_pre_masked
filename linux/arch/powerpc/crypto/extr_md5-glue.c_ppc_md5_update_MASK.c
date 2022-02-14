
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct md5_state {int byte_count; scalar_t__ block; int hash; } ;


 int FUNC_0 (char*,int const*,unsigned int) ;
 int FUNC_1 (int ,int const*,unsigned int) ;
 struct md5_state* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_0, const u8 *VAR_1,
   unsigned int VAR_2)
{
 struct md5_state *VAR_3 = FUNC_2(VAR_0);
 const unsigned int VAR_4 = VAR_3->byte_count & 0x3f;
 unsigned int VAR_5 = 64 - VAR_4;
 const u8 *VAR_6 = VAR_1;

 VAR_3->byte_count += VAR_2;

 if (VAR_5 > VAR_2) {
  FUNC_0((char *)VAR_3->block + VAR_4, VAR_6, VAR_2);
  return 0;
 }

 if (VAR_4) {
  FUNC_0((char *)VAR_3->block + VAR_4, VAR_6, VAR_5);
  FUNC_1(VAR_3->hash, (const u8 *)VAR_3->block, 1);
  VAR_2 -= VAR_5;
  VAR_6 += VAR_5;
 }

 if (VAR_2 > 63) {
  FUNC_1(VAR_3->hash, VAR_6, VAR_2 >> 6);
  VAR_6 += VAR_2 & ~0x3f;
  VAR_2 &= 0x3f;
 }

 FUNC_0((char *)VAR_3->block, VAR_6, VAR_2);
 return 0;
}
