
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* qboolean ;
struct TYPE_6__ {scalar_t__ integer; } ;
struct TYPE_5__ {scalar_t__ realtime; } ;
struct TYPE_4__ {float* color; int linewidth; int x; int current; int totallines; unsigned short* text; scalar_t__* times; void* initialized; } ;


 char VAR_0 ;
 unsigned short FUNC_0 (char) ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

void FUNC_5( char *VAR_7 ) {
 int VAR_8, VAR_9;
 unsigned char VAR_10;
 unsigned short VAR_11;
 qboolean VAR_12 = VAR_5;
 int VAR_13;



 if ( !FUNC_4( VAR_7, "[skipnotify]", 12 ) ) {
  VAR_12 = VAR_6;
  VAR_7 += 12;
 }


 if ( VAR_2 && VAR_2->integer ) {
  return;
 }

 if (!VAR_4.initialized) {
  VAR_4.color[0] =
  VAR_4.color[1] =
  VAR_4.color[2] =
  VAR_4.color[3] = 1.0f;
  VAR_4.linewidth = -1;
  FUNC_1 ();
  VAR_4.initialized = VAR_6;
 }

 VAR_11 = FUNC_0(VAR_0);

 while ( (VAR_10 = *((unsigned char *) VAR_7)) != 0 ) {
  if ( FUNC_3( VAR_7 ) ) {
   VAR_11 = FUNC_0( *(VAR_7+1) );
   VAR_7 += 2;
   continue;
  }


  for (VAR_9=0 ; VAR_9< VAR_4.linewidth ; VAR_9++) {
   if ( VAR_7[VAR_9] <= ' ') {
    break;
   }

  }


  if (VAR_9 != VAR_4.linewidth && (VAR_4.x + VAR_9 >= VAR_4.linewidth) ) {
   FUNC_2(VAR_12);

  }

  VAR_7++;

  switch (VAR_10)
  {
  case '\n':
   FUNC_2 (VAR_12);
   break;
  case '\r':
   VAR_4.x = 0;
   break;
  default:
   VAR_8 = VAR_4.current % VAR_4.totallines;
   VAR_4.text[VAR_8*VAR_4.linewidth+VAR_4.x] = (VAR_11 << 8) | VAR_10;
   VAR_4.x++;
   if(VAR_4.x >= VAR_4.linewidth)
    FUNC_2(VAR_12);
   break;
  }
 }



 if (VAR_4.current >= 0) {

  if ( VAR_12 ) {
   VAR_13 = VAR_4.current % VAR_1 - 1;
   if ( VAR_13 < 0 )
    VAR_13 = VAR_1 - 1;
   VAR_4.times[VAR_13] = 0;
  }
  else

   VAR_4.times[VAR_4.current % VAR_1] = VAR_3.realtime;
 }
}
