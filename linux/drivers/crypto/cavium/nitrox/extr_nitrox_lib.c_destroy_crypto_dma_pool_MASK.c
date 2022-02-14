
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_device {int * ctx_pool; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nitrox_device *VAR_0)
{
 if (!VAR_0->ctx_pool)
  return;

 FUNC_0(VAR_0->ctx_pool);
 VAR_0->ctx_pool = ((void*)0);
}
