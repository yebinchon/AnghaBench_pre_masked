
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct journal_sector {int dummy; } ;
struct dm_integrity_c {TYPE_1__* sb; } ;
struct TYPE_2__ {unsigned int log2_sectors_per_block; } ;


 scalar_t__ VAR_0 ;
 struct journal_sector* FUNC_0 (struct dm_integrity_c*,unsigned int,unsigned int) ;
 int FUNC_1 (struct dm_integrity_c*,unsigned int,unsigned int,int,char*) ;

__attribute__((used)) static struct journal_sector *FUNC_2(struct dm_integrity_c *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 VAR_3 <<= VAR_1->sb->log2_sectors_per_block;

 VAR_3 += VAR_0;

 FUNC_1(VAR_1, VAR_2, VAR_3, 0, "access_journal_data");

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
