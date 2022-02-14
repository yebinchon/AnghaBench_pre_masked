
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_sector {int mac; } ;
struct dm_integrity_c {int journal_mac; } ;
typedef int __u8 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct journal_sector* FUNC_0 (struct dm_integrity_c*,unsigned int,unsigned int) ;
 int FUNC_1 (struct dm_integrity_c*,char*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *,unsigned int) ;
 int FUNC_4 (int *,int *,unsigned int) ;
 int FUNC_5 (struct dm_integrity_c*,unsigned int,int *) ;

__attribute__((used)) static void FUNC_6(struct dm_integrity_c *VAR_4, unsigned VAR_5, bool VAR_6)
{
 __u8 VAR_7[VAR_3];
 unsigned VAR_8;

 if (!VAR_4->journal_mac)
  return;

 FUNC_5(VAR_4, VAR_5, VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  struct journal_sector *VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_8);

  if (FUNC_2(VAR_6))
   FUNC_4(&VAR_9->mac, VAR_7 + (VAR_8 * VAR_2), VAR_2);
  else {
   if (FUNC_3(&VAR_9->mac, VAR_7 + (VAR_8 * VAR_2), VAR_2))
    FUNC_1(VAR_4, "journal mac", -VAR_0);
  }
 }
}
