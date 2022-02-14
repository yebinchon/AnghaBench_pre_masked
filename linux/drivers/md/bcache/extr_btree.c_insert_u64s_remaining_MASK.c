
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; } ;
struct btree {TYPE_2__ keys; } ;
struct TYPE_3__ {scalar_t__ is_extents; } ;


 scalar_t__ VAR_0 ;
 long FUNC_0 (TYPE_2__*) ;
 size_t FUNC_1 (long,long) ;

__attribute__((used)) static size_t FUNC_2(struct btree *VAR_1)
{
 long VAR_2 = FUNC_0(&VAR_1->keys);




 if (VAR_1->keys.ops->is_extents)
  VAR_2 -= VAR_0;

 return FUNC_1(VAR_2, 0L);
}
