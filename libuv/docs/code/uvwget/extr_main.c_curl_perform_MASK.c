
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uv_poll_t ;
struct TYPE_2__ {int sockfd; } ;
typedef TYPE_1__ curl_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int,int*) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;

void FUNC_3(uv_poll_t *VAR_7, int VAR_8, int VAR_9) {
    FUNC_2(&VAR_6);
    int VAR_10;
    int VAR_11 = 0;
    if (VAR_8 < 0) VAR_11 = VAR_0;
    if (!VAR_8 && VAR_9 & VAR_3) VAR_11 |= VAR_1;
    if (!VAR_8 && VAR_9 & VAR_4) VAR_11 |= VAR_2;

    curl_context_t *VAR_12;

    VAR_12 = (curl_context_t*)VAR_7;

    FUNC_1(VAR_5, VAR_12->sockfd, VAR_11, &VAR_10);
    FUNC_0();
}
