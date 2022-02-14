
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct key_slots {size_t reserved_size; size_t size; int * bita_avail; } ;
struct TYPE_3__ {int * ecdsa_keys; int * keys; } ;
struct TYPE_4__ {TYPE_1__ keys; } ;


 size_t FUNC_0 (size_t) ;


 size_t FUNC_1 (size_t) ;
 TYPE_2__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int,size_t) ;
 void* FUNC_4 (int *,size_t) ;

__attribute__((used)) static void FUNC_5(int VAR_2, struct key_slots *VAR_3)
{

    if (!VAR_3->reserved_size || (VAR_3->size >= VAR_3->reserved_size)) {
        size_t VAR_4 = VAR_3->reserved_size ? ((size_t)(VAR_3->reserved_size * 0.50) + VAR_3->reserved_size + 64 - 1 - ((size_t)(VAR_3->reserved_size * 0.50) + VAR_3->reserved_size + 64 - 1) % 64)
                : VAR_1;


        switch (VAR_2) {
        case 128:
            if ((VAR_0.keys.keys = FUNC_4(VAR_0.keys.keys, sizeof(*VAR_0.keys.keys) * VAR_4)) == ((void*)0))
                FUNC_2("no memory");
            break;
        case 129:
            if ((VAR_0.keys.ecdsa_keys = FUNC_4(VAR_0.keys.ecdsa_keys, sizeof(*VAR_0.keys.ecdsa_keys) * VAR_4)) == ((void*)0))
                FUNC_2("no memory");
            break;
        default:
            FUNC_2("invalid type adjusting reserved");
        }

        uint8_t *VAR_5;
        if ((VAR_5 = FUNC_4(VAR_3->bita_avail, FUNC_0(VAR_4))) == ((void*)0))
            FUNC_2("no memory");


        FUNC_3(&VAR_5[FUNC_0(VAR_3->reserved_size)], 0xff, FUNC_0(VAR_4 - VAR_3->reserved_size));

        VAR_3->bita_avail = VAR_5;
        VAR_3->reserved_size = VAR_4;
    }
}
