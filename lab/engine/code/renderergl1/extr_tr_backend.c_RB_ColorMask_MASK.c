
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rgba; } ;
typedef TYPE_1__ colorMaskCommand_t ;


 int FUNC_0 (int ,int ,int ,int ) ;

const void *FUNC_1(const void *VAR_0)
{
 const colorMaskCommand_t *VAR_1 = VAR_0;

 FUNC_0(VAR_1->rgba[0], VAR_1->rgba[1], VAR_1->rgba[2], VAR_1->rgba[3]);

 return (const void *)(VAR_1 + 1);
}
