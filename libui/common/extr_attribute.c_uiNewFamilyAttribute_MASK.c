
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* family; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef TYPE_2__ uiAttribute ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int,char*) ;

uiAttribute *FUNC_4(const char *VAR_1)
{
 uiAttribute *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_2->u.family = (char *) FUNC_3((FUNC_2(VAR_1) + 1) * sizeof (char), "char[] (uiAttribute)");
 FUNC_1(VAR_2->u.family, VAR_1);
 return VAR_2;
}
