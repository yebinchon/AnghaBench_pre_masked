
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_cache_metadata*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct dm_cache_metadata *VAR_1, bool *VAR_2)
{
 FUNC_0(VAR_1);
 *VAR_2 = !!FUNC_2(VAR_0, &VAR_1->flags);
 FUNC_1(VAR_1);

 return 0;
}
