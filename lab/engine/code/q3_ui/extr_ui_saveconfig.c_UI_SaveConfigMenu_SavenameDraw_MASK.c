
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int y; int x; } ;
struct TYPE_9__ {int widthInChars; } ;
struct TYPE_7__ {TYPE_1__ generic; TYPE_5__ field; } ;
typedef TYPE_2__ menufield_s ;
struct TYPE_8__ {int menu; } ;


 int FUNC_0 (TYPE_5__*,int ,int ,int,float*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int,char*,int,int ) ;
 int FUNC_3 (int ,int ,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 float* VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 float* VAR_10 ;

__attribute__((used)) static void FUNC_4( void *VAR_11 ) {
 menufield_s *VAR_12;
 int VAR_13;
 float *VAR_14;

 VAR_12 = (menufield_s *)VAR_11;

 if( VAR_12 == FUNC_1( &VAR_9.menu ) ) {
  VAR_13 = VAR_3|VAR_4|VAR_5;
  VAR_14 = VAR_10;
 }
 else {
  VAR_13 = VAR_3|VAR_5;
  VAR_14 = VAR_7;
 }

 FUNC_2( 320, 192, "Enter filename:", VAR_2|VAR_5, VAR_8 );
 FUNC_3( VAR_12->generic.x, VAR_12->generic.y, VAR_12->field.widthInChars*VAR_1, VAR_0, VAR_6 );
 FUNC_0( &VAR_12->field, VAR_12->generic.x, VAR_12->generic.y, VAR_13, VAR_14 );
}
