
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int socket; } ;
typedef TYPE_1__ socket_t ;
struct TYPE_7__ {int size; int data; } ;
typedef TYPE_2__ netmessage_t ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int ,int,int *) ;

int FUNC_2( socket_t *VAR_0, netmessage_t *VAR_1 ){
 int VAR_2;

 VAR_2 = VAR_1->size;
 VAR_1->size = 0;
 FUNC_0( VAR_1, VAR_2 - 4 );
 VAR_1->size = VAR_2;

 return FUNC_1( VAR_0->socket, VAR_1->data, VAR_1->size, ((void*)0) );
}
