
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_11__ {int ptr; scalar_t__ size; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_12__ {int* path; } ;
typedef TYPE_2__ _findfile_path ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int const*) ;
 int FUNC_6 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_7(
 git_buf *VAR_3, const wchar_t *VAR_4[])
{
 _findfile_path VAR_5;
 git_buf VAR_6 = VAR_1;

 FUNC_1(VAR_3);

 for (; *VAR_4 != ((void*)0); VAR_4++) {
  if (!FUNC_5(&VAR_5, *VAR_4) &&
   VAR_5[0] != L'%' &&
   !FUNC_0(VAR_5, VAR_0))
  {
   FUNC_6(&VAR_6, VAR_5);

   if (VAR_6.size)
    FUNC_3(VAR_3, VAR_2, VAR_3->ptr, VAR_6.ptr);
  }
 }

 FUNC_2(&VAR_6);

 return (FUNC_4(VAR_3) ? -1 : 0);
}
