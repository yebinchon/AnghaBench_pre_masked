
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline_cacheline {int active; int vaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_timeline_cacheline*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct intel_timeline_cacheline *VAR_1)
{
 FUNC_0(FUNC_4(VAR_1->vaddr, VAR_0));
 VAR_1->vaddr = FUNC_3(VAR_1->vaddr, VAR_0);

 if (FUNC_2(&VAR_1->active))
  FUNC_1(VAR_1);
}
