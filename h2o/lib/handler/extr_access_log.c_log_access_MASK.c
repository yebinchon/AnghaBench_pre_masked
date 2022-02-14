
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_h2o_access_logger_t {TYPE_1__* fh; } ;
typedef int h2o_req_t ;
typedef int h2o_logger_t ;
struct TYPE_2__ {int fd; int logconf; } ;
typedef TYPE_1__ h2o_access_log_filehandle_t ;
typedef int buf ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int *,size_t*,char*) ;
 int FUNC_2 (int ,char*,size_t) ;

__attribute__((used)) static void FUNC_3(h2o_logger_t *VAR_0, h2o_req_t *VAR_1)
{
    struct st_h2o_access_logger_t *VAR_2 = (struct st_h2o_access_logger_t *)VAR_0;
    h2o_access_log_filehandle_t *VAR_3 = VAR_2->fh;
    char *VAR_4, VAR_5[4096];
    size_t VAR_6;


    VAR_6 = sizeof(VAR_5);
    VAR_4 = FUNC_1(VAR_3->logconf, VAR_1, &VAR_6, VAR_5);


    FUNC_2(VAR_3->fd, VAR_4, VAR_6);


    if (VAR_4 != VAR_5)
        FUNC_0(VAR_4);
}
