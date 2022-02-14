
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int nr_allocated; } ;
struct smq_policy {int bg_work; TYPE_1__ cache_alloc; int cache_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct smq_policy*,int ) ;

__attribute__((used)) static bool FUNC_3(struct smq_policy *VAR_1)
{
 unsigned VAR_2;

 VAR_2 = FUNC_1(VAR_1->cache_size) - VAR_1->cache_alloc.nr_allocated;
 return (VAR_2 + FUNC_0(VAR_1->bg_work)) >=
  FUNC_2(VAR_1, VAR_0);
}
