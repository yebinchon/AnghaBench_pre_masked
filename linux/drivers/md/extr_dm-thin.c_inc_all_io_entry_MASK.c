
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int all_io_ds; } ;
struct dm_thin_endio_hook {int all_io_entry; } ;
struct bio {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (int ) ;
 struct dm_thin_endio_hook* FUNC_2 (struct bio*,int) ;

__attribute__((used)) static void FUNC_3(struct pool *VAR_1, struct bio *VAR_2)
{
 struct dm_thin_endio_hook *VAR_3;

 if (FUNC_0(VAR_2) == VAR_0)
  return;

 VAR_3 = FUNC_2(VAR_2, sizeof(struct dm_thin_endio_hook));
 VAR_3->all_io_entry = FUNC_1(VAR_1->all_io_ds);
}
