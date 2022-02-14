
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {scalar_t__ class; int whitelist; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct intel_engine_cs *VAR_1)
{
 if (VAR_1->class != VAR_0)
  return;

 FUNC_0(&VAR_1->whitelist);
}
