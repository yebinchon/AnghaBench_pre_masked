
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_fetch_options ;
typedef int git_clone_options ;
struct TYPE_3__ {int fetch_opts; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(void)
{
 git_fetch_options VAR_4 = VAR_1;
 VAR_3 = ((void*)0);

 FUNC_0(&VAR_2, 0, sizeof(git_clone_options));
 VAR_2.version = VAR_0;
 VAR_2.fetch_opts = VAR_4;
}
