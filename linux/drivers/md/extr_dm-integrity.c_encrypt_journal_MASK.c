
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_completion {int dummy; } ;
struct dm_integrity_c {scalar_t__ journal_xor; } ;


 void FUNC_0 (struct dm_integrity_c*,int,unsigned int,unsigned int,struct journal_completion*) ;
 void FUNC_1 (struct dm_integrity_c*,int,unsigned int,unsigned int,struct journal_completion*) ;

__attribute__((used)) static void FUNC_2(struct dm_integrity_c *VAR_0, bool VAR_1, unsigned VAR_2,
       unsigned VAR_3, struct journal_completion *VAR_4)
{
 if (VAR_0->journal_xor)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
