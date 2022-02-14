
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * addr; } ;
struct intel_engine_cs {TYPE_1__ status_page; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline void
FUNC_4(struct intel_engine_cs *VAR_1, int VAR_2, u32 VAR_3)
{





 if (FUNC_3(VAR_0)) {
  FUNC_2();
  FUNC_1(&VAR_1->status_page.addr[VAR_2]);
  VAR_1->status_page.addr[VAR_2] = VAR_3;
  FUNC_1(&VAR_1->status_page.addr[VAR_2]);
  FUNC_2();
 } else {
  FUNC_0(VAR_1->status_page.addr[VAR_2], VAR_3);
 }
}
