
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct connstate {scalar_t__ getmonitors; scalar_t__ getoutputinfo; TYPE_1__* clientw; } ;
struct TYPE_6__ {scalar_t__ sequence; } ;
typedef TYPE_2__ generic_x11_reply_t ;
struct TYPE_8__ {int len; int * buf; } ;
struct TYPE_7__ {int len; int * buf; } ;
struct TYPE_5__ {int fd; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static bool FUNC_3(struct connstate *VAR_2, uint16_t VAR_3) {

    if (VAR_3 == VAR_2->getmonitors) {
        FUNC_1("RRGetMonitors reply!\n");
        if (VAR_0.buf != ((void*)0)) {
            FUNC_1("injecting reply\n");
            ((generic_x11_reply_t *)VAR_0.buf)->sequence = VAR_3;
            FUNC_0(FUNC_2(VAR_2->clientw->fd, VAR_0.buf, VAR_0.len));
            return 1;
        }
    }

    if (VAR_3 == VAR_2->getoutputinfo) {
        FUNC_1("RRGetOutputInfo reply!\n");
        if (VAR_1.buf != ((void*)0)) {
            FUNC_1("injecting reply\n");
            ((generic_x11_reply_t *)VAR_1.buf)->sequence = VAR_3;
            FUNC_0(FUNC_2(VAR_2->clientw->fd, VAR_1.buf, VAR_1.len));
            return 1;
        }
    }


    return 0;
}
