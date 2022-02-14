
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
struct TYPE_9__ {scalar_t__ type; int tree; int commit; int index; } ;
typedef TYPE_2__ git_annotated_commit ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int **,TYPE_1__*) ;
 int FUNC_4 (int **,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(
 git_iterator **VAR_3,
 git_annotated_commit *VAR_4)
{
 git_iterator_options VAR_5 = VAR_2;
 int VAR_6;

 VAR_5.flags = VAR_1;

 if (VAR_4 == ((void*)0)) {
  VAR_6 = FUNC_3(VAR_3, &VAR_5);
 } else if (VAR_4->type == VAR_0) {
  VAR_6 = FUNC_2(VAR_3, FUNC_1(VAR_4->index), VAR_4->index, &VAR_5);
 } else {
  if (!VAR_4->tree &&
   (VAR_6 = FUNC_0(&VAR_4->tree, VAR_4->commit)) < 0)
   goto done;

  VAR_6 = FUNC_4(VAR_3, VAR_4->tree, &VAR_5);
 }

done:
 return VAR_6;
}
