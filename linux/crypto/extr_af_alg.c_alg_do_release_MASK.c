
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct af_alg_type {int owner; int (* release ) (void*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(const struct af_alg_type *VAR_0, void *VAR_1)
{
 if (!VAR_0)
  return;

 VAR_0->release(VAR_1);
 FUNC_0(VAR_0->owner);
}
