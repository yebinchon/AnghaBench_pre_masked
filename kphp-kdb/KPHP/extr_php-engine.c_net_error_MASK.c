
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int ans; } ;
typedef TYPE_2__ php_query_base_t ;
struct TYPE_10__ {TYPE_1__* func; int ans; } ;
typedef TYPE_3__ net_ansgen_t ;
struct TYPE_8__ {int (* free ) (TYPE_3__*) ;int (* error ) (TYPE_3__*,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,char const*) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3 (net_ansgen_t *VAR_1, php_query_base_t *VAR_2, const char *VAR_3) {
  VAR_1->func->error (VAR_1, VAR_3);
  VAR_2->ans = VAR_1->ans;
  VAR_1->func->free (VAR_1);
  FUNC_0 (VAR_0);
}
