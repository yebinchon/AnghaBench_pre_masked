
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int h2o_logconf_t ;
struct TYPE_4__ {int fd; int * logconf; } ;
typedef TYPE_1__ h2o_access_log_filehandle_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char*) ;
 int * FUNC_2 (char const*,int,char*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *,int,int ) ;
 int VAR_0 ;

h2o_access_log_filehandle_t *FUNC_5(const char *VAR_1, const char *VAR_2, int VAR_3)
{
    h2o_logconf_t *VAR_4;
    int VAR_5;
    h2o_access_log_filehandle_t *VAR_6;
    char VAR_7[256];


    if (VAR_2 == ((void*)0))
        VAR_2 = "%h %l %u %t \"%r\" %s %b \"%{Referer}i\" \"%{User-agent}i\"";
    if ((VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_7)) == ((void*)0)) {
        FUNC_1("%s\n", VAR_7);
        return ((void*)0);
    }


    if ((VAR_5 = FUNC_0(VAR_1)) == -1) {
        FUNC_3(VAR_4);
        return ((void*)0);
    }

    VAR_6 = FUNC_4(((void*)0), sizeof(*VAR_6), VAR_0);
    VAR_6->logconf = VAR_4;
    VAR_6->fd = VAR_5;
    return VAR_6;
}
