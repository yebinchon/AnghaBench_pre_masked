
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {size_t size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (size_t*,size_t,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int const*,int,char*,int,int *,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(git_buf *VAR_3, const wchar_t *VAR_4, size_t VAR_5)
{
 int VAR_6, VAR_7;
 size_t VAR_8;

 if (!VAR_5) {
  return 0;
 } else if (VAR_5 > VAR_1) {
  FUNC_4();
  return -1;
 }

 FUNC_2(VAR_4);


 if ((VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_4, (int)VAR_5, ((void*)0), 0, ((void*)0), ((void*)0))) == 0)
  return 0;

 FUNC_2(VAR_6 > 0);

 FUNC_0(&VAR_8, VAR_3->size, (size_t)VAR_6);
 FUNC_0(&VAR_8, VAR_8, 1);

 if (FUNC_3(VAR_3, VAR_8) < 0)
  return -1;

 if ((VAR_7 = FUNC_1(
   VAR_0, VAR_2, VAR_4, (int)VAR_5, &VAR_3->ptr[VAR_3->size], VAR_6, ((void*)0), ((void*)0))) == 0)
  return FUNC_5();

 FUNC_2(VAR_7 == VAR_6);

 VAR_3->size += VAR_7;
 VAR_3->ptr[VAR_3->size] = '\0';
 return 0;
}
