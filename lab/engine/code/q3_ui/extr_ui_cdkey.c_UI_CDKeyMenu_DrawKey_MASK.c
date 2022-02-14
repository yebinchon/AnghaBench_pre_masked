
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_7__ {int cursor; int buffer; } ;
struct TYPE_6__ {scalar_t__ menuPosition; TYPE_1__* parent; } ;
struct TYPE_8__ {TYPE_3__ field; TYPE_2__ generic; } ;
typedef TYPE_4__ menufield_s ;
struct TYPE_5__ {scalar_t__ cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int,int,char,int,int ) ;
 int FUNC_2 (int,int,char*,int,int ) ;
 int FUNC_3 (int,int,int ,int,float*) ;
 int FUNC_4 (int,int,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 float* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static void FUNC_6( void *VAR_12 ) {
 menufield_s *VAR_13;
 qboolean VAR_14;
 int VAR_15;
 char VAR_16;
 float *VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;

 VAR_13 = (menufield_s *)VAR_12;

 VAR_14 = (VAR_13->generic.parent->cursor == VAR_13->generic.menuPosition);

 VAR_15 = VAR_4;
 if( VAR_14 ) {
  VAR_17 = VAR_7;
 }
 else {
  VAR_17 = VAR_7;
 }

 VAR_18 = 320 - 8 * VAR_1;
 VAR_19 = 240 - VAR_0 / 2;
 FUNC_4( VAR_18, VAR_19, 16 * VAR_1, VAR_0, VAR_11 );
 FUNC_3( VAR_18, VAR_19, VAR_13->field.buffer, VAR_15, VAR_17 );


 if( VAR_14 ) {
  if ( FUNC_5() ) {
   VAR_16 = 11;
  } else {
   VAR_16 = 10;
  }

  VAR_15 &= ~VAR_5;
  VAR_15 |= VAR_2;

  FUNC_1( VAR_18 + VAR_13->field.cursor * VAR_1, VAR_19, VAR_16, VAR_15, VAR_9 );
 }

 VAR_20 = FUNC_0( VAR_13->field.buffer );
 if( VAR_20 == 1 ) {
  FUNC_2( 320, 376, "Please enter your CD Key", VAR_3|VAR_6, VAR_10 );
 }
 else if ( VAR_20 == 0 ) {
  FUNC_2( 320, 376, "The CD Key appears to be valid, thank you", VAR_3|VAR_6, VAR_9 );
 }
 else {
  FUNC_2( 320, 376, "The CD Key is not valid", VAR_3|VAR_6, VAR_8 );
 }
}
