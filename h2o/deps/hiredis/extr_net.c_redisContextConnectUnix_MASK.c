
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
struct TYPE_8__ {char const* path; } ;
struct TYPE_9__ {int flags; int fd; struct timeval const* timeout; TYPE_1__ unix_sock; int connection_type; } ;
typedef TYPE_2__ redisContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,struct sockaddr*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct timeval const*) ;
 struct timeval const* FUNC_2 (int) ;
 int FUNC_3 (struct timeval const*,struct timeval const*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,long*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,long) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int) ;
 char const* FUNC_8 (char const*) ;
 int FUNC_9 (int ,char const*,int) ;

int FUNC_10(redisContext *VAR_8, const char *VAR_9, const struct timeval *VAR_10) {
    int VAR_11 = (VAR_8->flags & VAR_2);
    struct sockaddr_un VAR_12;
    long VAR_13 = -1;

    if (FUNC_6(VAR_8,VAR_0) < 0)
        return VAR_5;
    if (FUNC_7(VAR_8,0) != VAR_6)
        return VAR_5;

    VAR_8->connection_type = VAR_4;
    if (VAR_8->unix_sock.path != VAR_9)
        VAR_8->unix_sock.path = FUNC_8(VAR_9);

    if (VAR_10) {
        if (VAR_8->timeout != VAR_10) {
            if (VAR_8->timeout == ((void*)0))
                VAR_8->timeout = FUNC_2(sizeof(struct timeval));

            FUNC_3(VAR_8->timeout, VAR_10, sizeof(struct timeval));
        }
    } else {
        if (VAR_8->timeout)
            FUNC_1(VAR_8->timeout);
        VAR_8->timeout = ((void*)0);
    }

    if (FUNC_4(VAR_8,&VAR_13) != VAR_6)
        return VAR_5;

    VAR_12.sun_family = VAR_0;
    FUNC_9(VAR_12.sun_path,VAR_9,sizeof(VAR_12.sun_path)-1);
    if (FUNC_0(VAR_8->fd, (struct sockaddr*)&VAR_12, sizeof(VAR_12)) == -1) {
        if (VAR_7 == VAR_1 && !VAR_11) {

        } else {
            if (FUNC_5(VAR_8,VAR_13) != VAR_6)
                return VAR_5;
        }
    }


    if (VAR_11 && FUNC_7(VAR_8,1) != VAR_6)
        return VAR_5;

    VAR_8->flags |= VAR_3;
    return VAR_6;
}
