
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int handle; } ;
struct TYPE_8__ {TYPE_1__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_7__ {int display; int UTF8_STRING; int NET_WM_ICON_NAME; int NET_WM_NAME; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,unsigned char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char const*,char const*,int *,int ,int *,int *,int *) ;
 int FUNC_3 (int ,int ,char const*,char const*,int *,int ,int *,int *,int *) ;
 TYPE_5__ VAR_1 ;
 int FUNC_4 (char const*) ;

void FUNC_5(_GLFWwindow* VAR_2, const char* VAR_3)
{
    FUNC_2(VAR_1.x11.display,
                       VAR_2->x11.handle,
                       VAR_3, VAR_3,
                       ((void*)0), 0,
                       ((void*)0), ((void*)0), ((void*)0));


    FUNC_0(VAR_1.x11.display, VAR_2->x11.handle,
                    VAR_1.x11.NET_WM_NAME, VAR_1.x11.UTF8_STRING, 8,
                    VAR_0,
                    (unsigned char*) VAR_3, FUNC_4(VAR_3));

    FUNC_0(VAR_1.x11.display, VAR_2->x11.handle,
                    VAR_1.x11.NET_WM_ICON_NAME, VAR_1.x11.UTF8_STRING, 8,
                    VAR_0,
                    (unsigned char*) VAR_3, FUNC_4(VAR_3));

    FUNC_1(VAR_1.x11.display);
}
