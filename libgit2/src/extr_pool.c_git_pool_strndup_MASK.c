
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int item_size; } ;
typedef TYPE_1__ git_pool ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;

char *FUNC_3(git_pool *VAR_1, const char *VAR_2, size_t VAR_3)
{
 char *VAR_4 = ((void*)0);

 FUNC_0(VAR_1 && VAR_2 && VAR_1->item_size == sizeof(char));

 if (VAR_3 == VAR_0)
  return ((void*)0);

 if ((VAR_4 = FUNC_1(VAR_1, (VAR_3 + 1))) != ((void*)0)) {
  FUNC_2(VAR_4, VAR_2, VAR_3);
  VAR_4[VAR_3] = '\0';
 }

 return VAR_4;
}
