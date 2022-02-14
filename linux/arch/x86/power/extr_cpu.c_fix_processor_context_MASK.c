
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
typedef TYPE_2__ tss_desc ;
struct desc_struct {int dummy; } ;
struct TYPE_10__ {int active_mm; } ;
struct TYPE_7__ {int x86_tss; } ;
struct TYPE_9__ {TYPE_1__ tss; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_6__* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_5__* FUNC_3 (int) ;
 struct desc_struct* FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,struct desc_struct*,int) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct desc_struct*,size_t,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_14(void)
{
 int VAR_4 = FUNC_11();
 FUNC_10(VAR_4, &FUNC_3(VAR_4)->tss.x86_tss);
 if (FUNC_0(VAR_2))
  FUNC_1();

 FUNC_6();
 FUNC_8(VAR_3->active_mm);
 FUNC_5();

 FUNC_2();


 FUNC_7(VAR_4);
}
