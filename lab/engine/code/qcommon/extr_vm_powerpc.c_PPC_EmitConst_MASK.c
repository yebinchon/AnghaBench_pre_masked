
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int si; int i; int* us; int * ss; } ;
struct TYPE_5__ {int regR; long regPos; TYPE_1__ arg; int i_count; } ;
typedef TYPE_2__ source_instruction_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_4( source_instruction_t * const VAR_8 )
{
 FUNC_2( VAR_8->i_count );

 if ( !(VAR_8->regR & VAR_6) ) {

  long int VAR_9 = VAR_8->regPos;

  if ( VAR_8->arg.si >= -0x8000 && VAR_8->arg.si < 0x8000 ) {
   FUNC_3( VAR_2, VAR_5, VAR_8->arg.si );
  } else if ( VAR_8->arg.i < 0x10000 ) {
   FUNC_3( VAR_2, VAR_5, 0 );
   FUNC_3( VAR_4, VAR_5, VAR_5, VAR_8->arg.i );
  } else {
   FUNC_3( VAR_3, VAR_5, VAR_8->arg.ss[ 0 ] );
   if ( VAR_8->arg.us[ 1 ] != 0 )
    FUNC_3( VAR_4, VAR_5, VAR_5, VAR_8->arg.us[ 1 ] );
  }

 } else {

  long int VAR_10 = VAR_8->regPos;



  FUNC_3( VAR_1, VAR_0, FUNC_0( VAR_8->arg.i ), VAR_7 );
 }

 FUNC_1();
}
