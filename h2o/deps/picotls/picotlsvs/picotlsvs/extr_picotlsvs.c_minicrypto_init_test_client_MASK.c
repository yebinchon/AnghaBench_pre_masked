
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * verify_certificate; int cipher_suites; int key_exchanges; int * get_time; int random_bytes; } ;
typedef TYPE_1__ ptls_context_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(ptls_context_t *VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(VAR_4, 0, sizeof(ptls_context_t));
 VAR_4->random_bytes = VAR_3;
    VAR_4->get_time = &VAR_0;
 VAR_4->key_exchanges = VAR_2;
 VAR_4->cipher_suites = VAR_1;
 VAR_4->verify_certificate = ((void*)0);

 return VAR_5;
}
