
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int sa_family; } ;
struct TYPE_11__ {int * s6_addr; } ;
struct TYPE_12__ {int sin6_port; TYPE_3__ sin6_addr; int sin6_family; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_10__ {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct TYPE_14__ {TYPE_5__ sa; TYPE_4__ sin6; TYPE_2__ sin; } ;
typedef TYPE_6__ quicly_address_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;

__attribute__((used)) static int FUNC_2(quicly_address_t *VAR_3, const uint8_t **VAR_4, const uint8_t *VAR_5)
{
    FUNC_1(VAR_3, 0, sizeof(*VAR_3));

    if (*VAR_4 >= VAR_5)
        return 0;
    switch (*(*VAR_4)++) {
    case 4:
        if (VAR_5 - *VAR_4 < 6)
            return 0;
        VAR_3->sin.sin_family = VAR_0;
        FUNC_0(&VAR_3->sin.sin_addr.s_addr, *VAR_4, 4);
        *VAR_4 += 4;
        FUNC_0(&VAR_3->sin.sin_port, *VAR_4, 2);
        *VAR_4 += 2;
        break;
    case 6:
        if (VAR_5 - *VAR_4 < 18)
            return 0;
        VAR_3->sin6.sin6_family = VAR_1;
        FUNC_0(VAR_3->sin6.sin6_addr.s6_addr, *VAR_4, 16);
        *VAR_4 += 16;
        FUNC_0(&VAR_3->sin6.sin6_port, *VAR_4, 2);
        *VAR_4 += 2;
        break;
    case 0:
        VAR_3->sa.sa_family = VAR_2;
        break;
    default:
        return 0;
    }
    return 1;
}
