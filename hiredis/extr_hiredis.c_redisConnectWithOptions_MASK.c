
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int source_addr; int port; int ip; } ;
struct TYPE_13__ {scalar_t__ fd; int unix_socket; TYPE_1__ tcp; } ;
struct TYPE_14__ {int options; scalar_t__ type; int * timeout; TYPE_2__ endpoint; } ;
typedef TYPE_3__ redisOptions ;
struct TYPE_15__ {int flags; scalar_t__ fd; } ;
typedef TYPE_4__ redisContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_4__*,int ,int ,int *,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int *) ;
 TYPE_4__* FUNC_2 (TYPE_3__ const*) ;
 int FUNC_3 (TYPE_4__*,int ) ;

redisContext *FUNC_4(const redisOptions *VAR_11) {
    redisContext *VAR_12 = FUNC_2(VAR_11);
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }
    if (!(VAR_11->options & VAR_8)) {
        VAR_12->flags |= VAR_0;
    }
    if (VAR_11->options & VAR_9) {
        VAR_12->flags |= VAR_10;
    }
    if (VAR_11->options & VAR_7) {
      VAR_12->flags |= VAR_6;
    }

    if (VAR_11->type == VAR_2) {
        FUNC_0(VAR_12, VAR_11->endpoint.tcp.ip,
                                   VAR_11->endpoint.tcp.port, VAR_11->timeout,
                                   VAR_11->endpoint.tcp.source_addr);
    } else if (VAR_11->type == VAR_3) {
        FUNC_1(VAR_12, VAR_11->endpoint.unix_socket,
                                VAR_11->timeout);
    } else if (VAR_11->type == VAR_4) {
        VAR_12->fd = VAR_11->endpoint.fd;
        VAR_12->flags |= VAR_1;
    } else {

        return ((void*)0);
    }
    if (VAR_11->timeout != ((void*)0) && (VAR_12->flags & VAR_0) && VAR_12->fd != VAR_5) {
        FUNC_3(VAR_12, *VAR_11->timeout);
    }
    return VAR_12;
}
