
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ client; scalar_t__ source; int major; int minor; int profile; int robustness; int release; scalar_t__ forward; TYPE_2__* share; } ;
typedef TYPE_3__ _GLFWctxconfig ;
struct TYPE_5__ {scalar_t__ client; } ;
struct TYPE_6__ {TYPE_1__ context; } ;
typedef int GLFWbool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*,...) ;

GLFWbool FUNC_1(const _GLFWctxconfig* VAR_17)
{
    if (VAR_17->share)
    {
        if (VAR_17->client == VAR_6 ||
            VAR_17->share->context.client == VAR_6)
        {
            FUNC_0(VAR_8, ((void*)0));
            return VAR_1;
        }
    }

    if (VAR_17->source != VAR_5 &&
        VAR_17->source != VAR_0 &&
        VAR_17->source != VAR_13)
    {
        FUNC_0(VAR_2,
                        "Invalid context creation API 0x%08X",
                        VAR_17->source);
        return VAR_1;
    }

    if (VAR_17->client != VAR_6 &&
        VAR_17->client != VAR_9 &&
        VAR_17->client != VAR_12)
    {
        FUNC_0(VAR_2,
                        "Invalid client API 0x%08X",
                        VAR_17->client);
        return VAR_1;
    }

    if (VAR_17->client == VAR_9)
    {
        if ((VAR_17->major < 1 || VAR_17->minor < 0) ||
            (VAR_17->major == 1 && VAR_17->minor > 5) ||
            (VAR_17->major == 2 && VAR_17->minor > 1) ||
            (VAR_17->major == 3 && VAR_17->minor > 3))
        {






            FUNC_0(VAR_3,
                            "Invalid OpenGL version %i.%i",
                            VAR_17->major, VAR_17->minor);
            return VAR_1;
        }

        if (VAR_17->profile)
        {
            if (VAR_17->profile != VAR_11 &&
                VAR_17->profile != VAR_10)
            {
                FUNC_0(VAR_2,
                                "Invalid OpenGL profile 0x%08X",
                                VAR_17->profile);
                return VAR_1;
            }

            if (VAR_17->major <= 2 ||
                (VAR_17->major == 3 && VAR_17->minor < 2))
            {



                FUNC_0(VAR_3,
                                "Context profiles are only defined for OpenGL version 3.2 and above");
                return VAR_1;
            }
        }

        if (VAR_17->forward && VAR_17->major <= 2)
        {

            FUNC_0(VAR_3,
                            "Forward-compatibility is only defined for OpenGL version 3.0 and above");
            return VAR_1;
        }
    }
    else if (VAR_17->client == VAR_12)
    {
        if (VAR_17->major < 1 || VAR_17->minor < 0 ||
            (VAR_17->major == 1 && VAR_17->minor > 1) ||
            (VAR_17->major == 2 && VAR_17->minor > 0))
        {





            FUNC_0(VAR_3,
                            "Invalid OpenGL ES version %i.%i",
                            VAR_17->major, VAR_17->minor);
            return VAR_1;
        }
    }

    if (VAR_17->robustness)
    {
        if (VAR_17->robustness != VAR_7 &&
            VAR_17->robustness != VAR_4)
        {
            FUNC_0(VAR_2,
                            "Invalid context robustness mode 0x%08X",
                            VAR_17->robustness);
            return VAR_1;
        }
    }

    if (VAR_17->release)
    {
        if (VAR_17->release != VAR_15 &&
            VAR_17->release != VAR_14)
        {
            FUNC_0(VAR_2,
                            "Invalid context release behavior 0x%08X",
                            VAR_17->release);
            return VAR_1;
        }
    }

    return VAR_16;
}
