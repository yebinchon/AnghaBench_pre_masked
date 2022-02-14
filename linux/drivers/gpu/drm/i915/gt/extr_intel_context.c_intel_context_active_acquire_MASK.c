
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_context {int active; int engine; int gem_context; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct intel_context *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->active);
 if (VAR_1)
  return VAR_1;


 if (!FUNC_3(VAR_0->gem_context)) {
  VAR_1 = FUNC_1(&VAR_0->active,
             VAR_0->engine);
  if (VAR_1) {
   FUNC_2(&VAR_0->active);
   return VAR_1;
  }
 }

 return 0;
}
