
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int string; } ;


 char* FUNC_0 (int ,char const*,char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*) ;

qboolean FUNC_3( const char *VAR_1 )
{
 char *VAR_2;

 VAR_2 = FUNC_0( VAR_0->string, VAR_1, "");
 VAR_2[FUNC_2(VAR_2)-1] = '\0';

 return FUNC_1(VAR_2);
}
