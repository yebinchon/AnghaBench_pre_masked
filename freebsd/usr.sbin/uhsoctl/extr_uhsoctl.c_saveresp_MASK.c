
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* val; } ;
typedef TYPE_2__ resp_arg ;
struct TYPE_4__ {int int32; char** ptr; } ;


 int FUNC_0 (int ,char*,char const*) ;
 char** FUNC_1 (char**,int) ;
 int VAR_0 ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(resp_arg *VAR_1, const char *VAR_2, const char *VAR_3)
{
 char **VAR_4;
 int VAR_5 = VAR_1->val[1].int32;





 VAR_4 = FUNC_1(VAR_1->val[0].ptr, sizeof(char *) * (VAR_5 + 1));
 if (VAR_4 == ((void*)0))
  return;

 VAR_4[VAR_5] = FUNC_2(VAR_3);

 VAR_1->val[0].ptr = VAR_4;
 VAR_1->val[1].int32 = VAR_5 + 1;
}
