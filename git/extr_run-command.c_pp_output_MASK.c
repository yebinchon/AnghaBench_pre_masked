
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct parallel_processes {int output_owner; TYPE_1__* children; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct TYPE_4__ {scalar_t__ state; TYPE_2__ err; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(struct parallel_processes *VAR_2)
{
 int VAR_3 = VAR_2->output_owner;
 if (VAR_2->children[VAR_3].state == VAR_0 &&
     VAR_2->children[VAR_3].err.len) {
  FUNC_1(&VAR_2->children[VAR_3].err, VAR_1);
  FUNC_0(&VAR_2->children[VAR_3].err);
 }
}
