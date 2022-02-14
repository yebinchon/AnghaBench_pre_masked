
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct intel_context {int timeline; TYPE_1__* engine; int ring; } ;
struct TYPE_3__ {int gt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct intel_context *VAR_1)
{
 VAR_1->ring = FUNC_5(VAR_1->engine);
 if (!VAR_1->ring)
  return -VAR_0;

 FUNC_0(VAR_1->timeline);
 VAR_1->timeline = FUNC_3(VAR_1->engine->gt, ((void*)0));
 if (FUNC_1(VAR_1->timeline)) {
  FUNC_4(VAR_1->engine);
  return FUNC_2(VAR_1->timeline);
 }

 FUNC_6(VAR_1->timeline);

 return 0;
}
