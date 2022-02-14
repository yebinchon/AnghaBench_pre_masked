
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_config_iterator ;
struct TYPE_5__ {int name; } ;
typedef TYPE_1__ git_config_entry ;
struct TYPE_6__ {int regex; } ;
typedef TYPE_2__ all_iter ;


 int FUNC_0 (TYPE_1__**,int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(git_config_entry **VAR_0, git_config_iterator *VAR_1)
{
 int VAR_2;
 all_iter *VAR_3 = (all_iter *) VAR_1;





 while ((VAR_2 = FUNC_0(VAR_0, VAR_1)) == 0) {

  if (FUNC_1(&VAR_3->regex, (*VAR_0)->name) != 0)
   continue;


  return 0;
 }

 return VAR_2;
}
