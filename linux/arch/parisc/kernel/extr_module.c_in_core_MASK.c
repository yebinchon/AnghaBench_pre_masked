
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* base; int size; } ;
struct module {TYPE_1__ core_layout; } ;



__attribute__((used)) static inline int FUNC_0(struct module *VAR_0, void *VAR_1)
{
 return (VAR_1 >= VAR_0->core_layout.base &&
  VAR_1 <= (VAR_0->core_layout.base + VAR_0->core_layout.size));
}
