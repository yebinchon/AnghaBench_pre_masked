
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int argon2_type ;
struct TYPE_4__ {unsigned char* out; unsigned char* pwd; unsigned char* salt; unsigned int adlen; unsigned int secretlen; scalar_t__ t_cost; scalar_t__ m_cost; int * secret; int ad; scalar_t__ saltlen; scalar_t__ pwdlen; scalar_t__ outlen; } ;
typedef TYPE_1__ argon2_context ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char const*,int ) ;
 scalar_t__ FUNC_1 (size_t,unsigned int) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_4, unsigned long long VAR_5, size_t VAR_6,
              argon2_type VAR_7)
{
    unsigned char *VAR_8;
    argon2_context VAR_9;
    size_t VAR_10;
    int VAR_11 = -1;

    VAR_10 = FUNC_4(VAR_4);
    VAR_6 /= 1024U;
    if (VAR_5 > VAR_1 || VAR_6 > VAR_1 ||
        VAR_10 >= VAR_2) {
        VAR_3 = VAR_0;
        return -1;
    }
    FUNC_3(&VAR_9, 0, sizeof VAR_9);
    if ((VAR_8 = (unsigned char *) FUNC_1(VAR_10, 1U)) == ((void*)0)) {
        return -1;
    }
    VAR_9.out = VAR_9.pwd = VAR_9.salt = VAR_8;
    VAR_9.outlen = VAR_9.pwdlen = VAR_9.saltlen = (uint32_t) VAR_10;
    VAR_9.ad = *(VAR_9.secret = ((void*)0));
    VAR_9.adlen = VAR_9.secretlen = 0U;
    if (FUNC_0(&VAR_9, VAR_4, VAR_7) != 0) {
        VAR_3 = VAR_0;
        VAR_11 = -1;
    } else if (VAR_9.t_cost != (uint32_t) VAR_5 ||
               VAR_9.m_cost != (uint32_t) VAR_6) {
        VAR_11 = 1;
    } else {
        VAR_11 = 0;
    }
    FUNC_2(VAR_8);

    return VAR_11;
}
