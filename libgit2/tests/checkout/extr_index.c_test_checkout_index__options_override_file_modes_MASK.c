
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_4__ {int checkout_strategy; int file_mode; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int FUNC_4 (char*,struct stat*) ;

void FUNC_5(void)
{
 git_checkout_options VAR_5 = VAR_0;
 struct stat VAR_6;

 if (!FUNC_2())
  return;

 VAR_5.checkout_strategy = VAR_2 | VAR_1;
 VAR_5.file_mode = 0700;

 FUNC_1(FUNC_3(VAR_4, ((void*)0), &VAR_5));

 FUNC_1(FUNC_4("./testrepo/new.txt", &VAR_6));
 FUNC_0(VAR_6.st_mode & VAR_3, 0700, "%07o");
}
