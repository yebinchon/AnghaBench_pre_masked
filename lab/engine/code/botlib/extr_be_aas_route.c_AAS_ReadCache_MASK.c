
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int size ;
typedef int fileHandle_t ;
struct TYPE_4__ {int size; unsigned char* reachabilities; } ;
typedef TYPE_1__ aas_routingcache_t ;
struct TYPE_5__ {int (* FS_Read ) (unsigned char*,int,int ) ;} ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (unsigned char*,int,int ) ;

aas_routingcache_t *FUNC_3(fileHandle_t VAR_1)
{
 int VAR_2;
 aas_routingcache_t *VAR_3;

 VAR_0.FS_Read(&VAR_2, sizeof(VAR_2), VAR_1);
 VAR_3 = (aas_routingcache_t *) FUNC_0(VAR_2);
 VAR_3->size = VAR_2;
 VAR_0.FS_Read((unsigned char *)VAR_3 + sizeof(VAR_2), VAR_2 - sizeof(VAR_2), VAR_1);
 VAR_3->reachabilities = (unsigned char *) VAR_3 + sizeof(aas_routingcache_t) - sizeof(unsigned short) +
  (VAR_2 - sizeof(aas_routingcache_t) + sizeof(unsigned short)) / 3 * 2;
 return VAR_3;
}
