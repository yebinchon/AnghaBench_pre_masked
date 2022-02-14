
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* stats; TYPE_2__* writepack; } ;
typedef TYPE_1__ foreach_data ;
struct TYPE_6__ {size_t received_bytes; } ;
struct TYPE_5__ {int (* append ) (TYPE_2__*,void*,size_t,TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_2__*,void*,size_t,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, size_t VAR_1, void *VAR_2)
{
 foreach_data *VAR_3 = (foreach_data*)VAR_2;

 VAR_3->stats->received_bytes += VAR_1;
 return VAR_3->writepack->append(VAR_3->writepack, VAR_0, VAR_1, VAR_3->stats);
}
