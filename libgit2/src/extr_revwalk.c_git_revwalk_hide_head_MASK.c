
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uninteresting; } ;
typedef TYPE_1__ git_revwalk__push_options ;
typedef int git_revwalk ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;

int FUNC_2(git_revwalk *VAR_2)
{
 git_revwalk__push_options VAR_3 = VAR_1;
 FUNC_0(VAR_2);

 VAR_3.uninteresting = 1;
 return FUNC_1(VAR_2, VAR_0, &VAR_3);
}
