
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_9__ {int bare; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ,char const*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,char*,char*,TYPE_2__*) ;
 int FUNC_8 (int **,int ,char const*) ;

void FUNC_9(void)
{
 char *VAR_5 = "refs/heads/master";
 const char *VAR_6 = "refs/remotes/origin/master";
 const char *VAR_7 = "origin";
 git_buf VAR_8 = VAR_0;
 git_reference *VAR_9;

 FUNC_3(&VAR_2, "./empty");

 VAR_3.bare = 1;
 FUNC_2(FUNC_7(&VAR_4, "./empty_bare.git", "./empty", &VAR_3));


 FUNC_0(VAR_1, FUNC_8(&VAR_9, VAR_4, VAR_5));


 FUNC_2(FUNC_5(&VAR_8, VAR_4, VAR_5));

 FUNC_1(VAR_6, VAR_8.ptr);
 FUNC_6(&VAR_8);


 FUNC_2(FUNC_4(&VAR_8, VAR_4, VAR_6));

 FUNC_1(VAR_7, VAR_8.ptr);
 FUNC_6(&VAR_8);


 FUNC_0(VAR_1, FUNC_8(&VAR_9, VAR_4,
  VAR_6));
}
