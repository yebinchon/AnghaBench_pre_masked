
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int msec; } ;
struct TYPE_8__ {TYPE_1__ pc; } ;
struct TYPE_7__ {int (* Milliseconds ) () ;} ;
struct TYPE_6__ {int numIndexes; } ;


 void* FUNC_0 (void const*,int) ;
 void* FUNC_1 (void const*) ;
 void* FUNC_2 (void const*) ;
 void* FUNC_3 (void const*) ;
 void* FUNC_4 (void const*) ;
 void* FUNC_5 (void const*) ;
 int FUNC_6 () ;
 void* FUNC_7 (void const*) ;
 void* FUNC_8 (void const*) ;
 void* FUNC_9 (void const*) ;
 void* FUNC_10 (void const*) ;
 void* FUNC_11 (void const*) ;
 void* FUNC_12 (void const*) ;
 void* FUNC_13 (void const*) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 TYPE_2__ VAR_2 ;

void FUNC_16( const void *VAR_3 ) {
 int VAR_4, VAR_5;

 VAR_4 = VAR_1.Milliseconds ();

 while ( 1 ) {
  VAR_3 = FUNC_0(VAR_3, sizeof(void *));

  switch ( *(const int *)VAR_3 ) {
  case 131:
   VAR_3 = FUNC_9( VAR_3 );
   break;
  case 130:
   VAR_3 = FUNC_10( VAR_3 );
   break;
  case 136:
   VAR_3 = FUNC_5( VAR_3 );
   break;
  case 137:
   VAR_3 = FUNC_4( VAR_3 );
   break;
  case 129:
   VAR_3 = FUNC_11( VAR_3 );
   break;
  case 132:
   VAR_3 = FUNC_12( VAR_3 );
   break;
  case 128:
   VAR_3 = FUNC_13( VAR_3 );
   break;
  case 138:
   VAR_3 = FUNC_3(VAR_3);
   break;
  case 139:
   VAR_3 = FUNC_2(VAR_3);
   break;
  case 140:
   VAR_3 = FUNC_1(VAR_3);
   break;
  case 133:
   VAR_3 = FUNC_8(VAR_3);
   break;
  case 134:
   VAR_3 = FUNC_7(VAR_3);
   break;
  case 135:
  default:

   if(VAR_2.numIndexes)
    FUNC_6();


   VAR_5 = VAR_1.Milliseconds ();
   VAR_0.pc.msec = VAR_5 - VAR_4;
   return;
  }
 }

}
