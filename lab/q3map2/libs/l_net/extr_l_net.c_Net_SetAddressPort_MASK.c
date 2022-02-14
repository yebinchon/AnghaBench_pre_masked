
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sockaddr_t ;
struct TYPE_3__ {int ip; } ;
typedef TYPE_1__ address_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4( address_t *VAR_0, int VAR_1 ){
 sockaddr_t VAR_2;

 FUNC_2( VAR_0->ip, &VAR_2 );
 FUNC_1( &VAR_2, VAR_1 );
 FUNC_3( VAR_0->ip, FUNC_0( &VAR_2 ) );
}
