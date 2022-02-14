
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_writestream ;
struct TYPE_5__ {int oid; } ;
struct TYPE_6__ {TYPE_1__ source; } ;
typedef TYPE_2__ git_filter_list ;
typedef int git_buf ;
typedef int git_blob ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *,int *) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(
 git_filter_list *VAR_1,
 git_blob *VAR_2,
 git_writestream *VAR_3)
{
 git_buf VAR_4 = VAR_0;

 if (FUNC_0(&VAR_4, VAR_2) < 0)
  return -1;

 if (VAR_1)
  FUNC_3(&VAR_1->source.oid, FUNC_1(VAR_2));

 return FUNC_2(VAR_1, &VAR_4, VAR_3);
}
