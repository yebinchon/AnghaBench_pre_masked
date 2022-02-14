
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int width; int height; int x; int y; } ;
struct TYPE_14__ {TYPE_4__ refdef; TYPE_2__* snap; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_10__ {int vidWidth; int vidHeight; } ;
struct TYPE_12__ {TYPE_3__ glconfig; } ;
struct TYPE_8__ {scalar_t__ pm_type; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;


 scalar_t__ VAR_0 ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1 (void) {
 int VAR_4;


 if ( VAR_1.snap->ps.pm_type == VAR_0 ) {
  VAR_4 = 100;
 } else {

  if (VAR_2.integer < 30) {
   FUNC_0 ("cg_viewsize","30");
   VAR_4 = 30;
  } else if (VAR_2.integer > 100) {
   FUNC_0 ("cg_viewsize","100");
   VAR_4 = 100;
  } else {
   VAR_4 = VAR_2.integer;
  }

 }
 VAR_1.refdef.width = VAR_3.glconfig.vidWidth*VAR_4/100;
 VAR_1.refdef.width &= ~1;

 VAR_1.refdef.height = VAR_3.glconfig.vidHeight*VAR_4/100;
 VAR_1.refdef.height &= ~1;

 VAR_1.refdef.x = (VAR_3.glconfig.vidWidth - VAR_1.refdef.width)/2;
 VAR_1.refdef.y = (VAR_3.glconfig.vidHeight - VAR_1.refdef.height)/2;
}
