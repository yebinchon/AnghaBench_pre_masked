
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lockedPointer; } ;
struct TYPE_6__ {TYPE_1__ pointerLock; } ;
struct TYPE_7__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef int GLFWbool ;



__attribute__((used)) static GLFWbool FUNC_0(_GLFWwindow* VAR_0)
{
    return VAR_0->wl.pointerLock.lockedPointer != ((void*)0);
}
