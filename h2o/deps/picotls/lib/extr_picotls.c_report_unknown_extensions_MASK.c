
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptls_t ;
typedef int ptls_raw_extension_t ;
struct TYPE_4__ {int (* collected_extensions ) (int *,TYPE_1__*,int *) ;int * collect_extension; } ;
typedef TYPE_1__ ptls_handshake_properties_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2(ptls_t *VAR_0, ptls_handshake_properties_t *VAR_1, ptls_raw_extension_t *VAR_2)
{
    if (VAR_1 != ((void*)0) && VAR_1->collect_extension != ((void*)0)) {
        FUNC_0(VAR_1->collected_extensions != ((void*)0));
        return VAR_1->collected_extensions(VAR_0, VAR_1, VAR_2);
    } else {
        return 0;
    }
}
