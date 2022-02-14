
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef double* vec4_t ;
struct TYPE_16__ {double value; } ;
struct TYPE_15__ {double value; } ;
struct TYPE_14__ {double value; } ;
struct TYPE_13__ {double value; } ;
struct TYPE_12__ {double value; } ;
struct TYPE_11__ {double value; } ;
struct TYPE_9__ {int teamStatusBar; } ;
struct TYPE_10__ {TYPE_1__ media; } ;


 int FUNC_0 (int,int,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_1 (double*) ;

void FUNC_2( int VAR_9, int VAR_10, int VAR_11, int VAR_12, float VAR_13, int VAR_14 )
{
 vec4_t VAR_15;

 VAR_15[3] = VAR_13;
 if ( VAR_14 == VAR_1 ) {
  VAR_15[0] = VAR_7.value / 255.0;
  VAR_15[1] = VAR_6.value / 255.0;
  VAR_15[2] = VAR_5.value / 255.0;
 } else if ( VAR_14 == VAR_0 ) {
  VAR_15[0] = VAR_4.value / 255.0;
  VAR_15[1] = VAR_3.value / 255.0;
  VAR_15[2] = VAR_2.value / 255.0;
 } else {
  return;
 }
 FUNC_1( VAR_15 );
 FUNC_0( VAR_9, VAR_10, VAR_11, VAR_12, VAR_8.media.teamStatusBar );
 FUNC_1( ((void*)0) );
}
