
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
struct TYPE_8__ {int base; } ;
struct TYPE_6__ {TYPE_4__ esni_keys; } ;
struct TYPE_7__ {TYPE_1__ client; } ;
typedef TYPE_2__ ptls_handshake_properties_t ;
typedef int ptls_context_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *,char const*,char const*,TYPE_2__*,int,int) ;
 int FUNC_3 (char*) ;
 TYPE_4__ FUNC_4 (char const*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sockaddr *VAR_1, socklen_t VAR_2, ptls_context_t *VAR_3, const char *VAR_4, const char *VAR_5,
                      ptls_handshake_properties_t *VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9;

    VAR_6->client.esni_keys = FUNC_4(VAR_4);

    if ((VAR_9 = FUNC_5(VAR_1->sa_family, VAR_0, 0)) == 1) {
        FUNC_3("socket(2) failed");
        return 1;
    }
    if (FUNC_0(VAR_9, VAR_1, VAR_2) != 0) {
        FUNC_3("connect(2) failed");
        return 1;
    }

    int VAR_10 = FUNC_2(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    FUNC_1(VAR_6->client.esni_keys.base);
    return VAR_10;
}
