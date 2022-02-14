
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
 int VAR_3 ;
 int FUNC_1 () ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int,struct sockaddr_in*) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,struct sockaddr const*,int ) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8() {
    VAR_1 = FUNC_1();

    uv_tcp_t VAR_4;
    FUNC_7(VAR_1, &VAR_4);

    struct sockaddr_in VAR_5;
    FUNC_3("0.0.0.0", 7000, &VAR_5);
    FUNC_6(&VAR_4, (const struct sockaddr *)&VAR_5, 0);
    int VAR_6 = FUNC_4((uv_stream_t*) &VAR_4, 128, VAR_2);
    if (VAR_6) {
        FUNC_0(VAR_3, "Listen error %s\n", FUNC_2(VAR_6));
        return 1;
    }
    return FUNC_5(VAR_1, VAR_0);
}
