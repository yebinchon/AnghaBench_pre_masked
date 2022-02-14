
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cinematicName; } ;
typedef TYPE_1__ windowDef_t ;
struct TYPE_5__ {int (* playCinematic ) (scalar_t__,int ,int ,int ,int ) ;int (* stopCinematic ) (int) ;} ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(windowDef_t *VAR_1) {
 if (VAR_1) {
  if (VAR_1->cinematicName) {
   int VAR_2 = VAR_0->playCinematic(VAR_1->cinematicName, 0, 0, 0, 0);
   VAR_0->stopCinematic(VAR_2);
  }
 }
}
