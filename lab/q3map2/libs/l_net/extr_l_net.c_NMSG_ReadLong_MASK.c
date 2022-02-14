
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int read; int size; int* data; int readoverflow; } ;
typedef TYPE_1__ netmessage_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

int FUNC_1( netmessage_t *VAR_1 ){
 int VAR_2;

 if ( VAR_1->read + 4 > VAR_1->size ) {
  VAR_1->readoverflow = VAR_0;
  FUNC_0( "NMSG_ReadLong: read overflow\n" );
  return 0;
 }
 VAR_2 = VAR_1->data[VAR_1->read]
  + ( VAR_1->data[VAR_1->read + 1] << 8 )
  + ( VAR_1->data[VAR_1->read + 2] << 16 )
  + ( VAR_1->data[VAR_1->read + 3] << 24 );
 VAR_1->read += 4;
 return VAR_2;
}
