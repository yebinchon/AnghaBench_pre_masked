
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {int uuid; } ;
struct dm_dirty_log {struct log_c* context; } ;
typedef int region_t ;
typedef int pkg ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (struct log_c*,int ,int ,char*,int,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct dm_dirty_log *VAR_1,
          region_t VAR_2, int VAR_3)
{
 struct log_c *VAR_4 = VAR_1->context;
 struct {
  region_t r;
  int64_t i;
 } VAR_5;

 VAR_5.r = VAR_2;
 VAR_5.i = (int64_t)VAR_3;

 (void) FUNC_0(VAR_4, VAR_4->uuid, VAR_0,
        (char *)&VAR_5, sizeof(VAR_5), ((void*)0), ((void*)0));





 return;
}
