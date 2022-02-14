
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_neverbleed_rsa_exdata_t {size_t key_index; TYPE_1__* nb; } ;
struct TYPE_3__ {int engine; } ;
typedef TYPE_1__ neverbleed_t ;
typedef int RSA ;
typedef int EVP_PKEY ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int **,char const*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (int *,int ,struct st_neverbleed_rsa_exdata_t*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,...) ;
 struct st_neverbleed_rsa_exdata_t* FUNC_10 (int) ;
 int VAR_1 ;

__attribute__((used)) static EVP_PKEY *FUNC_11(neverbleed_t *VAR_2, size_t VAR_3, const char *VAR_4, const char *VAR_5)
{
    struct st_neverbleed_rsa_exdata_t *VAR_6;
    RSA *VAR_7;
    EVP_PKEY *VAR_8;
    BIGNUM *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);

    if ((VAR_6 = FUNC_10(sizeof(*VAR_6))) == ((void*)0)) {
        FUNC_9(VAR_1, "no memory\n");
        FUNC_8();
    }
    VAR_6->nb = VAR_2;
    VAR_6->key_index = VAR_3;

    VAR_7 = FUNC_4(VAR_2->engine);
    FUNC_6(VAR_7, 0, VAR_6);
    if (FUNC_0(&VAR_9, VAR_4) == 0) {
        FUNC_9(VAR_1, "failed to parse e:%s\n", VAR_4);
        FUNC_8();
    }
    if (FUNC_0(&VAR_10, VAR_5) == 0) {
        FUNC_9(VAR_1, "failed to parse n:%s\n", VAR_5);
        FUNC_8();
    }
    FUNC_5(VAR_7, VAR_10, VAR_9, ((void*)0));
    FUNC_7(VAR_7, VAR_0);

    VAR_8 = FUNC_1();
    FUNC_2(VAR_8, VAR_7);
    FUNC_3(VAR_7);

    return VAR_8;
}
