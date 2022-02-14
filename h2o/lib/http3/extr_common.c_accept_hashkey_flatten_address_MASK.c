
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_11__ {int sin_port; TYPE_1__ sin_addr; } ;
struct TYPE_9__ {int * s6_addr; } ;
struct TYPE_10__ {TYPE_2__ sin6_addr; } ;
struct TYPE_12__ {int sa_family; } ;
struct TYPE_13__ {TYPE_4__ sin; TYPE_3__ sin6; TYPE_5__ sa; } ;
typedef TYPE_6__ quicly_address_t ;





 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static uint8_t *FUNC_2(uint8_t *VAR_0, quicly_address_t *VAR_1)
{
    switch (VAR_1->sa.sa_family) {
    case 130:
        *VAR_0++ = 4;
        FUNC_1(VAR_0, &VAR_1->sin.sin_addr.s_addr, 4);
        VAR_0 += 4;
        FUNC_1(VAR_0, &VAR_1->sin.sin_port, 2);
        VAR_0 += 2;
        break;
    case 129:
        *VAR_0++ = 6;
        FUNC_1(VAR_0, VAR_1->sin6.sin6_addr.s6_addr, 16);
        VAR_0 += 16;
        FUNC_1(VAR_0, &VAR_1->sin.sin_port, 2);
        VAR_0 += 2;
        break;
    case 128:
        *VAR_0++ = 0;
    default:
        FUNC_0("unknown protocol family");
        break;
    }
    return VAR_0;
}
