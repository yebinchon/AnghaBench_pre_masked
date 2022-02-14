
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vci_t ;
struct lanai_vcc {size_t vci; int * vbase; } ;
struct lanai_dev {struct lanai_vcc** vccs; int conf1; int nbound; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int * FUNC_1 (struct lanai_dev*,size_t) ;
 int FUNC_2 (struct lanai_dev*) ;
 int FUNC_3 (struct lanai_dev*) ;

__attribute__((used)) static inline void FUNC_4(struct lanai_dev *VAR_1,
 struct lanai_vcc *VAR_2, vci_t VAR_3)
{
 if (VAR_2->vbase != ((void*)0))
  return;
 FUNC_0("Binding vci %d\n", VAR_3);
 VAR_2->vbase = FUNC_1(VAR_1, VAR_3);
 VAR_1->vccs[VAR_2->vci = VAR_3] = VAR_2;
}
