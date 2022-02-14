
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_config_iterator ;
struct TYPE_11__ {int length; } ;
struct TYPE_12__ {TYPE_2__ backends; } ;
typedef TYPE_3__ git_config ;
struct TYPE_10__ {int free; int next; } ;
struct TYPE_13__ {TYPE_3__ const* cfg; int i; TYPE_1__ parent; int regex; } ;
typedef TYPE_4__ all_iter ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int **,TYPE_3__ const*) ;
 int FUNC_4 (int *,char const*,int ) ;

int FUNC_5(git_config_iterator **VAR_2, const git_config *VAR_3, const char *VAR_4)
{
 all_iter *VAR_5;
 int VAR_6;

 if (VAR_4 == ((void*)0))
  return FUNC_3(VAR_2, VAR_3);

 VAR_5 = FUNC_1(1, sizeof(all_iter));
 FUNC_0(VAR_5);

 if ((VAR_6 = FUNC_4(&VAR_5->regex, VAR_4, 0)) < 0) {
  FUNC_2(VAR_5);
  return -1;
 }

 VAR_5->parent.next = VAR_1;
 VAR_5->parent.free = VAR_0;
 VAR_5->i = VAR_3->backends.length;
 VAR_5->cfg = VAR_3;

 *VAR_2 = (git_config_iterator *) VAR_5;

 return 0;
}
