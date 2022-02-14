
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int context_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_5, const struct intel_engine_cs *VAR_6)
{
 if (!FUNC_0(VAR_0))
  return;

 VAR_5 += VAR_2 * VAR_3;
 VAR_5 += VAR_6->context_size;

 FUNC_1(VAR_5, VAR_4, VAR_1);
}
