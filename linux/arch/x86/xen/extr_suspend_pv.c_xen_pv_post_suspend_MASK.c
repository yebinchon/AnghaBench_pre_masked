
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* mfn; } ;
struct TYPE_5__ {TYPE_1__ domU; } ;
struct TYPE_6__ {TYPE_2__ console; void* store_mfn; int shared_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int * VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_3__* VAR_4 ;
 int FUNC_8 () ;

void FUNC_9(int VAR_5)
{
 FUNC_5();
 FUNC_4(VAR_0, VAR_4->shared_info);
 VAR_1 = (void *)FUNC_2(VAR_0);
 FUNC_7();

 if (VAR_5) {
  VAR_4->store_mfn =
   FUNC_3(VAR_4->store_mfn);
  VAR_4->console.domU.mfn =
   FUNC_3(VAR_4->console.domU.mfn);
 } else {




  FUNC_8();
 }

 FUNC_6();
}
