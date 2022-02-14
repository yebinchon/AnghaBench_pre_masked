
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int h2o_memcached_context_t ;
struct TYPE_6__ {int destroy; int create; } ;
struct TYPE_4__ {int * ctx; } ;
struct TYPE_5__ {unsigned int expiration; TYPE_1__ memcached; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_1(h2o_memcached_context_t *VAR_6, unsigned VAR_7)
{
    VAR_1.memcached.ctx = VAR_6;
    VAR_1.expiration = VAR_7;
    FUNC_0(VAR_4, VAR_5);
    VAR_0.create = VAR_2;
    VAR_0.destroy = VAR_3;
}
