
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* clipboardString; int clipboardSize; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*,int) ;

__attribute__((used)) static GLFWbool FUNC_2(void)
{
    char* VAR_4 = VAR_3.wl.clipboardString;

    VAR_4 = FUNC_1(VAR_4, VAR_3.wl.clipboardSize * 2);
    if (!VAR_4)
    {
        FUNC_0(VAR_1,
                        "Wayland: Impossible to grow clipboard string");
        return VAR_0;
    }
    VAR_3.wl.clipboardString = VAR_4;
    VAR_3.wl.clipboardSize = VAR_3.wl.clipboardSize * 2;
    return VAR_2;
}
