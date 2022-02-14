
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* addr; } ;
struct intel_engine_cs {TYPE_1__ status_page; } ;


 size_t VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void
FUNC_1(const struct intel_engine_cs *VAR_1, int VAR_2)
{






 VAR_1->status_page.addr[VAR_0] = VAR_2;
 if (VAR_2)
  FUNC_0();
}
