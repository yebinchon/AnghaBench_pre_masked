
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* reachabilities; int size; } ;
typedef TYPE_1__ aas_routingcache_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;

aas_routingcache_t *FUNC_1(int VAR_1)
{
 aas_routingcache_t *VAR_2;
 int VAR_3;


 VAR_3 = sizeof(aas_routingcache_t)
      + VAR_1 * sizeof(unsigned short int)
      + VAR_1 * sizeof(unsigned char);

 VAR_0 += VAR_3;

 VAR_2 = (aas_routingcache_t *) FUNC_0(VAR_3);
 VAR_2->reachabilities = (unsigned char *) VAR_2 + sizeof(aas_routingcache_t)
        + VAR_1 * sizeof(unsigned short int);
 VAR_2->size = VAR_3;
 return VAR_2;
}
