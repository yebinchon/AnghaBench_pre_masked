
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_un {int sun_path; } ;
struct TYPE_4__ {int s6_addr; } ;
struct sockaddr_in6 {scalar_t__ sin6_flowinfo; scalar_t__ sin6_scope_id; int sin6_port; TYPE_2__ sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct sockaddr *VAR_3, struct sockaddr *VAR_4, int VAR_5)
{






    do { if (VAR_3->sa_family != VAR_4->sa_family) return VAR_3->sa_family < VAR_4->sa_family ? -1 : 1; } while (0);

    if (VAR_3->sa_family == VAR_2) {
        struct sockaddr_un *VAR_6 = (void *)VAR_3, *VAR_7 = (void *)VAR_4;
        int VAR_8 = FUNC_5(VAR_6->sun_path, VAR_7->sun_path);
        if (VAR_8 != 0)
            return VAR_8;
    } else if (VAR_3->sa_family == VAR_0) {
        struct sockaddr_in *VAR_9 = (void *)VAR_3, *VAR_10 = (void *)VAR_4;
        do { if (FUNC_3(VAR_9->sin_addr.s_addr) != FUNC_3(VAR_10->sin_addr.s_addr)) return FUNC_3(VAR_9->sin_addr.s_addr) < FUNC_3(VAR_10->sin_addr.s_addr) ? -1 : 1; } while (0);
        if (VAR_5)
            do { if (FUNC_4(VAR_9->sin_port) != FUNC_4(VAR_10->sin_port)) return FUNC_4(VAR_9->sin_port) < FUNC_4(VAR_10->sin_port) ? -1 : 1; } while (0);
    } else if (VAR_3->sa_family == VAR_1) {
        struct sockaddr_in6 *VAR_11 = (void *)VAR_3, *VAR_12 = (void *)VAR_4;
        int VAR_13 = FUNC_2(VAR_11->sin6_addr.s6_addr, VAR_12->sin6_addr.s6_addr, sizeof(VAR_11->sin6_addr.s6_addr));
        if (VAR_13 != 0)
            return VAR_13;
        if (VAR_5)
            do { if (FUNC_4(VAR_11->sin6_port) != FUNC_4(VAR_12->sin6_port)) return FUNC_4(VAR_11->sin6_port) < FUNC_4(VAR_12->sin6_port) ? -1 : 1; } while (0);
        do { if (VAR_11->sin6_flowinfo != VAR_12->sin6_flowinfo) return VAR_11->sin6_flowinfo < VAR_12->sin6_flowinfo ? -1 : 1; } while (0);
        do { if (VAR_11->sin6_scope_id != VAR_12->sin6_scope_id) return VAR_11->sin6_scope_id < VAR_12->sin6_scope_id ? -1 : 1; } while (0);
    } else {
        FUNC_1(!"unknown sa_family");
    }


    return 0;
}
