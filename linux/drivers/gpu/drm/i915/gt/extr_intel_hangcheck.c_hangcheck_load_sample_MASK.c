
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int dummy; } ;
struct hangcheck {void* head; void* ring; int acthd; } ;


 void* FUNC_0 (struct intel_engine_cs*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct intel_engine_cs*) ;

__attribute__((used)) static void FUNC_2(struct intel_engine_cs *VAR_2,
      struct hangcheck *VAR_3)
{
 VAR_3->acthd = FUNC_1(VAR_2);
 VAR_3->ring = FUNC_0(VAR_2, VAR_1);
 VAR_3->head = FUNC_0(VAR_2, VAR_0);
}
