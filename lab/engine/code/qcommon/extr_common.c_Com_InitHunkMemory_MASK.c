
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int integer; } ;
typedef TYPE_1__ cvar_t ;
typedef int byte ;
struct TYPE_6__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int) ;
 TYPE_1__* FUNC_3 (char*,int ,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int,int) ;
 TYPE_2__* VAR_10 ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;

void FUNC_8( void ) {
 cvar_t *VAR_14;
 int VAR_15;
 char *VAR_16 = ((void*)0);





 if (FUNC_5() != 0) {
  FUNC_1( VAR_4, "Hunk initialization failed. File system load stack not zero");
 }


 VAR_14 = FUNC_3( "com_hunkMegs", VAR_3, VAR_1 | VAR_0 );
 FUNC_4(VAR_14, "The size of the hunk memory segment");


 if (VAR_10 && VAR_10->integer) {
  VAR_15 = VAR_8;
  VAR_16 = "Minimum com_hunkMegs for a dedicated server is %i, allocating %i megs.\n";
 }
 else {
  VAR_15 = VAR_7;
  VAR_16 = "Minimum com_hunkMegs is %i, allocating %i megs.\n";
 }

 if ( VAR_14->integer < VAR_15 ) {
  VAR_13 = 1024 * 1024 * VAR_15;
     FUNC_2(VAR_16, VAR_15, VAR_13 / (1024 * 1024));
 } else {
  VAR_13 = VAR_14->integer * 1024 * 1024;
 }

 VAR_12 = FUNC_7( VAR_13 + 31, 1 );
 if ( !VAR_12 ) {
  FUNC_1( VAR_4, "Hunk data failed to allocate %i megs", VAR_13 / (1024*1024) );
 }

 VAR_11 = (byte *) ( ( (intptr_t)VAR_12 + 31 ) & ~31 );
 FUNC_6();

 FUNC_0( "meminfo", VAR_2 );







}
