
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {scalar_t__ fail_io; } ;
typedef int flags_mutator ;


 int VAR_0 ;
 int FUNC_0 (struct dm_cache_metadata*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (struct dm_cache_metadata*) ;
 int FUNC_3 (struct dm_cache_metadata*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct dm_cache_metadata *VAR_3, bool VAR_4)
{
 int VAR_5 = -VAR_0;
 flags_mutator VAR_6 = (VAR_4 ? VAR_2 :
     VAR_1);

 FUNC_0(VAR_3);
 if (VAR_3->fail_io)
  goto out;

 VAR_5 = FUNC_3(VAR_3, VAR_6);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_2(VAR_3);
out:
 FUNC_1(VAR_3);
 return VAR_5;
}
