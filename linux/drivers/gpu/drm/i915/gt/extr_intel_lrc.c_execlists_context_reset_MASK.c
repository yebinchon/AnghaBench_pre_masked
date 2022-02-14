
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_context {int engine; int ring; } ;


 int FUNC_0 (struct intel_context*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct intel_context *VAR_0)
{
 FUNC_1(VAR_0->ring, 0);
 FUNC_0(VAR_0, VAR_0->engine);
}
