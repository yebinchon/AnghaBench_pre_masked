
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ base; } ;
struct module {TYPE_1__ core_layout; } ;



__attribute__((used)) static inline int
FUNC_0 (const struct module *VAR_0, uint64_t VAR_1)
{
 return VAR_1 - (uint64_t) VAR_0->core_layout.base < VAR_0->core_layout.size;
}
