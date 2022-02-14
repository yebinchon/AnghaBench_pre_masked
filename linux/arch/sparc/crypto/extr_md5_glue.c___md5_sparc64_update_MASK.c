
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct md5_state {unsigned int byte_count; int const* block; int hash; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int const*,unsigned int const) ;
 int FUNC_1 (int const*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct md5_state *VAR_1, const u8 *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = 0;

 VAR_1->byte_count += VAR_3;
 if (VAR_4) {
  VAR_5 = VAR_0 - VAR_4;
  FUNC_1((u8 *)VAR_1->block + VAR_4, VAR_2, VAR_5);
  FUNC_0(VAR_1->hash, (u8 *)VAR_1->block, 1);
 }
 if (VAR_3 - VAR_5 >= VAR_0) {
  const unsigned int VAR_6 = (VAR_3 - VAR_5) / VAR_0;

  FUNC_0(VAR_1->hash, VAR_2 + VAR_5, VAR_6);
  VAR_5 += VAR_6 * VAR_0;
 }

 FUNC_1(VAR_1->block, VAR_2 + VAR_5, VAR_3 - VAR_5);
}
