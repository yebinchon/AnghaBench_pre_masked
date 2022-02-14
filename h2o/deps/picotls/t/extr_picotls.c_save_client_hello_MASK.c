
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ptls_t ;
typedef int ptls_on_client_hello_t ;
struct TYPE_8__ {scalar_t__ count; TYPE_1__* list; } ;
struct TYPE_7__ {int len; scalar_t__ base; } ;
struct TYPE_9__ {scalar_t__ esni; TYPE_3__ negotiated_protocols; TYPE_2__ server_name; } ;
typedef TYPE_4__ ptls_on_client_hello_parameters_t ;
struct TYPE_6__ {int len; scalar_t__ base; } ;


 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (int *,char const*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(ptls_on_client_hello_t *VAR_1, ptls_t *VAR_2, ptls_on_client_hello_parameters_t *VAR_3)
{
    FUNC_1(VAR_2, (const char *)VAR_3->server_name.base, VAR_3->server_name.len);
    if (VAR_3->negotiated_protocols.count != 0)
        FUNC_0(VAR_2, (const char *)VAR_3->negotiated_protocols.list[0].base,
                                     VAR_3->negotiated_protocols.list[0].len);
    if (VAR_3->esni)
        ++VAR_0;
    return 0;
}
