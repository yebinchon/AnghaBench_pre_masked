
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int handle; } ;
struct TYPE_11__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_12__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_3__ RECT ;
typedef int POINT ;
typedef int DWORD ;


 int FUNC_0 (TYPE_3__*,int,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (TYPE_2__ const*) ;
 int FUNC_10 (TYPE_2__ const*) ;

__attribute__((used)) static void FUNC_11(const _GLFWwindow* VAR_8)
{
    RECT VAR_9;
    DWORD VAR_10 = FUNC_5(VAR_8->win32.handle, VAR_1);
    VAR_10 &= ~(VAR_6 | VAR_7);
    VAR_10 |= FUNC_10(VAR_8);

    FUNC_3(VAR_8->win32.handle, &VAR_9);

    if (FUNC_8())
    {
        FUNC_1(&VAR_9, VAR_10, VAR_0,
                                 FUNC_9(VAR_8),
                                 FUNC_4(VAR_8->win32.handle));
    }
    else
        FUNC_0(&VAR_9, VAR_10, VAR_0, FUNC_9(VAR_8));

    FUNC_2(VAR_8->win32.handle, (POINT*) &VAR_9.left);
    FUNC_2(VAR_8->win32.handle, (POINT*) &VAR_9.right);
    FUNC_6(VAR_8->win32.handle, VAR_1, VAR_10);
    FUNC_7(VAR_8->win32.handle, VAR_2,
                 VAR_9.left, VAR_9.top,
                 VAR_9.right - VAR_9.left, VAR_9.bottom - VAR_9.top,
                 VAR_3 | VAR_4 | VAR_5);
}
