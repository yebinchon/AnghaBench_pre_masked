
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_iterator ;
struct TYPE_5__ {int mode; int path; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__ const**,int *) ;
 int FUNC_5 (TYPE_1__ const**,int *) ;
 int FUNC_6 (TYPE_1__ const**,int *) ;

void FUNC_7(
 git_iterator *VAR_1,
 const char *VAR_2)
{
 const git_index_entry *VAR_3;
 int VAR_4;

 FUNC_3(FUNC_6(&VAR_3, VAR_1));
 FUNC_2(VAR_2, VAR_3->path);

 if (FUNC_0(VAR_3->mode))
  VAR_4 = FUNC_5(&VAR_3, VAR_1);
 else
  VAR_4 = FUNC_4(&VAR_3, VAR_1);

 FUNC_1(!VAR_4 || VAR_4 == VAR_0);
}
