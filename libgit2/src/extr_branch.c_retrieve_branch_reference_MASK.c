
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,char const*) ;
 int FUNC_2 (int ,char*,char*,char const*) ;
 int FUNC_3 (int **,int *,int ) ;

__attribute__((used)) static int FUNC_4(
 git_reference **VAR_4,
 git_repository *VAR_5,
 const char *VAR_6,
 bool VAR_7)
{
 git_reference *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 char *VAR_10;
 git_buf VAR_11 = VAR_0;

 VAR_10 = VAR_7 ? VAR_3 : VAR_2;

 if ((VAR_9 = FUNC_1(&VAR_11, VAR_10, VAR_6)) < 0)
           ;
 else if ((VAR_9 = FUNC_3(&VAR_8, VAR_5, VAR_11.ptr)) < 0)
  FUNC_2(
   VAR_1, "cannot locate %s branch '%s'",
   VAR_7 ? "remote-tracking" : "local", VAR_6);

 *VAR_4 = VAR_8;

 FUNC_0(&VAR_11);
 return VAR_9;
}
