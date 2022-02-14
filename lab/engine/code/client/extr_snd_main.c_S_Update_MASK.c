
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


struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {void* modified; void* integer; } ;
struct TYPE_7__ {int (* Update ) () ;} ;


 TYPE_6__* VAR_0 ;
 TYPE_5__* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 () ;

void FUNC_1( void )
{
 if(VAR_6->integer)
 {
  if(!(VAR_4->integer && VAR_0->integer) &&
     !(VAR_5->integer && VAR_1->integer))
  {
   VAR_6->integer = VAR_2;
   VAR_6->modified = VAR_3;
  }
 }
 else
 {
  if((VAR_4->integer && VAR_0->integer) ||
     (VAR_5->integer && VAR_1->integer))
  {
   VAR_6->integer = VAR_3;
   VAR_6->modified = VAR_3;
  }
 }

 if( VAR_7.Update ) {
  VAR_7.Update( );
 }
}
