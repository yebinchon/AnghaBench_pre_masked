
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ interval; unsigned int max_failures; int cmd; } ;
struct listener_ssl_config_t {char* certificate_file; TYPE_1__ ocsp_stapling; } ;
typedef int h2o_buffer_t ;



 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (unsigned int) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct listener_ssl_config_t*,int *) ;

__attribute__((used)) static void *FUNC_8(void *VAR_3)
{
    struct listener_ssl_config_t *VAR_4 = VAR_3;
    time_t VAR_5 = 0, VAR_6;
    unsigned VAR_7 = 0;
    int VAR_8;
    h2o_buffer_t *VAR_9;

    FUNC_0(VAR_4->ocsp_stapling.interval != 0);

    while (1) {

        if ((VAR_6 = FUNC_6(((void*)0))) < VAR_5) {
            time_t VAR_10 = VAR_5 - VAR_6;
            FUNC_5(VAR_10 < VAR_0 ? (unsigned)VAR_10 : VAR_0);
            continue;
        }

        FUNC_4(&VAR_1);
        VAR_8 = FUNC_2(VAR_4->certificate_file, VAR_4->ocsp_stapling.cmd, &VAR_9);
        FUNC_3(&VAR_1);
        switch (VAR_8) {
        case 0:
            VAR_7 = 0;
            FUNC_7(VAR_4, VAR_9);
            FUNC_1(VAR_2, "[OCSP Stapling] successfully updated the response for certificate file:%s\n",
                    VAR_4->certificate_file);
            break;
        case 128:
            if (VAR_7 == VAR_4->ocsp_stapling.max_failures) {
                FUNC_1(VAR_2,
                        "[OCSP Stapling] OCSP stapling is temporary disabled due to repeated errors for certificate file:%s\n",
                        VAR_4->certificate_file);
                FUNC_7(VAR_4, ((void*)0));
            } else {
                FUNC_1(VAR_2,
                        "[OCSP Stapling] reusing old response due to a temporary error occurred while fetching OCSP "
                        "response for certificate file:%s\n",
                        VAR_4->certificate_file);
                ++VAR_7;
            }
            break;
        default:
            FUNC_7(VAR_4, ((void*)0));
            FUNC_1(VAR_2, "[OCSP Stapling] disabled for certificate file:%s\n", VAR_4->certificate_file);
            goto Exit;
        }

        VAR_5 = FUNC_6(((void*)0)) + VAR_4->ocsp_stapling.interval;
    }

Exit:
    return ((void*)0);
}
