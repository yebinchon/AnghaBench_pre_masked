
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct git_graph {TYPE_2__* revs; } ;
struct TYPE_3__ {int flags; } ;
struct commit {TYPE_1__ object; } ;
struct TYPE_4__ {scalar_t__ boundary; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,struct commit*) ;

__attribute__((used)) static int FUNC_1(struct git_graph *VAR_2, struct commit *VAR_3)
{





 if (VAR_2->revs && VAR_2->revs->boundary) {
  if (VAR_3->object.flags & VAR_0)
   return 1;
 }





 return FUNC_0(VAR_2->revs, VAR_3) == VAR_1;
}
