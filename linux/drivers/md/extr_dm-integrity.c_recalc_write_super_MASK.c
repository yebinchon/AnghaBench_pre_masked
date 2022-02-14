
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_c {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dm_integrity_c*) ;
 int FUNC_1 (struct dm_integrity_c*) ;
 int FUNC_2 (struct dm_integrity_c*,char*,int) ;
 int FUNC_3 (struct dm_integrity_c*,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct dm_integrity_c *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1);
 if (FUNC_0(VAR_1))
  return;

 VAR_2 = FUNC_3(VAR_1, VAR_0, 0);
 if (FUNC_4(VAR_2))
  FUNC_2(VAR_1, "writing superblock", VAR_2);
}
