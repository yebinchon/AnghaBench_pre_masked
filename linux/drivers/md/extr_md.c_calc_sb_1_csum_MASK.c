
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u32 ;
struct mdp_superblock_1 {int sb_csum; int max_dev; } ;
typedef int __le32 ;
typedef int __le16 ;


 int FUNC_0 (unsigned long long) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __le32 FUNC_3(struct mdp_superblock_1 *VAR_0)
{
 __le32 VAR_1;
 u32 VAR_2;
 unsigned long long VAR_3;
 int VAR_4 = 256 + FUNC_2(VAR_0->max_dev)*2;
 __le32 *VAR_5 = (__le32*)VAR_0;

 VAR_1 = VAR_0->sb_csum;
 VAR_0->sb_csum = 0;
 VAR_3 = 0;
 for (; VAR_4 >= 4; VAR_4 -= 4)
  VAR_3 += FUNC_2(*VAR_5++);

 if (VAR_4 == 2)
  VAR_3 += FUNC_1(*(__le16*) VAR_5);

 VAR_2 = (VAR_3 & 0xffffffff) + (VAR_3 >> 32);
 VAR_0->sb_csum = VAR_1;
 return FUNC_0(VAR_2);
}
