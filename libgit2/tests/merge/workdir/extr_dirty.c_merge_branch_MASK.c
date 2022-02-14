
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_merge_options ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;
typedef int git_annotated_commit ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int ,int const**,int,int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(void)
{
 git_oid VAR_5[1];
 git_annotated_commit *VAR_6;
 git_merge_options VAR_7 = VAR_2;
 git_checkout_options VAR_8 = VAR_0;
 int VAR_9;

 FUNC_0(FUNC_4(&VAR_5[0], VAR_3));
 FUNC_0(FUNC_2(&VAR_6, VAR_4, &VAR_5[0]));

 VAR_8.checkout_strategy = VAR_1;
 VAR_9 = FUNC_3(VAR_4, (const git_annotated_commit **)&VAR_6, 1, &VAR_7, &VAR_8);

 FUNC_1(VAR_6);

 return VAR_9;
}
