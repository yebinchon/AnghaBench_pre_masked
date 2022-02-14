
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lanai_vcc {size_t vci; int * vbase; } ;
struct lanai_dev {scalar_t__ nbound; int conf1; int ** vccs; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct lanai_dev*) ;

__attribute__((used)) static inline void FUNC_2(struct lanai_dev *VAR_1,
 struct lanai_vcc *VAR_2)
{
 if (VAR_2->vbase == ((void*)0))
  return;
 FUNC_0("Unbinding vci %d\n", VAR_2->vci);
 VAR_2->vbase = ((void*)0);
 VAR_1->vccs[VAR_2->vci] = ((void*)0);







}
