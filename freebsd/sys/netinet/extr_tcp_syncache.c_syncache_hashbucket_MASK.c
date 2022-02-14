
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct syncache_head {int dummy; } ;
struct in_conninfo {int inc_ie; } ;
struct TYPE_2__ {size_t hashmask; struct syncache_head* hashbase; int hash_secret; } ;


 TYPE_1__ VAR_0 ;
 size_t FUNC_0 (size_t*,int,int ) ;

__attribute__((used)) static struct syncache_head *
FUNC_1(struct in_conninfo *VAR_1)
{
 uint32_t VAR_2;
 VAR_2 = FUNC_0((uint32_t *)&VAR_1->inc_ie, 5,
     VAR_0.hash_secret) & VAR_0.hashmask;

 return (&VAR_0.hashbase[VAR_2]);
}
