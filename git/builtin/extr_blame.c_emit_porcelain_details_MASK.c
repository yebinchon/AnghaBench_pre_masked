
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct blame_origin {TYPE_2__* commit; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct blame_origin*,int) ;
 int FUNC_1 (struct blame_origin*) ;

__attribute__((used)) static void FUNC_2(struct blame_origin *VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2) ||
     (VAR_1->commit->object.flags & VAR_0))
  FUNC_1(VAR_1);
}
