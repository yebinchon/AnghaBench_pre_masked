
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct sockaddr_storage {scalar_t__ ss_family; } ;
typedef int socklen_t ;
typedef int h2o_url_t ;
struct TYPE_21__ {int sockets; scalar_t__ leased_count; } ;
struct TYPE_20__ {scalar_t__ weight_m1; } ;
struct TYPE_18__ {int len; int bytes; } ;
struct TYPE_17__ {void* base; int len; } ;
struct TYPE_19__ {TYPE_4__ sockaddr; TYPE_3__ named_serv; } ;
struct TYPE_16__ {char* base; size_t len; } ;
struct TYPE_15__ {char* base; size_t len; } ;
struct TYPE_14__ {TYPE_2__ host; TYPE_1__ authority; } ;
struct TYPE_22__ {int type; TYPE_7__ _shared; TYPE_6__ conf; TYPE_5__ peer; TYPE_10__ url; } ;
typedef TYPE_8__ h2o_socketpool_target_t ;
struct TYPE_23__ {scalar_t__ weight_m1; } ;
typedef TYPE_9__ h2o_socketpool_target_conf_t ;
typedef int H2O_UINT16_LONGEST_STR ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct sockaddr_storage*,int*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (int *,TYPE_10__*,int *) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (int *,struct sockaddr_storage*,int) ;
 int FUNC_8 (void*,char*,unsigned int) ;

h2o_socketpool_target_t *FUNC_9(h2o_url_t *VAR_1, h2o_socketpool_target_conf_t *VAR_2)
{
    struct sockaddr_storage VAR_3;
    socklen_t VAR_4;

    h2o_socketpool_target_t *VAR_5 = FUNC_3(sizeof(*VAR_5));
    FUNC_5(((void*)0), &VAR_5->url, VAR_1);
    FUNC_0(VAR_5->url.host.base[VAR_5->url.host.len] == '\0');
    VAR_5->type = FUNC_1(VAR_1, &VAR_3, &VAR_4);
    if (!(VAR_5->type == 128 && VAR_3.ss_family == VAR_0)) {
        FUNC_4(VAR_5->url.authority.base, VAR_5->url.authority.len);
        FUNC_4(VAR_5->url.host.base, VAR_5->url.host.len);
    }

    switch (VAR_5->type) {
    case 129:
        VAR_5->peer.named_serv.base = FUNC_3(sizeof(H2O_UINT16_LONGEST_STR));
        VAR_5->peer.named_serv.len = FUNC_8(VAR_5->peer.named_serv.base, "%u", (unsigned)FUNC_6(&VAR_5->url));
        break;
    case 128:
        FUNC_0(VAR_4 <= sizeof(VAR_5->peer.sockaddr.bytes));
        FUNC_7(&VAR_5->peer.sockaddr.bytes, &VAR_3, VAR_4);
        VAR_5->peer.sockaddr.len = VAR_4;
        break;
    }
    VAR_5->_shared.leased_count = 0;
    if (VAR_2 != ((void*)0))
        VAR_5->conf.weight_m1 = VAR_2->weight_m1;
    else {
        VAR_5->conf.weight_m1 = 0;
    }

    FUNC_2(&VAR_5->_shared.sockets);
    return VAR_5;
}
