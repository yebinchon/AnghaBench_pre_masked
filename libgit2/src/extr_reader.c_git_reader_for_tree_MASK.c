
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int read; } ;
struct TYPE_6__ {int * tree; TYPE_1__ reader; } ;
typedef TYPE_2__ tree_reader ;
typedef int git_tree ;
typedef int git_reader ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int,int) ;
 int VAR_0 ;

int FUNC_3(git_reader **VAR_1, git_tree *VAR_2)
{
 tree_reader *VAR_3;

 FUNC_1(VAR_1 && VAR_2);

 VAR_3 = FUNC_2(1, sizeof(tree_reader));
 FUNC_0(VAR_3);

 VAR_3->reader.read = VAR_0;
 VAR_3->tree = VAR_2;

 *VAR_1 = (git_reader *)VAR_3;
 return 0;
}
