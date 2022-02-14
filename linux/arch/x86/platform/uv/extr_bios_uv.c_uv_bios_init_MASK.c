
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct uv_systab {int dummy; } ;
struct TYPE_4__ {scalar_t__ revision; int size; int signature; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_7(void)
{
 VAR_3 = ((void*)0);
 if ((VAR_4 == VAR_0) ||
     !VAR_4 || FUNC_0()) {
  FUNC_3("UV: UVsystab: missing\n");
  return;
 }

 VAR_3 = FUNC_1(VAR_4, sizeof(struct uv_systab));
 if (!VAR_3 || FUNC_6(VAR_3->signature, VAR_1, 4)) {
  FUNC_4("UV: UVsystab: bad signature!\n");
  FUNC_2(VAR_3);
  return;
 }


 if (VAR_3->revision >= VAR_2) {
  int VAR_5 = VAR_3->size;

  FUNC_2(VAR_3);
  VAR_3 = FUNC_1(VAR_4, VAR_5);
  if (!VAR_3) {
   FUNC_4("UV: UVsystab: ioremap(%d) failed!\n", VAR_5);
   return;
  }
 }
 FUNC_5("UV: UVsystab: Revision:%x\n", VAR_3->revision);
}
