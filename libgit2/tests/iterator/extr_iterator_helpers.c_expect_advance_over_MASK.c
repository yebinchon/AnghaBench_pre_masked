
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_iterator_status_t ;
typedef int git_iterator ;
struct TYPE_4__ {int path; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__ const**,int *,int *) ;
 int FUNC_5 (TYPE_1__ const**,int *) ;

void FUNC_6(
 git_iterator *VAR_1,
 const char *VAR_2,
 git_iterator_status_t VAR_3)
{
 const git_index_entry *VAR_4;
 git_iterator_status_t VAR_5;
 int VAR_6;

 FUNC_3(FUNC_5(&VAR_4, VAR_1));
 FUNC_2(VAR_2, VAR_4->path);

 VAR_6 = FUNC_4(&VAR_4, &VAR_5, VAR_1);
 FUNC_0(!VAR_6 || VAR_6 == VAR_0);
 FUNC_1(VAR_3, VAR_5);
}
