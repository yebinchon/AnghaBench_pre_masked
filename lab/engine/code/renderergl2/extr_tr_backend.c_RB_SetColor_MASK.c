
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* color; } ;
typedef TYPE_1__ setColorCommand_t ;
struct TYPE_4__ {int* color2D; } ;


 TYPE_2__ VAR_0 ;

const void *FUNC_0( const void *VAR_1 ) {
 const setColorCommand_t *VAR_2;

 VAR_2 = (const setColorCommand_t *)VAR_1;

 VAR_0.color2D[0] = VAR_2->color[0] * 255;
 VAR_0.color2D[1] = VAR_2->color[1] * 255;
 VAR_0.color2D[2] = VAR_2->color[2] * 255;
 VAR_0.color2D[3] = VAR_2->color[3] * 255;

 return (const void *)(VAR_2 + 1);
}
