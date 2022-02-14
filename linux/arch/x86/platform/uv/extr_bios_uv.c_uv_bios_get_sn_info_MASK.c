
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union partition_info_u {int hub_version; long partition_id; long coherence_id; long region_size; void* val; } ;
typedef void* u64 ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,void*,void*,int ,int ) ;

s64 FUNC_1(int VAR_2, int *VAR_3, long *VAR_4, long *VAR_5,
  long *VAR_6, long *VAR_7)
{
 s64 VAR_8;
 u64 VAR_9, VAR_10;
 union partition_info_u VAR_11;

 VAR_8 = FUNC_0(VAR_1, VAR_2,
    (u64)(&VAR_9), (u64)(&VAR_10), 0, 0);
 if (VAR_8 != VAR_0)
  return VAR_8;

 VAR_11.val = VAR_9;
 if (VAR_3)
  *VAR_3 = VAR_11.hub_version;
 if (VAR_4)
  *VAR_4 = VAR_11.partition_id;
 if (VAR_5)
  *VAR_5 = VAR_11.coherence_id;
 if (VAR_6)
  *VAR_6 = VAR_11.region_size;
 if (VAR_7)
  *VAR_7 = VAR_10;
 return VAR_8;
}
