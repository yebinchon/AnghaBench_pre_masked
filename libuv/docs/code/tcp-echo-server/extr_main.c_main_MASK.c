
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int *,struct sockaddr const*,int ) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8() {
    VAR_4 = FUNC_1();

    uv_tcp_t VAR_7;
    FUNC_7(VAR_4, &VAR_7);

    FUNC_2("0.0.0.0", VAR_1, &VAR_3);

    FUNC_6(&VAR_7, (const struct sockaddr*)&VAR_3, 0);
    int VAR_8 = FUNC_3((uv_stream_t*) &VAR_7, VAR_0, VAR_5);
    if (VAR_8) {
        FUNC_0(VAR_6, "Listen error %s\n", FUNC_5(VAR_8));
        return 1;
    }
    return FUNC_4(VAR_4, VAR_2);
}
