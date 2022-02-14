
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ stereoFrame_t ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {scalar_t__ gametype; } ;


 int FUNC_0 (float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float,int ,int ) ;
 float FUNC_4 (float) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_5(stereoFrame_t VAR_10)
{
 float VAR_11;

 VAR_11 = 0;

 if ( VAR_8.gametype >= VAR_0 && VAR_6.integer == 1 ) {
  VAR_11 = FUNC_3( VAR_11, VAR_9, VAR_9 );
 }
 if ( VAR_5.integer ) {
  VAR_11 = FUNC_2( VAR_11 );
 }
 if (VAR_4.integer && (VAR_10 == VAR_1 || VAR_10 == VAR_2)) {
  VAR_11 = FUNC_1( VAR_11 );
 }
 if ( VAR_7.integer ) {
  VAR_11 = FUNC_4( VAR_11 );
 }
 if ( VAR_3.integer ) {
  FUNC_0( VAR_11 );
 }

}
