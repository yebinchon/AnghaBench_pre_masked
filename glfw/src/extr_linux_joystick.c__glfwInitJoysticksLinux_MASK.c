
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dirent {char* d_name; } ;
typedef int regmatch_t ;
typedef int path ;
typedef int _GLFWjoystick ;
struct TYPE_3__ {scalar_t__ inotify; int regex; int watch; } ;
struct TYPE_4__ {int joysticks; TYPE_1__ linjs; } ;
typedef int GLFWbool ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__,char const*,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*) ;
 int * FUNC_5 (char const*) ;
 int FUNC_6 (int ,int,int,int ) ;
 struct dirent* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char*,int ) ;
 scalar_t__ FUNC_9 (int *,char*,int,int *,int ) ;
 int FUNC_10 (char*,int,char*,char const*,char*) ;

GLFWbool FUNC_11(void)
{
    const char* VAR_11 = "/dev/input";

    VAR_9.linjs.inotify = FUNC_3(VAR_7 | VAR_4);
    if (VAR_9.linjs.inotify > 0)
    {



        VAR_9.linjs.watch = FUNC_2(VAR_9.linjs.inotify,
                                              VAR_11,
                                              VAR_5 | VAR_3 | VAR_6);
    }



    if (FUNC_8(&VAR_9.linjs.regex, "^event[0-9]\\+$", 0) != 0)
    {
        FUNC_0(VAR_1, "Linux: Failed to compile regex");
        return VAR_0;
    }

    int VAR_12 = 0;

    DIR* VAR_13 = FUNC_5(VAR_11);
    if (VAR_13)
    {
        struct dirent* VAR_14;

        while ((VAR_14 = FUNC_7(VAR_13)))
        {
            regmatch_t VAR_15;

            if (FUNC_9(&VAR_9.linjs.regex, VAR_14->d_name, 1, &VAR_15, 0) != 0)
                continue;

            char VAR_16[VAR_8];

            FUNC_10(VAR_16, sizeof(VAR_16), "%s/%s", VAR_11, VAR_14->d_name);

            if (FUNC_4(VAR_16))
                VAR_12++;
        }

        FUNC_1(VAR_13);
    }



    FUNC_6(VAR_9.joysticks, VAR_12, sizeof(_GLFWjoystick), VAR_10);
    return VAR_2;
}
