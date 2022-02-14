
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_3__ {int sock; int * decompressed; int * recvbuf; int lock; } ;
typedef TYPE_1__ yrmcds ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

yrmcds_error FUNC_3(yrmcds* VAR_2) {
    if( VAR_2 == ((void*)0) )
        return VAR_0;
    if( VAR_2->sock == -1 )
        return VAR_1;

    FUNC_0(VAR_2->sock);
    VAR_2->sock = -1;

    FUNC_2(&(VAR_2->lock));

    FUNC_1(VAR_2->recvbuf);
    VAR_2->recvbuf = ((void*)0);
    FUNC_1(VAR_2->decompressed);
    VAR_2->decompressed = ((void*)0);
    return VAR_1;
}
