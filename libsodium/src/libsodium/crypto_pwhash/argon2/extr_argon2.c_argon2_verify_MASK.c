
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int argon2_type ;
struct TYPE_4__ {int * out; void* outlen; int * salt; int * ad; void* saltlen; int threads; int m_cost; int t_cost; void* adlen; scalar_t__ secretlen; int * secret; scalar_t__ pwdlen; int * pwd; } ;
typedef TYPE_1__ argon2_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (TYPE_1__*,char const*,int ) ;
 int FUNC_1 (int ,int ,int ,void const*,size_t const,int *,void*,int *,void*,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_5 (int *,int *,void*) ;
 size_t FUNC_6 (char const*) ;

int
FUNC_7(const char *VAR_5, const void *VAR_6, const size_t VAR_7,
              argon2_type VAR_8)
{
    argon2_context VAR_9;
    uint8_t *VAR_10;
    int VAR_11;
    int VAR_12;
    size_t VAR_13;

    FUNC_4(&VAR_9, 0, sizeof VAR_9);

    VAR_9.pwd = ((void*)0);
    VAR_9.pwdlen = 0;
    VAR_9.secret = ((void*)0);
    VAR_9.secretlen = 0;


    VAR_13 = FUNC_6(VAR_5);
    if (VAR_13 > VAR_4) {
        return VAR_0;
    }
    VAR_9.adlen = (uint32_t) VAR_13;
    VAR_9.saltlen = (uint32_t) VAR_13;
    VAR_9.outlen = (uint32_t) VAR_13;

    VAR_9.ad = (uint8_t *) FUNC_3(VAR_9.adlen);
    VAR_9.salt = (uint8_t *) FUNC_3(VAR_9.saltlen);
    VAR_9.out = (uint8_t *) FUNC_3(VAR_9.outlen);
    if (!VAR_9.out || !VAR_9.salt || !VAR_9.ad) {
        FUNC_2(VAR_9.ad);
        FUNC_2(VAR_9.salt);
        FUNC_2(VAR_9.out);
        return VAR_1;
    }
    VAR_10 = (uint8_t *) FUNC_3(VAR_9.outlen);
    if (!VAR_10) {
        FUNC_2(VAR_9.ad);
        FUNC_2(VAR_9.salt);
        FUNC_2(VAR_9.out);
        return VAR_1;
    }

    VAR_11 = FUNC_0(&VAR_9, VAR_5, VAR_8);
    if (VAR_11 != VAR_2) {
        FUNC_2(VAR_9.ad);
        FUNC_2(VAR_9.salt);
        FUNC_2(VAR_9.out);
        FUNC_2(VAR_10);
        return VAR_11;
    }

    VAR_12 = FUNC_1(VAR_9.t_cost, VAR_9.m_cost, VAR_9.threads, VAR_6, VAR_7,
                      VAR_9.salt, VAR_9.saltlen, VAR_10, VAR_9.outlen, ((void*)0), 0, VAR_8);

    FUNC_2(VAR_9.ad);
    FUNC_2(VAR_9.salt);

    if (VAR_12 != VAR_2 || FUNC_5(VAR_10, VAR_9.out, VAR_9.outlen) != 0) {
        VAR_12 = VAR_3;
    }
    FUNC_2(VAR_10);
    FUNC_2(VAR_9.out);

    return VAR_12;
}
