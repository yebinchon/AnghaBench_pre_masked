
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int handle; } ;
struct TYPE_9__ {TYPE_1__ win32; scalar_t__ denom; scalar_t__ numer; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int UINT ;
struct TYPE_10__ {int bottom; int top; int right; int left; } ;
typedef TYPE_3__ RECT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ,int*,int*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(_GLFWwindow* VAR_9, int VAR_10, RECT* VAR_11)
{
    int VAR_12, VAR_13;
    UINT VAR_14 = VAR_0;
    const float VAR_15 = (float) VAR_9->numer / (float) VAR_9->denom;

    if (FUNC_1())
        VAR_14 = FUNC_0(VAR_9->win32.handle);

    FUNC_2(FUNC_4(VAR_9), FUNC_3(VAR_9),
                      0, 0, &VAR_12, &VAR_13, VAR_14);

    if (VAR_10 == VAR_4 || VAR_10 == VAR_2 ||
        VAR_10 == VAR_5 || VAR_10 == VAR_3)
    {
        VAR_11->bottom = VAR_11->top + VAR_13 +
            (int) ((VAR_11->right - VAR_11->left - VAR_12) / VAR_15);
    }
    else if (VAR_10 == VAR_7 || VAR_10 == VAR_8)
    {
        VAR_11->top = VAR_11->bottom - VAR_13 -
            (int) ((VAR_11->right - VAR_11->left - VAR_12) / VAR_15);
    }
    else if (VAR_10 == VAR_6 || VAR_10 == VAR_1)
    {
        VAR_11->right = VAR_11->left + VAR_12 +
            (int) ((VAR_11->bottom - VAR_11->top - VAR_13) * VAR_15);
    }
}
