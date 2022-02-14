
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_port; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
typedef int ptls_handshake_properties_t ;
typedef int ptls_context_t ;
typedef int on ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *,int ) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,int *,int *,char const*,int *,int,int ) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,int ,int ,int*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct sockaddr *VAR_5, socklen_t VAR_6, ptls_context_t *VAR_7, const char *VAR_8,
                      ptls_handshake_properties_t *VAR_9, int VAR_10)
{
    int VAR_11, VAR_12, VAR_13 = 1;

    if ((VAR_11 = FUNC_8(VAR_5->sa_family, VAR_0, 0)) == -1) {
        FUNC_6("socket(2) failed");
        return 1;
    }
    if (FUNC_7(VAR_11, VAR_1, VAR_3, &VAR_13, sizeof(VAR_13)) != 0) {
        FUNC_6("setsockopt(SO_REUSEADDR) failed");
        return 1;
    }
    if (FUNC_1(VAR_11, VAR_5, VAR_6) != 0) {
        FUNC_6("bind(2) failed");
        return 1;
    }
    if (FUNC_4(VAR_11, VAR_2) != 0) {
        FUNC_6("listen(2) failed");
        return 1;
    }

    FUNC_2(VAR_4, "server started on port %d\n", FUNC_5(((struct sockaddr_in *) VAR_5)->sin_port));
    while (1) {
        FUNC_2(VAR_4, "waiting for connections\n");
        if ((VAR_12 = FUNC_0(VAR_11, ((void*)0), 0)) != -1)
            FUNC_3(VAR_12, VAR_7, ((void*)0), VAR_8, VAR_9, VAR_10, 0);
    }

    return 0;
}
