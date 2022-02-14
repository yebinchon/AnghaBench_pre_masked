
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
struct TYPE_7__ {int status; } ;
typedef TYPE_2__ git_diff_delta ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int,int,int) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *,int ) ;
 int FUNC_8 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_9 (int *) ;

void FUNC_10(void)
{
 git_diff_options VAR_7 = VAR_2;
 git_diff *VAR_8 = ((void*)0);
 const git_diff_delta *VAR_9;

 VAR_6 = FUNC_3("empty_standard_repo");
 FUNC_5(VAR_6, "core.autocrlf", 1);

 FUNC_4("empty_standard_repo/bom.txt",
  "\xFF\xFE\x31\x00\x32\x00\x33\x00\x34\x00", 10, VAR_5|VAR_4, 0664);

 VAR_7.flags =
  VAR_1 | VAR_3;

 FUNC_2(FUNC_8(&VAR_8, VAR_6, ((void*)0), &VAR_7));

 FUNC_1(1, FUNC_9(VAR_8));
 FUNC_0((VAR_9 = FUNC_7(VAR_8, 0)) != ((void*)0));
 FUNC_1(VAR_0, VAR_9->status);





 FUNC_6(VAR_8);
}
