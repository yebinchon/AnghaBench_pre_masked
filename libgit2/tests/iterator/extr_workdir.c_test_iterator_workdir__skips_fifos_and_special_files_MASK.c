
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
struct TYPE_7__ {int mode; } ;
typedef TYPE_2__ git_index_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int VAR_5 ;
 int FUNC_10 (TYPE_2__ const**,int *) ;
 int FUNC_11 (int **,char*,TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*,int) ;

void FUNC_15(void)
{

 git_iterator *VAR_6;
 const git_index_entry *VAR_7;
 git_iterator_options VAR_8 = VAR_3;

 VAR_5 = FUNC_7("empty_standard_repo");

 FUNC_8(FUNC_14("empty_standard_repo/dir", 0777));
 FUNC_5("empty_standard_repo/file", "not me");

 FUNC_3(!FUNC_13("empty_standard_repo/fifo", 0777));
 FUNC_3(!FUNC_2("empty_standard_repo/fifo", VAR_0));

 VAR_8.flags = VAR_2 |
  VAR_1;

 FUNC_6(FUNC_11(
  &VAR_6, "empty_standard_repo", &VAR_8));

 FUNC_6(FUNC_10(&VAR_7, VAR_6));
 FUNC_3(FUNC_0(VAR_7->mode));
 FUNC_6(FUNC_10(&VAR_7, VAR_6));
 FUNC_3(FUNC_0(VAR_7->mode));

 FUNC_6(FUNC_10(&VAR_7, VAR_6));
 FUNC_3(FUNC_1(VAR_7->mode));

 FUNC_4(VAR_4, FUNC_10(&VAR_7, VAR_6));

 FUNC_12(VAR_6);



}
