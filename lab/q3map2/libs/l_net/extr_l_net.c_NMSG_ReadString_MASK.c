
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int string ;
struct TYPE_3__ {int read; int size; int* data; int readoverflow; } ;
typedef TYPE_1__ netmessage_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

char *FUNC_1( netmessage_t *VAR_1 ){
 static char VAR_2[2048];
 int VAR_3, VAR_4;

 VAR_3 = 0;
 do
 {
  if ( VAR_1->read + 1 > VAR_1->size ) {
   VAR_1->readoverflow = VAR_0;
   FUNC_0( "NMSG_ReadString: read overflow\n" );
   VAR_2[VAR_3] = 0;
   return VAR_2;
  }
  VAR_4 = VAR_1->data[VAR_1->read];
  VAR_1->read++;
  if ( VAR_4 == 0 ) {
   break;
  }
  VAR_2[VAR_3] = VAR_4;
  VAR_3++;
 } while ( VAR_3 < sizeof( VAR_2 ) - 1 );
 VAR_2[VAR_3] = 0;
 return VAR_2;
}
