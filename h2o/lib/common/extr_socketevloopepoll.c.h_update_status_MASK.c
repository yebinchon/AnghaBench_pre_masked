
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_h2o_evloop_socket_t {int _flags; int fd; int super; struct st_h2o_evloop_socket_t* _next_statechanged; } ;
struct TYPE_5__ {struct st_h2o_evloop_socket_t* head; struct st_h2o_evloop_socket_t** tail_ref; } ;
struct TYPE_6__ {TYPE_2__ _statechanged; } ;
struct st_h2o_evloop_epoll_t {TYPE_3__ super; int ep; } ;
struct TYPE_4__ {struct st_h2o_evloop_socket_t* ptr; } ;
struct epoll_event {TYPE_1__ data; int events; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ,struct epoll_event*) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct st_h2o_evloop_socket_t*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct st_h2o_evloop_epoll_t *VAR_11)
{
    while (VAR_11->super._statechanged.head != ((void*)0)) {

        struct st_h2o_evloop_socket_t *VAR_12 = VAR_11->super._statechanged.head;
        VAR_11->super._statechanged.head = VAR_12->_next_statechanged;
        VAR_12->_next_statechanged = VAR_12;

        if ((VAR_12->_flags & VAR_6) != 0) {
            FUNC_2(VAR_12);
        } else {
            int VAR_13 = 0, VAR_14, VAR_15;
            struct epoll_event VAR_16;
            VAR_16.events = 0;
            if (FUNC_3(&VAR_12->super)) {
                VAR_16.events |= VAR_1;
                if ((VAR_12->_flags & VAR_7) == 0) {
                    VAR_12->_flags |= VAR_7;
                    VAR_13 = 1;
                }
            } else {
                if ((VAR_12->_flags & VAR_7) != 0) {
                    VAR_12->_flags &= ~VAR_7;
                    VAR_13 = 1;
                }
            }
            if (FUNC_4(&VAR_12->super)) {
                VAR_16.events |= VAR_2;
                if ((VAR_12->_flags & VAR_8) == 0) {
                    VAR_12->_flags |= VAR_8;
                    VAR_13 = 1;
                }
            } else {
                if ((VAR_12->_flags & VAR_8) != 0) {
                    VAR_12->_flags &= ~VAR_8;
                    VAR_13 = 1;
                }
            }
            if (VAR_13) {
                if ((VAR_12->_flags & VAR_9) != 0) {
                    if (VAR_16.events != 0)
                        VAR_14 = VAR_5;
                    else
                        VAR_14 = VAR_4;
                } else {
                    FUNC_0(VAR_16.events != 0);
                    VAR_14 = VAR_3;
                }
                VAR_16.data.ptr = VAR_12;
                while ((VAR_15 = FUNC_1(VAR_11->ep, VAR_14, VAR_12->fd, &VAR_16)) != 0 && VAR_10 == VAR_0)
                    ;
                if (VAR_15 != 0)
                    return -1;
                if (VAR_14 == VAR_4)
                    VAR_12->_flags &= ~VAR_9;
                else
                    VAR_12->_flags |= VAR_9;
            }
        }
    }
    VAR_11->super._statechanged.tail_ref = &VAR_11->super._statechanged.head;

    return 0;
}
