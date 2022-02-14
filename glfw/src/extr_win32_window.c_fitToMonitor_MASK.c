
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int mi ;
struct TYPE_11__ {int handle; } ;
struct TYPE_13__ {TYPE_3__ win32; TYPE_2__* monitor; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_12__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_14__ {int member_0; TYPE_4__ rcMonitor; } ;
struct TYPE_9__ {int handle; } ;
struct TYPE_10__ {TYPE_1__ win32; } ;
typedef TYPE_6__ MONITORINFO ;


 int FUNC_0 (int ,TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_4)
{
    MONITORINFO VAR_5 = { sizeof(VAR_5) };
    FUNC_0(VAR_4->monitor->win32.handle, &VAR_5);
    FUNC_1(VAR_4->win32.handle, VAR_0,
                 VAR_5.rcMonitor.left,
                 VAR_5.rcMonitor.top,
                 VAR_5.rcMonitor.right - VAR_5.rcMonitor.left,
                 VAR_5.rcMonitor.bottom - VAR_5.rcMonitor.top,
                 VAR_3 | VAR_1 | VAR_2);
}
