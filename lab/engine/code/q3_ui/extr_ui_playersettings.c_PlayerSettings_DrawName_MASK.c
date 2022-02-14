
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
typedef int name ;
struct TYPE_7__ {char* buffer; int cursor; } ;
struct TYPE_6__ {int x; int y; scalar_t__ menuPosition; TYPE_1__* parent; } ;
struct TYPE_8__ {TYPE_3__ field; TYPE_2__ generic; } ;
typedef TYPE_4__ menufield_s ;
struct TYPE_5__ {scalar_t__ cursor; } ;


 char VAR_0 ;
 size_t FUNC_0 (char) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,int,char,int,float*) ;
 int FUNC_5 (int,int,char*,int,float*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 float* VAR_9 ;
 float** VAR_10 ;
 float* VAR_11 ;
 float* VAR_12 ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static void FUNC_7( void *VAR_13 ) {
 menufield_s *VAR_14;
 qboolean VAR_15;
 int VAR_16;
 char *VAR_17;
 char VAR_18;
 float *VAR_19;
 int VAR_20;
 int VAR_21, VAR_22, VAR_23;
 char VAR_24[32];

 VAR_14 = (menufield_s*)VAR_13;
 VAR_21 = VAR_14->generic.x;
 VAR_23 = VAR_14->generic.y;
 VAR_15 = (VAR_14->generic.parent->cursor == VAR_14->generic.menuPosition);

 VAR_16 = VAR_6|VAR_8;
 VAR_19 = VAR_12;
 if( VAR_15 ) {
  VAR_16 |= VAR_7;
  VAR_19 = VAR_11;
 }

 FUNC_5( VAR_21, VAR_23, "Name", VAR_16, VAR_19 );


 VAR_21 += 64;
 VAR_23 += VAR_1;
 VAR_17 = VAR_14->field.buffer;
 VAR_19 = VAR_10[FUNC_0(VAR_0)];
 VAR_22 = VAR_21;
 while ( (VAR_18 = *VAR_17) != 0 ) {
  if ( !VAR_15 && FUNC_2( VAR_17 ) ) {
   VAR_20 = FUNC_0( *(VAR_17+1) );
   if( VAR_20 == 0 ) {
    VAR_20 = 7;
   }
   VAR_19 = VAR_10[VAR_20];
   VAR_17 += 2;
   continue;
  }
  FUNC_4( VAR_22, VAR_23, VAR_18, VAR_16, VAR_19 );
  VAR_17++;
  VAR_22 += VAR_2;
 }


 if( VAR_15 ) {
  if ( FUNC_6() ) {
   VAR_18 = 11;
  } else {
   VAR_18 = 10;
  }

  VAR_16 &= ~VAR_7;
  VAR_16 |= VAR_4;

  FUNC_4( VAR_21 + VAR_14->field.cursor * VAR_2, VAR_23, VAR_18, VAR_16, VAR_9 );
 }


 FUNC_3( VAR_24, VAR_14->field.buffer, sizeof(VAR_24) );
 FUNC_1( VAR_24 );
 FUNC_5( 320, 440, VAR_24, VAR_5|VAR_3, VAR_12 );
}
