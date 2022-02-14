
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int programStack; long (* systemCall ) (intptr_t*) ;scalar_t__ dataBase; } ;
typedef TYPE_1__ vm_t ;
struct tms {scalar_t__ tms_utime; } ;
typedef scalar_t__ clock_t ;
typedef int byte ;


 long FUNC_0 (intptr_t*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 long FUNC_1 (intptr_t*) ;
 long FUNC_2 (intptr_t*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct tms*) ;

__attribute__((used)) static long int
FUNC_4( int VAR_3, int VAR_4 )
{
 vm_t *VAR_5 = VAR_1;
 long int VAR_6, VAR_7;







 VAR_1->programStack = VAR_4 - 4;


 if ( sizeof( intptr_t ) == sizeof( int ) ) {
  intptr_t *VAR_8 = (intptr_t *)((byte *)VAR_1->dataBase + VAR_4 + 4);


  VAR_8[ 0 ] = -1 - VAR_3;

  VAR_7 = VAR_1->systemCall( VAR_8 );
 } else {
  intptr_t VAR_9[VAR_0];


  VAR_9[0] = -1 - VAR_3;

  int *VAR_10 = (int *)((byte *)VAR_1->dataBase + VAR_4 + 4);
  for( VAR_6 = 1; VAR_6 < FUNC_0(VAR_9); VAR_6++ )
   VAR_9[ VAR_6 ] = VAR_10[ VAR_6 ];

  VAR_7 = VAR_1->systemCall( VAR_9 );
 }

 VAR_1 = VAR_5;






 return VAR_7;
}
