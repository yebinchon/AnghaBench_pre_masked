
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int integer; } ;
struct TYPE_17__ {char* string; } ;
struct TYPE_16__ {char const* string; } ;
struct TYPE_15__ {char* string; } ;
struct TYPE_14__ {char const* string; int modified; } ;
struct TYPE_13__ {char* string; } ;
struct TYPE_12__ {char* string; } ;
struct TYPE_11__ {char* string; } ;
struct TYPE_10__ {char* string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int (*) ()) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (char*,char const*,int) ;
 int VAR_4 ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 () ;
 int FUNC_10 (char const*,char const*) ;
 scalar_t__ FUNC_11 (char const*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (char const*,char const*) ;
 char* FUNC_18 () ;
 char* FUNC_19 () ;
 char* FUNC_20 () ;
 int * FUNC_21 (char*,char*) ;
 char* FUNC_22 () ;
 char* FUNC_23 () ;
 TYPE_9__* VAR_5 ;
 TYPE_8__* VAR_6 ;
 TYPE_7__* VAR_7 ;
 TYPE_6__* VAR_8 ;
 void* VAR_9 ;
 TYPE_5__* VAR_10 ;
 TYPE_4__* VAR_11 ;
 TYPE_3__* VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_2__* VAR_14 ;
 TYPE_1__* VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_24( const char *VAR_18 )
{
 const char *VAR_19;

 FUNC_3( "----- FS_Startup -----\n" );

 VAR_13 = 0;

 VAR_9 = FUNC_6( "fs_debug", "0", 0 );
 VAR_8 = FUNC_6 ("fs_basepath", FUNC_20(), VAR_1|VAR_2 );
 VAR_7 = FUNC_6 ("fs_basegame", "", VAR_1 );
 VAR_19 = FUNC_19();
 if (!VAR_19 || !VAR_19[0]) {
  VAR_19 = VAR_8->string;
 }
 VAR_12 = FUNC_6 ("fs_homepath", VAR_19, VAR_1|VAR_2 );
 VAR_10 = FUNC_6 ("fs_game", "", VAR_1|VAR_3 );

 if (!VAR_18[0]) {
  FUNC_5( "com_basegame" );
 }

 if (!FUNC_10(VAR_10->string, VAR_18)) {



  FUNC_5( "fs_game" );
 }

 if (FUNC_11(VAR_18)) {
  FUNC_2( VAR_4, "Invalid com_basegame '%s'", VAR_18 );
 }
 if (FUNC_11(VAR_7->string)) {
  FUNC_2( VAR_4, "Invalid fs_basegame '%s'", VAR_7->string );
 }
 if (FUNC_11(VAR_10->string)) {
  FUNC_2( VAR_4, "Invalid fs_game '%s'", VAR_10->string );
 }


 VAR_11 = FUNC_6 ("fs_gogpath", FUNC_22(), VAR_1|VAR_2 );
 if (VAR_11->string[0]) {
  FUNC_7( VAR_11->string, VAR_18 );
 }
 VAR_15 = FUNC_6 ("fs_temporarypath", VAR_12->string, VAR_1|VAR_2 );
 if (VAR_15->string[0]) {
  FUNC_7( VAR_15->string, VAR_18 );
 }


 VAR_14 = FUNC_6 ("fs_steampath", FUNC_23(), VAR_1|VAR_2 );
 if (VAR_14->string[0]) {
  FUNC_7( VAR_14->string, VAR_18 );
 }
 if (VAR_8->string[0]) {
  FUNC_7( VAR_8->string, VAR_18 );
 }
 if (VAR_12->string[0] && FUNC_17(VAR_12->string,VAR_8->string)) {
  FUNC_8 ( VAR_12->string );
  FUNC_7 ( VAR_12->string, VAR_18 );
 }


 if ( VAR_7->string[0] && FUNC_17( VAR_7->string, VAR_18 ) ) {
  if (VAR_11->string[0]) {
   FUNC_7(VAR_11->string, VAR_7->string);
  }
  if (VAR_14->string[0]) {
   FUNC_7(VAR_14->string, VAR_7->string);
  }
  if (VAR_8->string[0]) {
   FUNC_7(VAR_8->string, VAR_7->string);
  }
  if (VAR_12->string[0] && FUNC_17(VAR_12->string,VAR_8->string)) {
   FUNC_7(VAR_12->string, VAR_7->string);
  }
 }


 if ( VAR_10->string[0] && FUNC_17( VAR_10->string, VAR_18 ) ) {
  if (VAR_11->string[0]) {
   FUNC_7(VAR_11->string, VAR_10->string);
  }
  if (VAR_14->string[0]) {
   FUNC_7(VAR_14->string, VAR_10->string);
  }
  if (VAR_8->string[0]) {
   FUNC_7(VAR_8->string, VAR_10->string);
  }
  if (VAR_12->string[0] && FUNC_17(VAR_12->string,VAR_8->string)) {
   FUNC_7(VAR_12->string, VAR_10->string);
  }
 }


 if (!VAR_5->integer) {
  FUNC_4(VAR_0);
  if (VAR_10->string[0]) {
   FUNC_1(VAR_10->string);
  }
 }



 FUNC_0 ("path", FUNC_13);
 FUNC_0 ("dir", FUNC_9 );
 FUNC_0 ("fdir", FUNC_12 );
 FUNC_0 ("touchFile", FUNC_15 );
 FUNC_0 ("which", FUNC_16 );



 FUNC_14();


 FUNC_13();

 VAR_10->modified = VAR_17;

 FUNC_3( "----------------------\n" );






 FUNC_3( "%d files in pk3 files\n", VAR_13 );
}
