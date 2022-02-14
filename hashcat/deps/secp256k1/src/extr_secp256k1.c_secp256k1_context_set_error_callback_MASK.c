
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* fn ) (char const*,void*) ;void const* data; } ;
struct TYPE_6__ {TYPE_1__ error_callback; } ;
typedef TYPE_2__ secp256k1_context ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 void FUNC_1 (char const*,void*) ;

void FUNC_2(secp256k1_context* VAR_1, void (*VAR_2)(const char* VAR_3, void* VAR_4), const void* VAR_5) {
    FUNC_0(VAR_1 != VAR_0);
    if (VAR_2 == ((void*)0)) {
        VAR_2 = FUNC_1;
    }
    VAR_1->error_callback.fn = VAR_2;
    VAR_1->error_callback.data = VAR_5;
}
