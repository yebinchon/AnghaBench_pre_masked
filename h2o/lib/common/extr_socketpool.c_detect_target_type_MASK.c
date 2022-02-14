
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_un {int dummy; } ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
typedef int socklen_t ;
struct TYPE_4__ {int host; } ;
typedef TYPE_1__ h2o_url_t ;
typedef int h2o_socketpool_target_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int ,struct sockaddr_un*) ;
 char const* VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sockaddr_storage*,int ,int) ;

h2o_socketpool_target_type_t FUNC_6(h2o_url_t *VAR_4, struct sockaddr_storage *VAR_5, socklen_t *VAR_6)
{
    FUNC_5(VAR_5, 0, sizeof(*VAR_5));
    const char *VAR_7 = FUNC_3(VAR_4->host, (struct sockaddr_un *)VAR_5);
    if (VAR_7 == VAR_3) {
        VAR_5->ss_family = VAR_0;
        struct sockaddr_in *VAR_8 = (struct sockaddr_in *)VAR_5;
        *VAR_6 = sizeof(*VAR_8);

        if (FUNC_1(VAR_4->host, &VAR_8->sin_addr) == 0) {
            VAR_8->sin_port = FUNC_4(FUNC_2(VAR_4));
            return VAR_2;
        } else {
            return VAR_1;
        }
    } else {
        FUNC_0(VAR_7 == ((void*)0));
        *VAR_6 = sizeof(struct sockaddr_un);
        return VAR_2;
    }
}
