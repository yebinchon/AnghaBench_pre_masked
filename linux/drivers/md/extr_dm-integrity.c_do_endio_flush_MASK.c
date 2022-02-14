
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_io {int fua; } ;
struct dm_integrity_c {int dummy; } ;
struct bio {int bi_status; } ;


 struct bio* FUNC_0 (struct dm_integrity_io*,int) ;
 int FUNC_1 (struct dm_integrity_c*) ;
 int FUNC_2 (struct dm_integrity_c*,struct bio*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct dm_integrity_c*,struct dm_integrity_io*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dm_integrity_c *VAR_0, struct dm_integrity_io *VAR_1)
{
 struct bio *VAR_2 = FUNC_0(VAR_1, sizeof(struct dm_integrity_io));

 if (FUNC_5(VAR_1->fua) && FUNC_3(!VAR_2->bi_status) && FUNC_3(!FUNC_1(VAR_0)))
  FUNC_4(VAR_0, VAR_1);
 else
  FUNC_2(VAR_0, VAR_2);
}
