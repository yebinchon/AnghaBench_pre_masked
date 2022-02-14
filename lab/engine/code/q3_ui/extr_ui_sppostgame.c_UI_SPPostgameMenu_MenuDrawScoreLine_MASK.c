
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int name ;
struct TYPE_2__ {int numClients; int* ranks; int * scores; scalar_t__* clientNums; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int,char*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_4 (scalar_t__,char*,int) ;
 char* FUNC_5 (char*,int,char*,int ) ;

__attribute__((used)) static void FUNC_6( int VAR_8, int VAR_9 ) {
 int VAR_10;
 char VAR_11[64];
 char VAR_12[VAR_1];

 if( VAR_8 > (VAR_7.numClients + 1) ) {
  VAR_8 -= (VAR_7.numClients + 2);
 }

 if( VAR_8 >= VAR_7.numClients ) {
  return;
 }

 VAR_10 = VAR_7.ranks[VAR_8];
 if( VAR_10 & VAR_2 ) {
  FUNC_3( 640 - 31 * VAR_3, VAR_9, "(tie)", VAR_4|VAR_5, VAR_6 );
  VAR_10 &= ~VAR_2;
 }
 FUNC_4( VAR_0 + VAR_7.clientNums[VAR_8], VAR_12, VAR_1 );
 FUNC_2( VAR_11, FUNC_0( VAR_12, "n" ), sizeof(VAR_11) );
 FUNC_1( VAR_11 );

 FUNC_3( 640 - 25 * VAR_3, VAR_9, FUNC_5( "#%i: %-16s %2i", VAR_10 + 1, VAR_11, VAR_7.scores[VAR_8] ), VAR_4|VAR_5, VAR_6 );
}
