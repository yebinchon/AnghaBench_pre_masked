
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef unsigned int u32 ;
struct shash_desc {int dummy; } ;
struct octeon_cop2_state {int dummy; } ;
struct md5_state {int byte_count; char const* block; } ;


 int FUNC_0 (char*,char const*,unsigned int const) ;
 int FUNC_1 (struct octeon_cop2_state*,unsigned long) ;
 unsigned long FUNC_2 (struct octeon_cop2_state*) ;
 int FUNC_3 (struct md5_state*) ;
 int FUNC_4 (struct md5_state*) ;
 int FUNC_5 (char const*) ;
 struct md5_state* FUNC_6 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_7(struct shash_desc *VAR_0, const u8 *VAR_1,
        unsigned int VAR_2)
{
 struct md5_state *VAR_3 = FUNC_6(VAR_0);
 const u32 VAR_4 = sizeof(VAR_3->block) - (VAR_3->byte_count & 0x3f);
 struct octeon_cop2_state VAR_5;
 unsigned long VAR_6;

 VAR_3->byte_count += VAR_2;

 if (VAR_4 > VAR_2) {
  FUNC_0((char *)VAR_3->block + (sizeof(VAR_3->block) - VAR_4),
         VAR_1, VAR_2);
  return 0;
 }

 FUNC_0((char *)VAR_3->block + (sizeof(VAR_3->block) - VAR_4), VAR_1,
        VAR_4);

 VAR_6 = FUNC_2(&VAR_5);
 FUNC_4(VAR_3);

 FUNC_5(VAR_3->block);
 VAR_1 += VAR_4;
 VAR_2 -= VAR_4;

 while (VAR_2 >= sizeof(VAR_3->block)) {
  FUNC_5(VAR_1);
  VAR_1 += sizeof(VAR_3->block);
  VAR_2 -= sizeof(VAR_3->block);
 }

 FUNC_3(VAR_3);
 FUNC_1(&VAR_5, VAR_6);

 FUNC_0(VAR_3->block, VAR_1, VAR_2);

 return 0;
}
