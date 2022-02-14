
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_9__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_2__ git_buf ;
typedef int git_annotated_commit ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,int ,char const*) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,int const**,int,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int ) ;
 int FUNC_10 (int **,int ,char*,int ,int,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(const char *VAR_5, const char *VAR_6)
{
 git_buf VAR_7 = VAR_0;
 git_checkout_options VAR_8 = VAR_2;
 git_reference *VAR_9, *VAR_10;
 git_annotated_commit *VAR_11[1];

 VAR_8.checkout_strategy = VAR_1;

 FUNC_5(&VAR_7, "%s%s", VAR_3, VAR_5);
 FUNC_0(FUNC_10(&VAR_9, VAR_4, "HEAD", VAR_7.ptr, 1, ((void*)0)));

 FUNC_0(FUNC_6(VAR_4, &VAR_8));

 FUNC_3(&VAR_7);
 FUNC_5(&VAR_7, "%s%s", VAR_3, VAR_6);
 FUNC_0(FUNC_9(&VAR_10, VAR_4, VAR_7.ptr));
 FUNC_0(FUNC_2(&VAR_11[0], VAR_4, VAR_10));

 FUNC_0(FUNC_7(VAR_4, (const git_annotated_commit **)VAR_11, 1, ((void*)0), ((void*)0)));

 FUNC_4(&VAR_7);
 FUNC_8(VAR_9);
 FUNC_8(VAR_10);
 FUNC_1(VAR_11[0]);

 return 0;
}
