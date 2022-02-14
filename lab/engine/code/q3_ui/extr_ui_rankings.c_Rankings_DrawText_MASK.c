
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_7__ {char* buffer; int cursor; } ;
struct TYPE_6__ {int x; int y; scalar_t__ menuPosition; TYPE_1__* parent; } ;
struct TYPE_8__ {TYPE_3__ field; TYPE_2__ generic; } ;
typedef TYPE_4__ menufield_s ;
struct TYPE_5__ {scalar_t__ cursor; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,char,int,float*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 float* VAR_6 ;
 float** VAR_7 ;
 float* VAR_8 ;
 float* VAR_9 ;
 scalar_t__ FUNC_2 () ;

void FUNC_3( void* VAR_10 )
{
 menufield_s *VAR_11;
 qboolean VAR_12;
 int VAR_13;
 char *VAR_14;
 char VAR_15;
 float *VAR_16;
 int VAR_17, VAR_18, VAR_19;

 VAR_11 = (menufield_s*)VAR_10;
 VAR_17 = VAR_11->generic.x;
 VAR_19 = VAR_11->generic.y + 4;
 VAR_12 = (VAR_11->generic.parent->cursor == VAR_11->generic.menuPosition);

 VAR_13 = VAR_3|VAR_5;
 VAR_16 = VAR_9;
 if( VAR_12 ) {
  VAR_13 |= VAR_4;
  VAR_16 = VAR_8;
 }


 VAR_14 = VAR_11->field.buffer;
 VAR_16 = VAR_7[FUNC_0(VAR_0)];
 VAR_18 = VAR_17;
 while ( (VAR_15 = *VAR_14) != 0 ) {
  FUNC_1( VAR_18, VAR_19, VAR_15, VAR_13, VAR_16 );
  VAR_14++;
  VAR_18 += VAR_1;
 }


 if( VAR_12 ) {
  if ( FUNC_2() ) {
   VAR_15 = 11;
  } else {
   VAR_15 = 10;
  }

  VAR_13 &= ~VAR_4;
  VAR_13 |= VAR_2;

  FUNC_1( VAR_17 + VAR_11->field.cursor * VAR_1, VAR_19, VAR_15, VAR_13, VAR_6 );
 }
}
