
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_config_iterator ;
struct TYPE_9__ {int length; } ;
struct TYPE_10__ {TYPE_2__ backends; } ;
typedef TYPE_3__ git_config ;
struct TYPE_8__ {int next; int free; } ;
struct TYPE_11__ {TYPE_3__ const* cfg; int i; TYPE_1__ parent; } ;
typedef TYPE_4__ all_iter ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int,int) ;

int FUNC_2(git_config_iterator **VAR_2, const git_config *VAR_3)
{
 all_iter *VAR_4;

 VAR_4 = FUNC_1(1, sizeof(all_iter));
 FUNC_0(VAR_4);

 VAR_4->parent.free = VAR_0;
 VAR_4->parent.next = VAR_1;

 VAR_4->i = VAR_3->backends.length;
 VAR_4->cfg = VAR_3;

 *VAR_2 = (git_config_iterator *) VAR_4;

 return 0;
}
