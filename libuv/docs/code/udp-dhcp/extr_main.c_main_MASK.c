
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_send_t ;
typedef int uv_buf_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,struct sockaddr_in*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,struct sockaddr const*,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int *,int *,int,struct sockaddr const*,int ) ;
 int FUNC_8 (int *,int) ;

int FUNC_9() {
    VAR_3 = FUNC_1();

    FUNC_5(VAR_3, &VAR_6);
    struct sockaddr_in VAR_8;
    FUNC_2("0.0.0.0", 68, &VAR_8);
    FUNC_4(&VAR_6, (const struct sockaddr *)&VAR_8, VAR_1);
    FUNC_6(&VAR_6, VAR_2, VAR_4);

    FUNC_5(VAR_3, &VAR_7);
    struct sockaddr_in VAR_9;
    FUNC_2("0.0.0.0", 0, &VAR_9);
    FUNC_4(&VAR_7, (const struct sockaddr *)&VAR_9, 0);
    FUNC_8(&VAR_7, 1);

    uv_udp_send_t VAR_10;
    uv_buf_t VAR_11 = FUNC_0();

    struct sockaddr_in VAR_12;
    FUNC_2("255.255.255.255", 67, &VAR_12);
    FUNC_7(&VAR_10, &VAR_7, &VAR_11, 1, (const struct sockaddr *)&VAR_12, VAR_5);

    return FUNC_3(VAR_3, VAR_0);
}
