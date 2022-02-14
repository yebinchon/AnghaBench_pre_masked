
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_4__ {int * records; } ;
struct TYPE_5__ {int sock; TYPE_1__ stats; int * recvbuf; int lock; } ;
typedef TYPE_2__ yrmcds_cnt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

yrmcds_error
FUNC_3(yrmcds_cnt* VAR_2) {
    if( VAR_2 == ((void*)0) )
        return VAR_0;
    if( VAR_2->sock == -1 )
        return VAR_1;

    FUNC_0(VAR_2->sock);
    VAR_2->sock = -1;

    FUNC_2(&(VAR_2->lock));

    FUNC_1(VAR_2->recvbuf);
    VAR_2->recvbuf = ((void*)0);
    FUNC_1(VAR_2->stats.records);
    VAR_2->stats.records = ((void*)0);
    return VAR_1;
}
