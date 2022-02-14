
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int size; void* blue; void* green; void* red; } ;
typedef TYPE_1__ GLFWgammaramp ;


 void* FUNC_0 (unsigned int,int) ;

void FUNC_1(GLFWgammaramp* VAR_0, unsigned int VAR_1)
{
    VAR_0->red = FUNC_0(VAR_1, sizeof(unsigned short));
    VAR_0->green = FUNC_0(VAR_1, sizeof(unsigned short));
    VAR_0->blue = FUNC_0(VAR_1, sizeof(unsigned short));
    VAR_0->size = VAR_1;
}
