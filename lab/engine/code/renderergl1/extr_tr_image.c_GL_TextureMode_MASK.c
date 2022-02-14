
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ image_t ;
struct TYPE_11__ {scalar_t__ hardwareType; } ;
struct TYPE_10__ {int maximize; int minimize; int name; } ;
struct TYPE_9__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_8__ {int numImages; TYPE_1__** images; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char const*) ;
 TYPE_5__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_3__ VAR_10 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 TYPE_2__ VAR_11 ;

void FUNC_5( const char *VAR_12 ) {
 int VAR_13;
 image_t *VAR_14;

 for ( VAR_13=0 ; VAR_13< 6 ; VAR_13++ ) {
  if ( !FUNC_1( VAR_9[VAR_13].name, VAR_12 ) ) {
   break;
  }
 }



 if ( VAR_13 == 5 && VAR_6.hardwareType == VAR_0 ) {
  VAR_10.Printf( VAR_5, "Refusing to set trilinear on a voodoo.\n" );
  VAR_13 = 3;
 }


 if ( VAR_13 == 6 ) {
  VAR_10.Printf (VAR_5, "bad filter name\n");
  return;
 }

 VAR_8 = VAR_9[VAR_13].minimize;
 VAR_7 = VAR_9[VAR_13].maximize;


 for ( VAR_13 = 0 ; VAR_13 < VAR_11.numImages ; VAR_13++ ) {
  VAR_14 = VAR_11.images[ VAR_13 ];
  if ( VAR_14->flags & VAR_4 ) {
   FUNC_0 (VAR_14);
   FUNC_2(VAR_1, VAR_3, VAR_8);
   FUNC_2(VAR_1, VAR_2, VAR_7);
  }
 }
}
