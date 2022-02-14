
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; scalar_t__ defaultShader; } ;
typedef TYPE_1__ shader_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char const*,int ,int ) ;
 int VAR_1 ;

int FUNC_1(const char *VAR_2)
{
 shader_t *VAR_3 = FUNC_0( VAR_2, VAR_0, VAR_1 );
 return VAR_3->defaultShader ? 0 : VAR_3->index;
}
