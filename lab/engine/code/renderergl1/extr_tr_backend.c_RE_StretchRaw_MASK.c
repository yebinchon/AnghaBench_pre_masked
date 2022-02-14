
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
typedef int byte ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {int (* Milliseconds ) () ;int (* Printf ) (int ,char*,int,int,int) ;int (* Error ) (int ,char*,int,int) ;} ;
struct TYPE_6__ {scalar_t__ numIndexes; } ;
struct TYPE_5__ {int identityLight; int * scratchImage; int registered; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,int,int,int const*,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (float,int) ;
 int FUNC_10 (int,int) ;
 TYPE_4__* VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*,int,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,char*,int,int,int) ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;

void FUNC_15 (int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12, const byte *VAR_13, int VAR_14, qboolean VAR_15) {
 int VAR_16, VAR_17;
 int VAR_18, VAR_19;

 if ( !VAR_6.registered ) {
  return;
 }
 FUNC_4();

 if ( VAR_5.numIndexes ) {
  FUNC_1();
 }


 FUNC_8();

 VAR_18 = 0;
 if ( VAR_3->integer ) {
  VAR_18 = VAR_4.Milliseconds();
 }


 for ( VAR_16 = 0 ; ( 1 << VAR_16 ) < VAR_11 ; VAR_16++ ) {
 }
 for ( VAR_17 = 0 ; ( 1 << VAR_17 ) < VAR_12 ; VAR_17++ ) {
 }
 if ( ( 1 << VAR_16 ) != VAR_11 || ( 1 << VAR_17 ) != VAR_12) {
  VAR_4.Error (VAR_0, "Draw_StretchRaw: size not a power of 2: %i by %i", VAR_11, VAR_12);
 }

 FUNC_3 (VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
 FUNC_0( VAR_6.scratchImage[VAR_14] );

 if ( VAR_3->integer ) {
  VAR_19 = VAR_4.Milliseconds();
  VAR_4.Printf( VAR_2, "qglTexSubImage2D %i, %i: %i msec\n", VAR_11, VAR_12, VAR_19 - VAR_18 );
 }

 FUNC_2();

 FUNC_6( VAR_6.identityLight, VAR_6.identityLight, VAR_6.identityLight );

 FUNC_5 (VAR_1);
 FUNC_9 ( 0.5f / VAR_11, 0.5f / VAR_12 );
 FUNC_10 (VAR_7, VAR_8);
 FUNC_9 ( ( VAR_11 - 0.5f ) / VAR_11 , 0.5f / VAR_12 );
 FUNC_10 (VAR_7+VAR_9, VAR_8);
 FUNC_9 ( ( VAR_11 - 0.5f ) / VAR_11, ( VAR_12 - 0.5f ) / VAR_12 );
 FUNC_10 (VAR_7+VAR_9, VAR_8+VAR_10);
 FUNC_9 ( 0.5f / VAR_11, ( VAR_12 - 0.5f ) / VAR_12 );
 FUNC_10 (VAR_7, VAR_8+VAR_10);
 FUNC_7 ();
}
