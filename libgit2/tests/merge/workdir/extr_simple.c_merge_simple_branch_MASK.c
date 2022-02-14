
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_7__ {int file_favor; } ;
typedef TYPE_1__ git_merge_options ;
struct TYPE_8__ {int checkout_strategy; } ;
typedef TYPE_2__ git_checkout_options ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int ,int const**,int,TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(int VAR_6, int VAR_7)
{
 git_oid VAR_8[1];
 git_annotated_commit *VAR_9[1];
 git_merge_options VAR_10 = VAR_3;
 git_checkout_options VAR_11 = VAR_1;

 FUNC_0(FUNC_4(&VAR_8[0], VAR_4));
 FUNC_0(FUNC_2(&VAR_9[0], VAR_5, &VAR_8[0]));

 VAR_10.file_favor = VAR_6;
 VAR_11.checkout_strategy = VAR_2 | VAR_0 |
  VAR_7;

 FUNC_0(FUNC_3(VAR_5, (const git_annotated_commit **)VAR_9, 1, &VAR_10, &VAR_11));

 FUNC_1(VAR_9[0]);
}
