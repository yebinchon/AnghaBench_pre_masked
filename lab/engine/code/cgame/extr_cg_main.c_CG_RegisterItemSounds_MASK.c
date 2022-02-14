
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* pickup_sound; char* sounds; int classname; } ;
typedef TYPE_1__ gitem_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4( int VAR_3 ) {
 gitem_t *VAR_4;
 char VAR_5[VAR_0];
 char *VAR_6, *VAR_7;
 int VAR_8;

 VAR_4 = &VAR_1[ VAR_3 ];

 if( VAR_4->pickup_sound ) {
  FUNC_3( VAR_4->pickup_sound, VAR_2 );
 }


 VAR_6 = VAR_4->sounds;
 if (!VAR_6 || !VAR_6[0])
  return;

 while (*VAR_6) {
  VAR_7 = VAR_6;
  while (*VAR_6 && *VAR_6 != ' ') {
   VAR_6++;
  }

  VAR_8 = VAR_6-VAR_7;
  if (VAR_8 >= VAR_0 || VAR_8 < 5) {
   FUNC_0( "PrecacheItem: %s has bad precache string",
    VAR_4->classname);
   return;
  }
  FUNC_1 (VAR_5, VAR_7, VAR_8);
  VAR_5[VAR_8] = 0;
  if ( *VAR_6 ) {
   VAR_6++;
  }

  if ( !FUNC_2(VAR_5+VAR_8-3, "wav" )) {
   FUNC_3( VAR_5, VAR_2 );
  }
 }
}
