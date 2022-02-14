
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct repository {TYPE_1__* index; } ;
struct lock_file {int dummy; } ;
struct TYPE_3__ {scalar_t__ cache_changed; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct repository*) ;
 int FUNC_2 (struct lock_file*) ;
 int FUNC_3 (TYPE_1__*,struct lock_file*,int ) ;

void FUNC_4(struct repository *VAR_1,
          struct lock_file *VAR_2)
{
 if ((VAR_1->index->cache_changed ||
      FUNC_0(VAR_1->index)) &&
     FUNC_1(VAR_1))
  FUNC_3(VAR_1->index, VAR_2, VAR_0);
 else
  FUNC_2(VAR_2);
}
