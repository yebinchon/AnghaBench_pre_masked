
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 () ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,int,struct sockaddr_in*) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,struct sockaddr const*,int ) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9() {
    VAR_1 = FUNC_2();

    FUNC_1();

    uv_tcp_t VAR_4;
    FUNC_8(VAR_1, &VAR_4);

    struct sockaddr_in VAR_5;
    FUNC_4("0.0.0.0", 7000, &VAR_5);
    FUNC_7(&VAR_4, (const struct sockaddr *)&VAR_5, 0);
    int VAR_6;
    if ((VAR_6 = FUNC_5((uv_stream_t*) &VAR_4, 128, VAR_2))) {
        FUNC_0(VAR_3, "Listen error %s\n", FUNC_3(VAR_6));
        return 2;
    }
    return FUNC_6(VAR_1, VAR_0);
}
