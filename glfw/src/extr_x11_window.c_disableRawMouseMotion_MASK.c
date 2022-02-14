
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mask ;
typedef int _GLFWwindow ;
struct TYPE_6__ {int mask_len; unsigned char* mask; int deviceid; } ;
typedef TYPE_2__ XIEventMask ;
struct TYPE_5__ {int root; int display; } ;
struct TYPE_7__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*,int) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_1(_GLFWwindow* VAR_2)
{
    XIEventMask VAR_3;
    unsigned char VAR_4[] = { 0 };

    VAR_3.deviceid = VAR_0;
    VAR_3.mask_len = sizeof(VAR_4);
    VAR_3.mask = VAR_4;

    FUNC_0(VAR_1.x11.display, VAR_1.x11.root, &VAR_3, 1);
}
