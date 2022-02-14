
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int h2o_url_t ;
typedef int h2o_socketpool_target_t ;
typedef int h2o_socketpool_t ;
struct TYPE_7__ {int loop; int * http3; } ;
typedef TYPE_1__ h2o_httpclient_ctx_t ;
struct TYPE_8__ {int body_size; int url; } ;
typedef int SSL_CTX ;


 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 () ;
 int * VAR_7 ;
 int VAR_8 ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,int *,TYPE_1__*,int *,int *,int ) ;
 int FUNC_8 (int *,int *,int *,TYPE_1__*,int *,int ) ;
 int FUNC_9 (int *,int *) ;
 void* FUNC_10 (int) ;
 int * FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int,int **,int,int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int ) ;
 scalar_t__ FUNC_18 (int ,int ,int *) ;
 int VAR_9 ;
 int FUNC_19 (TYPE_1__*,char*,int ) ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 int FUNC_20 (char*,char*,char*,char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_21 (char*) ;

__attribute__((used)) static void FUNC_22(h2o_httpclient_ctx_t *VAR_13)
{
    h2o_url_t *VAR_14;


    FUNC_12(&VAR_10);


    VAR_14 = FUNC_11(&VAR_10, *VAR_14, 1);
    if (FUNC_18(VAR_11.url, VAR_3, VAR_14) != 0) {
        FUNC_19(VAR_13, "unrecognized type of URL: %s", VAR_11.url);
        return;
    }

    VAR_8 = VAR_11.body_size;


    if (VAR_13->http3 != ((void*)0)) {
        FUNC_8(((void*)0), &VAR_10, VAR_14, VAR_13, VAR_14, VAR_9);
    } else {
        if (VAR_7 == ((void*)0)) {
            VAR_7 = FUNC_10(sizeof(*VAR_7));
            h2o_socketpool_t *VAR_15 = FUNC_10(sizeof(*VAR_15));
            h2o_socketpool_target_t *VAR_16 = FUNC_13(VAR_14, ((void*)0));
            FUNC_14(VAR_15, 10, &VAR_16, 1, ((void*)0));
            FUNC_17(VAR_15, VAR_2);
            FUNC_15(VAR_15, VAR_13->loop);
            FUNC_9(VAR_7, VAR_15);


            char *VAR_17, *VAR_18;
            if ((VAR_17 = FUNC_6("H2O_ROOT")) == ((void*)0))
                VAR_17 = FUNC_0(VAR_1);

            VAR_18 = FUNC_10(FUNC_21(VAR_17) + FUNC_21("/share/h2o/ca-bundle.crt") + 1);
            FUNC_20(VAR_18, "%s%s", VAR_17, "/share/h2o/ca-bundle.crt");


            SSL_CTX *VAR_19 = FUNC_3(FUNC_5());
            FUNC_2(VAR_19, VAR_18, ((void*)0));
            if (VAR_12) {
                FUNC_4(VAR_19, VAR_5, ((void*)0));
            } else {
                FUNC_4(VAR_19, VAR_6 | VAR_4, ((void*)0));
            }
            FUNC_16(VAR_15, VAR_19);
            FUNC_1(VAR_19);
        }
        FUNC_7(((void*)0), &VAR_10, VAR_14, VAR_13, VAR_7, VAR_14, VAR_9);
    }
}
