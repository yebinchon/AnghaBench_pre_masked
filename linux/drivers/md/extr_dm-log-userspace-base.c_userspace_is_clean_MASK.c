
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct log_c {int uuid; } ;
struct dm_dirty_log {struct log_c* context; } ;
typedef int region_t ;
typedef int region64 ;
typedef int is_clean ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (struct log_c*,int ,int ,char*,int,char*,size_t*) ;

__attribute__((used)) static int FUNC_1(struct dm_dirty_log *VAR_1, region_t VAR_2)
{
 int VAR_3;
 uint64_t VAR_4 = (uint64_t)VAR_2;
 int64_t VAR_5;
 size_t VAR_6;
 struct log_c *VAR_7 = VAR_1->context;

 VAR_6 = sizeof(VAR_5);
 VAR_3 = FUNC_0(VAR_7, VAR_7->uuid, VAR_0,
     (char *)&VAR_4, sizeof(VAR_4),
     (char *)&VAR_5, &VAR_6);

 return (VAR_3) ? 0 : (int)VAR_5;
}
