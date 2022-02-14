
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int curl_socket_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {TYPE_2__ poll_handle; int sockfd; } ;
typedef TYPE_1__ curl_context_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;

curl_context_t *FUNC_3(curl_socket_t VAR_1) {
    curl_context_t *VAR_2;

    VAR_2 = (curl_context_t*) FUNC_1(sizeof *VAR_2);

    VAR_2->sockfd = VAR_1;

    int VAR_3 = FUNC_2(VAR_0, &VAR_2->poll_handle, VAR_1);
    FUNC_0(VAR_3 == 0);
    VAR_2->poll_handle.data = VAR_2;

    return VAR_2;
}
