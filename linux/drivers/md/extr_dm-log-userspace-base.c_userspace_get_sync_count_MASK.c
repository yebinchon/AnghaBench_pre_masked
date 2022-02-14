
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int sync_count ;
struct log_c {scalar_t__ region_count; scalar_t__ in_sync_hint; int uuid; } ;
struct dm_dirty_log {struct log_c* context; } ;
typedef int region_t ;


 int VAR_0 ;
 int FUNC_0 (struct log_c*,int ,int ,int *,int ,char*,size_t*) ;

__attribute__((used)) static region_t FUNC_1(struct dm_dirty_log *VAR_1)
{
 int VAR_2;
 size_t VAR_3;
 uint64_t VAR_4;
 struct log_c *VAR_5 = VAR_1->context;

 VAR_3 = sizeof(VAR_4);
 VAR_2 = FUNC_0(VAR_5, VAR_5->uuid, VAR_0,
     ((void*)0), 0, (char *)&VAR_4, &VAR_3);

 if (VAR_2)
  return 0;

 if (VAR_4 >= VAR_5->region_count)
  VAR_5->in_sync_hint = VAR_5->region_count;

 return (region_t)VAR_4;
}
