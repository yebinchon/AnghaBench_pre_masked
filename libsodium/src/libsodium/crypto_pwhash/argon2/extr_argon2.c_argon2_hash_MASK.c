
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
typedef void* uint32_t ;
typedef int argon2_type ;
struct TYPE_4__ {char* out; char* pwd; char* salt; void* t_cost; void* m_cost; void* lanes; void* threads; int flags; scalar_t__ adlen; int * ad; scalar_t__ secretlen; int * secret; void* saltlen; void* pwdlen; void* outlen; } ;
typedef TYPE_1__ argon2_context ;


 int VAR_0 ;
 int VAR_1 ;
 size_t const VAR_2 ;
 size_t const VAR_3 ;
 size_t const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*,size_t const,TYPE_1__*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (size_t const) ;
 int FUNC_4 (void*,char*,size_t const) ;
 int FUNC_5 (char*,size_t const) ;

int
FUNC_6(const uint32_t VAR_10, const uint32_t VAR_11,
            const uint32_t VAR_12, const void *VAR_13, const size_t VAR_14,
            const void *VAR_15, const size_t VAR_16, void *VAR_17,
            const size_t VAR_18, char *VAR_19, const size_t VAR_20,
            argon2_type VAR_21)
{
    argon2_context VAR_22;
    int VAR_23;
    uint8_t *VAR_24;

    if (VAR_14 > VAR_3) {
        return VAR_8;
    }

    if (VAR_18 > VAR_2) {
        return VAR_7;
    }

    if (VAR_16 > VAR_4) {
        return VAR_9;
    }

    VAR_24 = (uint8_t *) FUNC_3(VAR_18);
    if (!VAR_24) {
        return VAR_5;
    }

    VAR_22.out = (uint8_t *) VAR_24;
    VAR_22.outlen = (uint32_t) VAR_18;
    VAR_22.pwd = (uint8_t *) VAR_13;
    VAR_22.pwdlen = (uint32_t) VAR_14;
    VAR_22.salt = (uint8_t *) VAR_15;
    VAR_22.saltlen = (uint32_t) VAR_16;
    VAR_22.secret = ((void*)0);
    VAR_22.secretlen = 0;
    VAR_22.ad = ((void*)0);
    VAR_22.adlen = 0;
    VAR_22.t_cost = VAR_10;
    VAR_22.m_cost = VAR_11;
    VAR_22.lanes = VAR_12;
    VAR_22.threads = VAR_12;
    VAR_22.flags = VAR_0;

    VAR_23 = FUNC_0(&VAR_22, VAR_21);

    if (VAR_23 != VAR_6) {
        FUNC_5(VAR_24, VAR_18);
        FUNC_2(VAR_24);
        return VAR_23;
    }


    if (VAR_17) {
        FUNC_4(VAR_17, VAR_24, VAR_18);
    }


    if (VAR_19 && VAR_20) {
        if (FUNC_1(VAR_19, VAR_20,
                                 &VAR_22, VAR_21) != VAR_6) {
            FUNC_5(VAR_24, VAR_18);
            FUNC_5(VAR_19, VAR_20);
            FUNC_2(VAR_24);
            return VAR_1;
        }
    }

    FUNC_5(VAR_24, VAR_18);
    FUNC_2(VAR_24);

    return VAR_6;
}
