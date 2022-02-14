
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int id; } ;
typedef TYPE_5__ menucommon_s ;
struct TYPE_12__ {int selectedmodel; int modelpage; TYPE_4__* picbuttons; TYPE_2__* pics; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_10__ {TYPE_3__ generic; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_1__ generic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;

__attribute__((used)) static void FUNC_0( void* VAR_7, int VAR_8 ) {
 int VAR_9;

 if( VAR_8 != VAR_5 ) {
  return;
 }

 for( VAR_9 = 0; VAR_9 < (VAR_2 * VAR_1); VAR_9++ ) {
   VAR_6.pics[VAR_9].generic.flags &= ~VAR_3;
   VAR_6.picbuttons[VAR_9].generic.flags |= VAR_4;
 }


 VAR_9 = ((menucommon_s*)VAR_7)->id;
 VAR_6.pics[VAR_9].generic.flags |= VAR_3;
 VAR_6.picbuttons[VAR_9].generic.flags &= ~VAR_4;
 VAR_6.selectedmodel = VAR_6.modelpage * VAR_0 + VAR_9;
}
