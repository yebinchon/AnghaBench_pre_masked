
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yoml_t ;
struct addrinfo {int ai_socktype; int ai_protocol; int ai_flags; } ;
typedef int hints ;
typedef int h2o_configurator_command_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_2 (int *,int *,char*,...) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;

__attribute__((used)) static struct addrinfo *FUNC_4(h2o_configurator_command_t *VAR_3, yoml_t *VAR_4, int VAR_5, int VAR_6,
                                        const char *VAR_7, const char *VAR_8)
{
    struct addrinfo VAR_9, *VAR_10;
    int VAR_11;

    FUNC_3(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.ai_socktype = VAR_5;
    VAR_9.ai_protocol = VAR_6;
    VAR_9.ai_flags = VAR_0 | VAR_1 | VAR_2;

    if ((VAR_11 = FUNC_1(VAR_7, VAR_8, &VAR_9, &VAR_10)) != 0) {
        FUNC_2(VAR_3, VAR_4, "failed to resolve the listening address: %s", FUNC_0(VAR_11));
        return ((void*)0);
    } else if (VAR_10 == ((void*)0)) {
        FUNC_2(VAR_3, VAR_4, "failed to resolve the listening address: getaddrinfo returned an empty list");
        return ((void*)0);
    }

    return VAR_10;
}
