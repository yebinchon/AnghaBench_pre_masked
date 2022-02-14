
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int pending_traffic_secret; } ;
struct TYPE_11__ {int secret; } ;
struct TYPE_12__ {TYPE_1__ dec; } ;
struct TYPE_14__ {int state; int key_schedule; TYPE_3__ server; TYPE_2__ traffic_protection; } ;
typedef TYPE_4__ ptls_t ;
struct TYPE_15__ {int len; int base; } ;
typedef TYPE_5__ ptls_iovec_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_4__*,int ,int *,int,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__) ;

__attribute__((used)) static int FUNC_5(ptls_t *VAR_1, ptls_iovec_t VAR_2)
{
    int VAR_3;

    if ((VAR_3 = FUNC_4(VAR_1, VAR_2)) != 0)
        return VAR_3;

    FUNC_0(VAR_1->traffic_protection.dec.secret, VAR_1->server.pending_traffic_secret, sizeof(VAR_1->server.pending_traffic_secret));
    FUNC_2(VAR_1->server.pending_traffic_secret, sizeof(VAR_1->server.pending_traffic_secret));
    if ((VAR_3 = FUNC_3(VAR_1, 0, ((void*)0), 3, 0)) != 0)
        return VAR_3;

    FUNC_1(VAR_1->key_schedule, VAR_2.base, VAR_2.len);

    VAR_1->state = VAR_0;
    return 0;
}
