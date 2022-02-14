
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_context {int pin_count; } ;


 int FUNC_0 (struct intel_context*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct intel_context *VAR_0)
{
 if (FUNC_2(FUNC_1(&VAR_0->pin_count)))
  return 0;

 return FUNC_0(VAR_0);
}
