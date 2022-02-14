
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * addr; } ;
struct intel_engine_cs {TYPE_1__ status_page; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32
FUNC_1(const struct intel_engine_cs *VAR_0, int VAR_1)
{

 return FUNC_0(VAR_0->status_page.addr[VAR_1]);
}
