
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {int skip_tree; scalar_t__ next_idx; TYPE_1__ base; } ;
typedef TYPE_2__ index_iterator ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(index_iterator *VAR_1)
{
 VAR_1->base.flags &= ~VAR_0;
 VAR_1->next_idx = 0;
 VAR_1->skip_tree = 0;
 return 0;
}
