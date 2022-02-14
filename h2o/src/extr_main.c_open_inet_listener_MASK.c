
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int yoml_t ;
typedef int tfo_queues ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int h2o_configurator_command_t ;
typedef int flag ;
struct TYPE_2__ {int tfo_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int ) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int *,int *,char*,char*,char const*,char const*,char*) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int,int ,void const*,int) ;
 int FUNC_8 (int,int,int) ;
 int VAR_11 ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(h2o_configurator_command_t *VAR_12, yoml_t *VAR_13, const char *VAR_14, const char *VAR_15, int VAR_16,
                              int VAR_17, int VAR_18, struct sockaddr *VAR_19, socklen_t VAR_20)
{
    int VAR_21;

    if ((VAR_21 = FUNC_8(VAR_16, VAR_17, VAR_18)) == -1)
        goto Error;
    FUNC_6(VAR_21);
    {
        int VAR_22 = 1;
        if (FUNC_7(VAR_21, VAR_5, VAR_6, &VAR_22, sizeof(VAR_22)) != 0)
            goto Error;
    }
    if (FUNC_1(VAR_21, VAR_19, VAR_20) != 0)
        goto Error;


    if (VAR_18 == VAR_3) {
        if (FUNC_5(VAR_21, VAR_1) != 0)
            goto Error;

        if (VAR_9.tfo_queues > 0) {
            FUNC_0(!"conf.tfo_queues not zero on platform without TCP_FASTOPEN");

        }
    }

    return VAR_21;

Error:
    if (VAR_21 != -1)
        FUNC_2(VAR_21);
    FUNC_4(((void*)0), VAR_13, "failed to listen to %s port %s:%s: %s", VAR_18 == VAR_3 ? "TCP" : "UDP",
                               VAR_14 != ((void*)0) ? VAR_14 : "ANY", VAR_15, FUNC_9(VAR_10));
    return -1;
}
