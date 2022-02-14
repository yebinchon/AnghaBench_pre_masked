
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int fail_io; int list; int ref_count; } ;


 int FUNC_0 (struct dm_cache_metadata*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_0 ;

void FUNC_6(struct dm_cache_metadata *VAR_1)
{
 if (FUNC_5(&VAR_1->ref_count)) {
  FUNC_3(&VAR_0);
  FUNC_2(&VAR_1->list);
  FUNC_4(&VAR_0);

  if (!VAR_1->fail_io)
   FUNC_0(VAR_1);
  FUNC_1(VAR_1);
 }
}
