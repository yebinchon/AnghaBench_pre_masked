
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {unsigned int sb_csum; } ;
typedef TYPE_1__ mdp_super_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(mdp_super_t *VAR_1)
{
 u64 VAR_2 = 0;
 u32 *VAR_3 = (u32*)VAR_1;
 int VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_5 = VAR_1->sb_csum;
 VAR_1->sb_csum = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0/4 ; VAR_4++)
  VAR_2 += VAR_3[VAR_4];
 VAR_6 = (VAR_2 & 0xffffffff) + (VAR_2>>32);
 VAR_1->sb_csum = VAR_5;

 return VAR_6;
}
