
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u64 ;
struct shash_desc {int dummy; } ;
struct md5_state {int byte_count; int * hash; scalar_t__ block; } ;
typedef int __le64 ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct md5_state*) ;
 int FUNC_4 (int *,char const*,int) ;
 struct md5_state* FUNC_5 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_6(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct md5_state *VAR_2 = FUNC_5(VAR_0);
 const unsigned int VAR_3 = VAR_2->byte_count & 0x3f;
 const u8 *VAR_4 = (const u8 *)VAR_2->block;
 u8 *VAR_5 = (u8 *)VAR_4 + VAR_3;
 int VAR_6 = 55 - VAR_3;
 __le64 *VAR_7 = (__le64 *)((char *)VAR_2->block + 56);
 __le32 *VAR_8 = (__le32 *)VAR_1;

 *VAR_5++ = 0x80;

 if (VAR_6 < 0) {
  FUNC_2(VAR_5, 0x00, VAR_6 + sizeof (u64));
  FUNC_4(VAR_2->hash, VAR_4, 1);
  VAR_5 = (char *)VAR_2->block;
  VAR_6 = 56;
 }

 FUNC_2(VAR_5, 0, VAR_6);
 *VAR_7 = FUNC_1(VAR_2->byte_count << 3);
 FUNC_4(VAR_2->hash, VAR_4, 1);

 VAR_8[0] = FUNC_0(VAR_2->hash[0]);
 VAR_8[1] = FUNC_0(VAR_2->hash[1]);
 VAR_8[2] = FUNC_0(VAR_2->hash[2]);
 VAR_8[3] = FUNC_0(VAR_2->hash[3]);

 FUNC_3(VAR_2);
 return 0;
}
