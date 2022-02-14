
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef scalar_t__ off_t ;
typedef TYPE_1__* mpcth_t ;
typedef int intmax_t ;
struct TYPE_8__ {int base_table_length; int signature; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static mpcth_t
FUNC_7(off_t VAR_1)
{
    mpcth_t VAR_2;
    u_int8_t *VAR_3, VAR_4;
    int VAR_5, VAR_6;


    if ((u_int32_t)VAR_1 >= 1024 * 1024) {
 FUNC_6("bad mpcth address (0x%jx)\n", (intmax_t)VAR_1);
 return (((void*)0));
    }

    VAR_2 = FUNC_1(sizeof(*VAR_2));
    if (VAR_2 == ((void*)0)) {
 FUNC_6("unable to malloc space for MP Configuration Table Header");
 return (((void*)0));
    }
    if (!FUNC_2(VAR_1, VAR_2, sizeof(*VAR_2)))
 goto bad;

    if (FUNC_5(VAR_2->signature, VAR_0, FUNC_4(VAR_0)) != 0) {
        FUNC_6("bad mpcth signature");
 goto bad;
    }
    VAR_6 = VAR_2->base_table_length;
    VAR_2 = FUNC_3(VAR_2, VAR_6);
    if (VAR_2 == ((void*)0)) {
 FUNC_6("unable to realloc space for mpcth (len %u)", VAR_6);
 return (((void*)0));
    }
    if (!FUNC_2(VAR_1, VAR_2, VAR_6))
 goto bad;
    VAR_3 = (u_int8_t *)VAR_2;
    VAR_4 = 0;
    for (VAR_5 = 0; VAR_5 < VAR_2->base_table_length; VAR_5++)
 VAR_4 += *(VAR_3 + VAR_5);
    if (VAR_4 != 0) {
 FUNC_6("bad mpcth checksum (%d)", VAR_4);
 goto bad;
    }

    return VAR_2;
bad:
    FUNC_0(VAR_2);
    return (((void*)0));
}
