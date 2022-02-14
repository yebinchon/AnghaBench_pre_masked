
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int msec; } ;
struct TYPE_6__ {TYPE_1__ pc; } ;
struct TYPE_5__ {int (* Milliseconds ) () ;} ;


 void* FUNC_0 (void const*,int) ;
 void* FUNC_1 (void const*) ;
 void* FUNC_2 (void const*) ;
 void* FUNC_3 (void const*) ;
 void* FUNC_4 (void const*) ;
 void* FUNC_5 (void const*) ;
 void* FUNC_6 (void const*) ;
 void* FUNC_7 (void const*) ;
 void* FUNC_8 (void const*) ;
 void* FUNC_9 (void const*) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_10 () ;
 int FUNC_11 () ;

void FUNC_12( const void *VAR_2 ) {
 int VAR_3, VAR_4;

 VAR_3 = VAR_1.Milliseconds ();

 while ( 1 ) {
  VAR_2 = FUNC_0(VAR_2, sizeof(void *));

  switch ( *(const int *)VAR_2 ) {
  case 131:
   VAR_2 = FUNC_5( VAR_2 );
   break;
  case 130:
   VAR_2 = FUNC_6( VAR_2 );
   break;
  case 134:
   VAR_2 = FUNC_4( VAR_2 );
   break;
  case 135:
   VAR_2 = FUNC_3( VAR_2 );
   break;
  case 129:
   VAR_2 = FUNC_7( VAR_2 );
   break;
  case 132:
   VAR_2 = FUNC_8( VAR_2 );
   break;
  case 128:
   VAR_2 = FUNC_9( VAR_2 );
   break;
  case 136:
   VAR_2 = FUNC_2(VAR_2);
   break;
  case 137:
   VAR_2 = FUNC_1(VAR_2);
   break;
  case 133:
  default:

   VAR_4 = VAR_1.Milliseconds ();
   VAR_0.pc.msec = VAR_4 - VAR_3;
   return;
  }
 }

}
