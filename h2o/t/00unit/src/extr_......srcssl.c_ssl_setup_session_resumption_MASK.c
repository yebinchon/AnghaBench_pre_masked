
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int member_0; } ;
typedef TYPE_3__ ptls_encrypt_ticket_t ;
struct TYPE_10__ {int ticket_lifetime; TYPE_3__* encrypt_ticket; } ;
typedef TYPE_4__ ptls_context_t ;
typedef int pthread_t ;
typedef int pthread_attr_t ;
struct TYPE_8__ {int * update_thread; } ;
struct TYPE_7__ {int (* setup ) (int **,size_t) ;} ;
struct TYPE_11__ {TYPE_2__ ticket; TYPE_1__ cache; } ;
typedef int SSL_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int *,int *) ;
 TYPE_4__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int **,size_t) ;
 int VAR_3 ;

void FUNC_8(SSL_CTX **VAR_4, size_t VAR_5)
{
    if (VAR_1.cache.setup != ((void*)0))
        VAR_1.cache.setup(VAR_4, VAR_5);
}
