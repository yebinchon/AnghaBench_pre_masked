
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache {size_t type; int ofnode; } ;
typedef int __be32 ;
struct TYPE_2__ {char* nr_sets_prop; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * FUNC_0 (int ,char const*,int *) ;
 unsigned int FUNC_1 (int const*,int) ;

__attribute__((used)) static int FUNC_2(const struct cache *VAR_2, unsigned int *VAR_3)
{
 const char *VAR_4;
 const __be32 *VAR_5;

 VAR_4 = VAR_1[VAR_2->type].nr_sets_prop;

 VAR_5 = FUNC_0(VAR_2->ofnode, VAR_4, ((void*)0));
 if (!VAR_5)
  return -VAR_0;

 *VAR_3 = FUNC_1(VAR_5, 1);
 return 0;
}
