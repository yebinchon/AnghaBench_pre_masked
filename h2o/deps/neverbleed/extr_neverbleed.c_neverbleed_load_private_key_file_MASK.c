
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_neverbleed_thread_data_t {int fd; } ;
struct expbuf_t {int * member_0; } ;
typedef int neverbleed_t ;
typedef int SSL_CTX ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int VAR_0 ;


 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,size_t,char*,char*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *,size_t,size_t,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct expbuf_t*) ;
 int FUNC_6 (struct expbuf_t*,char const*) ;
 scalar_t__ FUNC_7 (struct expbuf_t*,int ) ;
 scalar_t__ FUNC_8 (struct expbuf_t*,size_t*) ;
 char* FUNC_9 (struct expbuf_t*) ;
 scalar_t__ FUNC_10 (struct expbuf_t*,int ) ;
 struct st_neverbleed_thread_data_t* FUNC_11 (int *) ;
 int FUNC_12 (char*,int ,char*,...) ;

int FUNC_13(neverbleed_t *VAR_2, SSL_CTX *VAR_3, const char *VAR_4, char *VAR_5)
{
    struct st_neverbleed_thread_data_t *VAR_6 = FUNC_11(VAR_2);
    struct expbuf_t VAR_7 = {((void*)0)};
    int VAR_8 = 1;
    size_t VAR_9, VAR_10;
    EVP_PKEY *VAR_11;

    FUNC_6(&VAR_7, "load_key");
    FUNC_6(&VAR_7, VAR_4);
    if (FUNC_10(&VAR_7, VAR_6->fd) != 0)
        FUNC_3(VAR_1 != 0 ? "write error" : "connection closed by daemon");
    FUNC_5(&VAR_7);

    if (FUNC_7(&VAR_7, VAR_6->fd) != 0)
        FUNC_3(VAR_1 != 0 ? "read error" : "connection closed by daemon");
    if (FUNC_8(&VAR_7, &VAR_10) != 0 || FUNC_8(&VAR_7, &VAR_9) != 0) {
        VAR_1 = 0;
        FUNC_3("failed to parse response");
    }

    switch (VAR_10) {
    case 128: {
        char *VAR_12, *VAR_13;

        if ((VAR_12 = FUNC_9(&VAR_7)) == ((void*)0) || (VAR_13 = FUNC_9(&VAR_7)) == ((void*)0)) {
            VAR_1 = 0;
            FUNC_3("failed to parse response");
        }
        VAR_11 = FUNC_2(VAR_2, VAR_9, VAR_12, VAR_13);
        break;
    }
    default: {
        char *VAR_14;

        if ((VAR_14 = FUNC_9(&VAR_7)) == ((void*)0)) {
            VAR_1 = 0;
            FUNC_3("failed to parse response");
        }

        FUNC_12(VAR_5, VAR_0, "%s", VAR_14);
        return -1;
    }
    }

    FUNC_5(&VAR_7);


    if (FUNC_1(VAR_3, VAR_11) != 1) {
        FUNC_12(VAR_5, VAR_0, "SSL_CTX_use_PrivateKey failed");
        VAR_8 = 0;
    }

    FUNC_0(VAR_11);
    return VAR_8;
}
