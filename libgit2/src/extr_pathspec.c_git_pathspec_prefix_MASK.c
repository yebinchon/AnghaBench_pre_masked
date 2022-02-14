
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int count; } ;
typedef TYPE_1__ git_strarray ;
struct TYPE_12__ {char* ptr; scalar_t__ size; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__ const*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;

char *FUNC_6(const git_strarray *VAR_1)
{
 git_buf VAR_2 = VAR_0;
 const char *VAR_3;

 if (!VAR_1 || !VAR_1->count ||
  FUNC_3(&VAR_2, VAR_1) < 0)
  return ((void*)0);


 for (VAR_3 = VAR_2.ptr; *VAR_3; ++VAR_3) {
  if (FUNC_0(*VAR_3) &&
   (VAR_3 == VAR_2.ptr || (*(VAR_3 - 1) != '\\')))
   break;
 }
 FUNC_5(&VAR_2, VAR_3 - VAR_2.ptr);

 if (VAR_2.size <= 0) {
  FUNC_2(&VAR_2);
  return ((void*)0);
 }

 FUNC_4(&VAR_2);

 return FUNC_1(&VAR_2);
}
