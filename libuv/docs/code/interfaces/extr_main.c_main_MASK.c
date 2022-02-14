
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sin_family; } ;
struct TYPE_6__ {int address6; TYPE_3__ address4; } ;
struct TYPE_7__ {char* name; TYPE_1__ address; scalar_t__ is_internal; } ;
typedef TYPE_2__ uv_interface_address_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__**,int*) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (int *,char*,int) ;

int FUNC_5() {
    char VAR_2[512];
    uv_interface_address_t *VAR_3;
    int VAR_4, VAR_5;

    FUNC_2(&VAR_3, &VAR_4);
    VAR_5 = VAR_4;

    FUNC_0("Number of interfaces: %d\n", VAR_4);
    while (VAR_5--) {
        uv_interface_address_t VAR_6 = VAR_3[VAR_5];

        FUNC_0("Name: %s\n", VAR_6.name);
        FUNC_0("Internal? %s\n", VAR_6.is_internal ? "Yes" : "No");

        if (VAR_6.address.address4.sin_family == VAR_0) {
            FUNC_3(&VAR_6.address.address4, VAR_2, sizeof(VAR_2));
            FUNC_0("IPv4 address: %s\n", VAR_2);
        }
        else if (VAR_6.address.address4.sin_family == VAR_1) {
            FUNC_4(&VAR_6.address.address6, VAR_2, sizeof(VAR_2));
            FUNC_0("IPv6 address: %s\n", VAR_2);
        }

        FUNC_0("\n");
    }

    FUNC_1(VAR_3, VAR_4);
    return 0;
}
