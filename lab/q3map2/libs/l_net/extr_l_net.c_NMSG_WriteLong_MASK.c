
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int* data; } ;
typedef TYPE_1__ netmessage_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

void FUNC_1( netmessage_t *VAR_1, int VAR_2 ){
 if ( VAR_1->size + 4 >= VAR_0 ) {
  FUNC_0( "NMSG_WriteLong: overflow\n" );
  return;
 }
 VAR_1->data[VAR_1->size] = VAR_2 & 0xff;
 VAR_1->data[VAR_1->size + 1] = ( VAR_2 >> 8 ) & 0xff;
 VAR_1->data[VAR_1->size + 2] = ( VAR_2 >> 16 ) & 0xff;
 VAR_1->data[VAR_1->size + 3] = VAR_2 >> 24;
 VAR_1->size += 4;
}
