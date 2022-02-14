
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_2__ {unsigned int cbm_len; } ;
struct rdt_resource {TYPE_1__ cache; } ;


 int FUNC_0 (unsigned long*,unsigned long,unsigned int) ;
 unsigned long FUNC_1 (unsigned long*,unsigned int) ;
 unsigned long FUNC_2 (unsigned long*,unsigned int,unsigned long) ;

__attribute__((used)) static u32 FUNC_3(u32 VAR_0, struct rdt_resource *VAR_1)
{
 unsigned int VAR_2 = VAR_1->cache.cbm_len;
 unsigned long VAR_3, VAR_4;
 unsigned long VAR_5 = VAR_0;

 if (!VAR_5)
  return 0;

 VAR_3 = FUNC_1(&VAR_5, VAR_2);
 VAR_4 = FUNC_2(&VAR_5, VAR_2, VAR_3);


 FUNC_0(&VAR_5, VAR_4, VAR_2 - VAR_4);
 return (u32)VAR_5;
}
