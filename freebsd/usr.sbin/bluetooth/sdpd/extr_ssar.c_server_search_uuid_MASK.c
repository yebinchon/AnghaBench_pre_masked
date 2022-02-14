
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint128_t ;
typedef TYPE_2__* provider_p ;
typedef int buffer ;
struct TYPE_7__ {int (* create ) (int *,int *,int const*,int) ;} ;
typedef TYPE_3__ attr_t ;
struct TYPE_6__ {TYPE_1__* profile; } ;
struct TYPE_5__ {TYPE_3__* attrs; } ;


 scalar_t__ FUNC_0 (int *,int *,int const*) ;
 int FUNC_1 (int *,int *,int const*,int) ;

__attribute__((used)) static int
FUNC_2(provider_p const VAR_0, const uint128_t *VAR_1)
{
        uint8_t VAR_2[256];
        const attr_t *VAR_3;
        int VAR_4;

        for (VAR_3 = VAR_0->profile->attrs; VAR_3->create != ((void*)0); VAR_3++) {

                VAR_4 = VAR_3->create(VAR_2, VAR_2 + sizeof(VAR_2),
                    (const uint8_t *)VAR_0->profile, sizeof(*VAR_0->profile));
                if (VAR_4 < 0)
                        continue;
                if (FUNC_0(VAR_2, VAR_2 + VAR_4, VAR_1) == 0)
                        return (0);
        }
        return (1);
}
