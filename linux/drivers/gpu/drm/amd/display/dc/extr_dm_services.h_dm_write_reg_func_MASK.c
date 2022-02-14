
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dc_context {TYPE_1__* perf_trace; int cgs_device; } ;
struct TYPE_2__ {int write_count; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(
 const struct dc_context *VAR_0,
 uint32_t VAR_1,
 uint32_t VAR_2,
 const char *VAR_3)
{






 FUNC_1(VAR_0->cgs_device, VAR_1, VAR_2);
 FUNC_2(&VAR_0->perf_trace->write_count, VAR_1, VAR_2);
}
