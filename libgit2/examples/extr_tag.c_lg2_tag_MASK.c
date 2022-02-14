
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * opts; int * repo; } ;
typedef TYPE_1__ tag_state ;
typedef int tag_options ;
typedef int (* tag_action ) (TYPE_1__*) ;
typedef int git_repository ;


 int FUNC_0 (int (*) (TYPE_1__*),int *,int,char**) ;
 int FUNC_1 (int *) ;

int FUNC_2(git_repository *VAR_0, int VAR_1, char **VAR_2)
{
 tag_options VAR_3;
 tag_action VAR_4;
 tag_state VAR_5;

 FUNC_1(&VAR_3);
 FUNC_0(VAR_4, &VAR_3, VAR_1, VAR_2);

 VAR_5.repo = VAR_0;
 VAR_5.opts = &VAR_3;
 VAR_4(&VAR_5);

 return 0;
}
