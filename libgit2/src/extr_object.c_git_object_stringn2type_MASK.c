
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_object_t ;
struct TYPE_3__ {scalar_t__* str; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,size_t,scalar_t__*) ;
 TYPE_1__* VAR_1 ;

git_object_t FUNC_2(const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 if (!VAR_2 || !VAR_3 || !*VAR_2)
  return VAR_0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  if (*VAR_1[VAR_4].str &&
   !FUNC_1(VAR_2, VAR_3, VAR_1[VAR_4].str))
   return (git_object_t)VAR_4;

 return VAR_0;
}
