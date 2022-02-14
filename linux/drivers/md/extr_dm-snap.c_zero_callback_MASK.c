
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int dummy; } ;
struct bio {int bi_status; struct dm_snapshot* bi_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_snapshot*) ;
 int FUNC_1 (struct bio*) ;

__attribute__((used)) static void FUNC_2(int VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct bio *VAR_4 = VAR_3;
 struct dm_snapshot *VAR_5 = VAR_4->bi_private;

 FUNC_0(VAR_5);
 VAR_4->bi_status = VAR_2 ? VAR_0 : 0;
 FUNC_1(VAR_4);
}
