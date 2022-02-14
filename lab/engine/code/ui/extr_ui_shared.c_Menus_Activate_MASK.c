
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {scalar_t__* soundName; scalar_t__ onOpen; TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;
struct TYPE_9__ {TYPE_2__* parent; } ;
typedef TYPE_3__ itemDef_t ;
struct TYPE_10__ {int (* startBackgroundTrack ) (scalar_t__*,scalar_t__*) ;} ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;

void FUNC_3(menuDef_t *VAR_3) {
 VAR_3->window.flags |= (VAR_1 | VAR_2);
 if (VAR_3->onOpen) {
  itemDef_t VAR_4;
  VAR_4.parent = VAR_3;
  FUNC_1(&VAR_4, VAR_3->onOpen);
 }

 if (VAR_3->soundName && *VAR_3->soundName) {

  VAR_0->startBackgroundTrack(VAR_3->soundName, VAR_3->soundName);
 }

 FUNC_0();

}
