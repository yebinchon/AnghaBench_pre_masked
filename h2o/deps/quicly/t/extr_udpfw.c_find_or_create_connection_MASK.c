
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_6__ {int ss_family; } ;
struct TYPE_4__ {int len; TYPE_3__ ss; } ;
struct connection_t {scalar_t__ packet_num_down; scalar_t__ packet_num_up; struct connection_t* next; struct connection_t* prev; TYPE_1__ down_addr; int up_fd; int cid; } ;
typedef int socklen_t ;
struct TYPE_5__ {int ai_addrlen; int ai_addr; int ai_family; } ;




 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 struct connection_t VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 struct connection_t* FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (TYPE_3__*,struct sockaddr*,int ) ;
 int FUNC_7 (int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static struct connection_t *FUNC_9(struct sockaddr *VAR_4, socklen_t VAR_5)
{
    struct connection_t *VAR_6;
    static size_t VAR_7;

    for (VAR_6 = VAR_0.next; VAR_6 != &VAR_0; VAR_6 = VAR_6->next) {
        if (VAR_6->down_addr.ss.ss_family != VAR_4->sa_family)
            continue;
        switch (VAR_6->down_addr.ss.ss_family) {
        case 129: {
            struct sockaddr_in *VAR_8 = (void *)&VAR_6->down_addr, *VAR_9 = (void *)VAR_4;
            if (!(FUNC_5(&VAR_8->sin_addr, &VAR_9->sin_addr, sizeof(VAR_8->sin_addr)) == 0 && VAR_8->sin_port == VAR_9->sin_port))
                continue;
        } break;
        case 128: {
            struct sockaddr_in6 *VAR_10 = (void *)&VAR_6->down_addr, *VAR_11 = (void *)VAR_4;
            if (!(FUNC_5(&VAR_10->sin6_addr, &VAR_11->sin6_addr, sizeof(VAR_10->sin6_addr)) == 0 && VAR_10->sin6_port == VAR_11->sin6_port))
                continue;
        } break;
        default:
            FUNC_0(!"FIXME");
            break;
        }
        return VAR_6;
    }


    VAR_6 = FUNC_4(sizeof(*VAR_6));
    FUNC_0(VAR_6 != ((void*)0));
    VAR_6->cid = VAR_7++;
    VAR_6->up_fd = FUNC_7(VAR_2->ai_family);
    if (FUNC_1(VAR_6->up_fd, VAR_2->ai_addr, VAR_2->ai_addrlen) != 0) {
        FUNC_3(VAR_3, "failed to connect to server:%s\n", FUNC_8(VAR_1));
        FUNC_2(1);
    }
    FUNC_6(&VAR_6->down_addr.ss, VAR_4, VAR_5);
    VAR_6->down_addr.len = VAR_5;
    VAR_6->prev = VAR_0.prev;
    VAR_6->next = &VAR_0;
    VAR_0.prev = VAR_6;
    VAR_6->prev->next = VAR_6;
    VAR_6->packet_num_up = 0;
    VAR_6->packet_num_down = 0;
    return VAR_6;
}
