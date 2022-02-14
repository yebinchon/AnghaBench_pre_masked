
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct ras_manager {scalar_t__ use; TYPE_1__ head; int node; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct ras_manager *VAR_0)
{
 if (VAR_0 && --VAR_0->use == 0)
  FUNC_1(&VAR_0->node);
 if (VAR_0 && VAR_0->use < 0) {
   FUNC_0("RAS ERROR: Unbalance obj(%s) use\n", VAR_0->head.name);
 }
}
