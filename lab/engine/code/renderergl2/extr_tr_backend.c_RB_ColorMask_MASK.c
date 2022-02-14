
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * rgba; } ;
typedef TYPE_1__ colorMaskCommand_t ;
struct TYPE_8__ {int* colorMask; } ;
struct TYPE_7__ {scalar_t__ framebufferObject; } ;
struct TYPE_6__ {scalar_t__ numIndexes; } ;


 int FUNC_0 () ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_2__ VAR_2 ;

const void *FUNC_2(const void *VAR_3)
{
 const colorMaskCommand_t *VAR_4 = VAR_3;


 if(VAR_2.numIndexes)
  FUNC_0();

 if (VAR_1.framebufferObject)
 {

  VAR_0.colorMask[0] = !VAR_4->rgba[0];
  VAR_0.colorMask[1] = !VAR_4->rgba[1];
  VAR_0.colorMask[2] = !VAR_4->rgba[2];
  VAR_0.colorMask[3] = !VAR_4->rgba[3];
 }

 FUNC_1(VAR_4->rgba[0], VAR_4->rgba[1], VAR_4->rgba[2], VAR_4->rgba[3]);

 return (const void *)(VAR_4 + 1);
}
