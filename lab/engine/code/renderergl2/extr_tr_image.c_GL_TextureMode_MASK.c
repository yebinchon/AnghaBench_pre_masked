
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int texnum; } ;
typedef TYPE_1__ image_t ;
struct TYPE_10__ {scalar_t__ hardwareType; } ;
struct TYPE_9__ {int maximize; int minimize; int name; } ;
struct TYPE_8__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_7__ {int numImages; TYPE_1__** images; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char const*) ;
 TYPE_5__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_3__ VAR_11 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_2__ VAR_12 ;

void FUNC_4( const char *VAR_13 ) {
 int VAR_14;
 image_t *VAR_15;

 for ( VAR_14=0 ; VAR_14< 6 ; VAR_14++ ) {
  if ( !FUNC_0( VAR_10[VAR_14].name, VAR_13 ) ) {
   break;
  }
 }



 if ( VAR_14 == 5 && VAR_7.hardwareType == VAR_0 ) {
  VAR_11.Printf( VAR_6, "Refusing to set trilinear on a voodoo.\n" );
  VAR_14 = 3;
 }


 if ( VAR_14 == 6 ) {
  VAR_11.Printf (VAR_6, "bad filter name\n");
  return;
 }

 VAR_9 = VAR_10[VAR_14].minimize;
 VAR_8 = VAR_10[VAR_14].maximize;


 for ( VAR_14 = 0 ; VAR_14 < VAR_12.numImages ; VAR_14++ ) {
  VAR_15 = VAR_12.images[ VAR_14 ];
  if ( VAR_15->flags & VAR_5 && !(VAR_15->flags & VAR_4)) {
   FUNC_1(VAR_15->texnum, VAR_1, VAR_3, VAR_9);
   FUNC_1(VAR_15->texnum, VAR_1, VAR_2, VAR_8);
  }
 }
}
