
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_5__ {int sa_family; } ;
struct TYPE_6__ {struct sockaddr_in6 sin6; struct sockaddr_in sin; TYPE_1__ sa; } ;
typedef TYPE_2__ quicly_address_t ;





 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_2(quicly_address_t *VAR_0, struct sockaddr *VAR_1)
{
    if (VAR_1 == ((void*)0)) {
        VAR_0->sa.sa_family = 128;
        return;
    }

    switch (VAR_1->sa_family) {
    case 128:
        VAR_0->sa.sa_family = 128;
        break;
    case 130:
        VAR_0->sin = *(struct sockaddr_in *)VAR_1;
        break;
    case 129:
        VAR_0->sin6 = *(struct sockaddr_in6 *)VAR_1;
        break;
    default:
        FUNC_1(VAR_0, 0xff, sizeof(*VAR_0));
        FUNC_0(!"unexpected address type");
        break;
    }
}
