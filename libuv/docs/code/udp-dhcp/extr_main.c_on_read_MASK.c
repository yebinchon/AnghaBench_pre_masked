
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_udp_t ;
typedef int uv_handle_t ;
struct TYPE_3__ {scalar_t__ base; } ;
typedef TYPE_1__ uv_buf_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sockaddr_in const*,char*,int) ;
 int FUNC_6 (int *) ;

void FUNC_7(uv_udp_t *VAR_1, ssize_t VAR_2, const uv_buf_t *VAR_3, const struct sockaddr *VAR_4, unsigned VAR_5) {
    if (VAR_2 < 0) {
        FUNC_0(VAR_0, "Read error %s\n", FUNC_4(VAR_2));
        FUNC_3((uv_handle_t*) VAR_1, ((void*)0));
        FUNC_1(VAR_3->base);
        return;
    }

    char VAR_6[17] = { 0 };
    FUNC_5((const struct sockaddr_in*) VAR_4, VAR_6, 16);
    FUNC_0(VAR_0, "Recv from %s\n", VAR_6);


    unsigned int *VAR_7 = (unsigned int*)VAR_3->base;
    unsigned int VAR_8 = FUNC_2(VAR_7[4]);
    unsigned char VAR_9[4] = {0};
    int VAR_10;
    for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
        VAR_9[VAR_10] = (VAR_8 >> VAR_10*8) & 0xff;
    FUNC_0(VAR_0, "Offered IP %d.%d.%d.%d\n", VAR_9[3], VAR_9[2], VAR_9[1], VAR_9[0]);

    FUNC_1(VAR_3->base);
    FUNC_6(VAR_1);
}
