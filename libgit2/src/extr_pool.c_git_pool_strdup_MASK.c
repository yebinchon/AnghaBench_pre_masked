
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int item_size; } ;
typedef TYPE_1__ git_pool ;


 int FUNC_0 (int) ;
 char* FUNC_1 (TYPE_1__*,char const*,int ) ;
 int FUNC_2 (char const*) ;

char *FUNC_3(git_pool *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0 && VAR_1 && VAR_0->item_size == sizeof(char));
 return FUNC_1(VAR_0, VAR_1, FUNC_2(VAR_1));
}
