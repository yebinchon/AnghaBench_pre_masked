
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mips_perf_event {scalar_t__ cntr_mask; } ;
struct TYPE_2__ {struct mips_perf_event**** cache_event_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mips_perf_event const* FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static const struct mips_perf_event *FUNC_1(u64 VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;
 const struct mips_perf_event *VAR_10;

 VAR_7 = (VAR_6 >> 0) & 0xff;
 if (VAR_7 >= VAR_2)
  return FUNC_0(-VAR_0);

 VAR_8 = (VAR_6 >> 8) & 0xff;
 if (VAR_8 >= VAR_3)
  return FUNC_0(-VAR_0);

 VAR_9 = (VAR_6 >> 16) & 0xff;
 if (VAR_9 >= VAR_4)
  return FUNC_0(-VAR_0);

 VAR_10 = &((*VAR_5.cache_event_map)
     [VAR_7]
     [VAR_8]
     [VAR_9]);

 if (VAR_10->cntr_mask == 0)
  return FUNC_0(-VAR_1);

 return VAR_10;

}
