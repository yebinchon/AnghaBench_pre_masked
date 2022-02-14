
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * write; } ;
struct TYPE_6__ {TYPE_1__ _cb; } ;
struct TYPE_5__ {scalar_t__ cnt; } ;
struct st_h2o_evloop_socket_t {int _flags; TYPE_3__ super; int fd; TYPE_2__ _wreq; } ;
typedef int socklen_t ;
typedef int so_err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int*,int*) ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 (TYPE_3__*,char const*) ;
 int FUNC_3 (struct st_h2o_evloop_socket_t*) ;

__attribute__((used)) static void FUNC_4(struct st_h2o_evloop_socket_t *VAR_8)
{
    if ((VAR_8->_flags & VAR_1) != 0) {

        return;
    }

    if ((VAR_8->_flags & VAR_2) != 0) {
        VAR_8->_flags &= ~VAR_2;
        FUNC_3(VAR_8);
    }

    if ((VAR_8->_flags & VAR_3) != 0) {
        const char *VAR_9 = ((void*)0);
        FUNC_0(VAR_8->super._cb.write != ((void*)0));
        VAR_8->_flags &= ~VAR_3;
        if (VAR_8->_wreq.cnt != 0) {

            VAR_9 = VAR_7;
            VAR_8->_wreq.cnt = 0;
        } else if ((VAR_8->_flags & VAR_0) != 0) {
            VAR_8->_flags &= ~VAR_0;
            int VAR_10 = 0;
            socklen_t VAR_11 = sizeof(VAR_10);
            VAR_10 = 0;
            if (FUNC_1(VAR_8->fd, VAR_4, VAR_5, &VAR_10, &VAR_11) != 0 || VAR_10 != 0) {

                VAR_9 = VAR_6;
            }
        }
        FUNC_2(&VAR_8->super, VAR_9);
    }
}
