
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_event_map {scalar_t__ encoding; } ;
struct TYPE_2__ {struct perf_event_map**** cache_map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct perf_event_map const* FUNC_0 (int ) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static const struct perf_event_map *FUNC_1(u64 VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;
 const struct perf_event_map *VAR_12;

 if (!VAR_7->cache_map)
  return FUNC_0(-VAR_3);

 VAR_9 = (VAR_8 >> 0) & 0xff;
 if (VAR_9 >= VAR_4)
  return FUNC_0(-VAR_2);

 VAR_10 = (VAR_8 >> 8) & 0xff;
 if (VAR_10 >= VAR_5)
  return FUNC_0(-VAR_2);

 VAR_11 = (VAR_8 >> 16) & 0xff;
 if (VAR_11 >= VAR_6)
  return FUNC_0(-VAR_2);

 VAR_12 = &((*VAR_7->cache_map)[VAR_9][VAR_10][VAR_11]);

 if (VAR_12->encoding == VAR_1)
  return FUNC_0(-VAR_3);

 if (VAR_12->encoding == VAR_0)
  return FUNC_0(-VAR_2);

 return VAR_12;
}
