
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mmfile_t ;
typedef int git_blame__origin ;
typedef int git_blame ;
struct TYPE_3__ {int plno; int tlno; int member_4; int member_3; int * member_2; int * member_1; int * member_0; } ;
typedef TYPE_1__ blame_chunk_cb_data ;


 scalar_t__ FUNC_0 (int *,int ,int ,size_t,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (size_t*,int *,int *) ;

__attribute__((used)) static int FUNC_4(
  git_blame *VAR_0,
  git_blame__origin *VAR_1,
  git_blame__origin *VAR_2)
{
 size_t VAR_3;
 mmfile_t VAR_4, VAR_5;
 blame_chunk_cb_data VAR_6 = { *VAR_0, *VAR_1, *VAR_2, 0, 0 };

 if (!FUNC_3(&VAR_3, VAR_0, VAR_1))
  return 1;

 FUNC_2(VAR_2, &VAR_4);
 FUNC_2(VAR_1, &VAR_5);

 if (FUNC_1(VAR_4, VAR_5, &VAR_6) < 0)
  return -1;


 if (FUNC_0(VAR_0, VAR_6.tlno, VAR_6.plno, VAR_3, VAR_1, VAR_2) < 0)
  return -1;

 return 0;
}
