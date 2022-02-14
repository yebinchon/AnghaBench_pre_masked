
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {scalar_t__ in_sync_hint; scalar_t__ region_count; int uuid; } ;
struct dm_dirty_log {struct log_c* context; } ;
typedef int region_t ;
typedef int pkg ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (struct log_c*,int ,int ,int *,int ,char*,size_t*) ;

__attribute__((used)) static int FUNC_1(struct dm_dirty_log *VAR_1, region_t *VAR_2)
{
 int VAR_3;
 size_t VAR_4;
 struct log_c *VAR_5 = VAR_1->context;
 struct {
  int64_t i;
  region_t r;
 } VAR_6;

 if (VAR_5->in_sync_hint >= VAR_5->region_count)
  return 0;

 VAR_4 = sizeof(VAR_6);
 VAR_3 = FUNC_0(VAR_5, VAR_5->uuid, VAR_0,
     ((void*)0), 0, (char *)&VAR_6, &VAR_4);

 *VAR_2 = VAR_6.r;
 return (VAR_3) ? VAR_3 : (int)VAR_6.i;
}
