
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_4__ {unsigned int flags; unsigned int target_residency; unsigned int exit_latency; int (* enter ) (struct cpuidle_device*,struct cpuidle_driver*,int) ;int desc; int name; } ;
struct TYPE_3__ {void* mask; void* val; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char const*,int ) ;

__attribute__((used)) static inline void FUNC_1(int VAR_3, const char *VAR_4,
         unsigned int VAR_5,
         int (*VAR_6)(struct cpuidle_device *,
          struct cpuidle_driver *,
          int),
         unsigned int VAR_7,
         unsigned int VAR_8,
         u64 VAR_9, u64 VAR_10)
{
 FUNC_0(VAR_1[VAR_3].name, VAR_4, VAR_0);
 FUNC_0(VAR_1[VAR_3].desc, VAR_4, VAR_0);
 VAR_1[VAR_3].flags = VAR_5;
 VAR_1[VAR_3].target_residency = VAR_7;
 VAR_1[VAR_3].exit_latency = VAR_8;
 VAR_1[VAR_3].enter = VAR_6;

 VAR_2[VAR_3].val = VAR_9;
 VAR_2[VAR_3].mask = VAR_10;
}
