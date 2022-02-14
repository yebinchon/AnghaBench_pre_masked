
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {float min; float max; int string; int name; int integral; int validate; } ;
typedef TYPE_1__ cvar_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

void FUNC_1( cvar_t *VAR_1, float VAR_2, float VAR_3, qboolean VAR_4 )
{
 VAR_1->validate = VAR_0;
 VAR_1->min = VAR_2;
 VAR_1->max = VAR_3;
 VAR_1->integral = VAR_4;


 FUNC_0( VAR_1->name, VAR_1->string );
}
