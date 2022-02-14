
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_11__ {int ptr; scalar_t__ size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,char*,int const*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int const*) ;

int FUNC_7(git_buf *VAR_6, const wchar_t *VAR_7)
{
 git_buf VAR_8 = VAR_0;


 if (!FUNC_5(&VAR_8, L"git.exe", VAR_7) && VAR_8.size)
  FUNC_4(VAR_6, VAR_8.ptr, VAR_8.size);
 else
  FUNC_0(VAR_6);

 if (!FUNC_5(&VAR_8, L"git.cmd", VAR_7) && VAR_8.size)
  FUNC_2(VAR_6, VAR_1, VAR_6->ptr, VAR_8.ptr);


 if (!FUNC_6(
   &VAR_8, VAR_2, VAR_5, VAR_7) && VAR_8.size)
  FUNC_2(VAR_6, VAR_1, VAR_6->ptr, VAR_8.ptr);

 if (!FUNC_6(
   &VAR_8, VAR_3, VAR_4, VAR_7) && VAR_8.size)
  FUNC_2(VAR_6, VAR_1, VAR_6->ptr, VAR_8.ptr);

 FUNC_1(&VAR_8);

 return (FUNC_3(VAR_6) ? -1 : 0);
}
