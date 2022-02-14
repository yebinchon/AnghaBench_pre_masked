
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ client; int major; int minor; int (* swapBuffers ) (TYPE_2__*) ;scalar_t__ (* getProcAddress ) (char*) ;int release; int (* GetIntegerv ) (int ,int*) ;void* robustness; void* profile; void* noerror; void* debug; void* forward; scalar_t__ GetStringi; int revision; scalar_t__ (* GetString ) (int ) ;int source; } ;
struct TYPE_10__ {TYPE_1__ context; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_11__ {scalar_t__ client; int major; int minor; scalar_t__ debug; int source; } ;
typedef TYPE_3__ _GLFWctxconfig ;
struct TYPE_12__ {int contextSlot; } ;
typedef scalar_t__ (* PFNGLGETSTRINGPROC ) (int ) ;
typedef scalar_t__ PFNGLGETSTRINGIPROC ;
typedef int (* PFNGLGETINTEGERVPROC ) (int ,int*) ;
typedef int (* PFNGLCLEARPROC ) (int ) ;
typedef int GLint ;
typedef int GLFWwindow ;
typedef void* GLFWbool ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 TYPE_8__ VAR_27 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_2__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,char*,int*,int*,int *) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,size_t const) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (int ,int*) ;
 int FUNC_14 (int ,int*) ;
 int FUNC_15 (int ,int*) ;
 int FUNC_16 (int ,int*) ;
 int FUNC_17 (int ,int*) ;

GLFWbool FUNC_18(_GLFWwindow* VAR_28,
                                    const _GLFWctxconfig* VAR_29)
{
    int VAR_30;
    _GLFWwindow* VAR_31;
    const char* VAR_32;
    const char* VAR_33[] =
    {
        "OpenGL ES-CM ",
        "OpenGL ES-CL ",
        "OpenGL ES ",
        ((void*)0)
    };

    VAR_28->context.source = VAR_29->source;
    VAR_28->context.client = VAR_3;

    VAR_31 = FUNC_1(&VAR_27.contextSlot);
    FUNC_3((GLFWwindow*) VAR_28);

    VAR_28->context.GetIntegerv = (PFNGLGETINTEGERVPROC)
        VAR_28->context.getProcAddress("glGetIntegerv");
    VAR_28->context.GetString = (PFNGLGETSTRINGPROC)
        VAR_28->context.getProcAddress("glGetString");
    if (!VAR_28->context.GetIntegerv || !VAR_28->context.GetString)
    {
        FUNC_0(VAR_7, "Entry point retrieval is broken");
        FUNC_3((GLFWwindow*) VAR_31);
        return VAR_0;
    }

    VAR_32 = (const char*) VAR_28->context.GetString(VAR_26);
    if (!VAR_32)
    {
        if (VAR_29->client == VAR_3)
        {
            FUNC_0(VAR_7,
                            "OpenGL version string retrieval is broken");
        }
        else
        {
            FUNC_0(VAR_7,
                            "OpenGL ES version string retrieval is broken");
        }

        FUNC_3((GLFWwindow*) VAR_31);
        return VAR_0;
    }

    for (VAR_30 = 0; VAR_33[VAR_30]; VAR_30++)
    {
        const size_t VAR_34 = FUNC_5(VAR_33[VAR_30]);

        if (FUNC_6(VAR_32, VAR_33[VAR_30], VAR_34) == 0)
        {
            VAR_32 += VAR_34;
            VAR_28->context.client = VAR_6;
            break;
        }
    }

    if (!FUNC_4(VAR_32, "%d.%d.%d",
                &VAR_28->context.major,
                &VAR_28->context.minor,
                &VAR_28->context.revision))
    {
        if (VAR_28->context.client == VAR_3)
        {
            FUNC_0(VAR_7,
                            "No version found in OpenGL version string");
        }
        else
        {
            FUNC_0(VAR_7,
                            "No version found in OpenGL ES version string");
        }

        FUNC_3((GLFWwindow*) VAR_31);
        return VAR_0;
    }

    if (VAR_28->context.major < VAR_29->major ||
        (VAR_28->context.major == VAR_29->major &&
         VAR_28->context.minor < VAR_29->minor))
    {







        if (VAR_28->context.client == VAR_3)
        {
            FUNC_0(VAR_11,
                            "Requested OpenGL version %i.%i, got version %i.%i",
                            VAR_29->major, VAR_29->minor,
                            VAR_28->context.major, VAR_28->context.minor);
        }
        else
        {
            FUNC_0(VAR_11,
                            "Requested OpenGL ES version %i.%i, got version %i.%i",
                            VAR_29->major, VAR_29->minor,
                            VAR_28->context.major, VAR_28->context.minor);
        }

        FUNC_3((GLFWwindow*) VAR_31);
        return VAR_0;
    }

    if (VAR_28->context.major >= 3)
    {




        VAR_28->context.GetStringi = (PFNGLGETSTRINGIPROC)
            VAR_28->context.getProcAddress("glGetStringi");
        if (!VAR_28->context.GetStringi)
        {
            FUNC_0(VAR_7,
                            "Entry point retrieval is broken");
            FUNC_3((GLFWwindow*) VAR_31);
            return VAR_0;
        }
    }

    if (VAR_28->context.client == VAR_3)
    {

        if (VAR_28->context.major >= 3)
        {
            GLint VAR_35;
            VAR_28->context.GetIntegerv(VAR_15, &VAR_35);

            if (VAR_35 & VAR_17)
                VAR_28->context.forward = VAR_10;

            if (VAR_35 & VAR_16)
                VAR_28->context.debug = VAR_10;
            else if (FUNC_2("GL_ARB_debug_output") &&
                     VAR_29->debug)
            {



                VAR_28->context.debug = VAR_10;
            }

            if (VAR_35 & VAR_18)
                VAR_28->context.noerror = VAR_10;
        }


        if (VAR_28->context.major >= 4 ||
            (VAR_28->context.major == 3 && VAR_28->context.minor >= 2))
        {
            GLint VAR_36;
            VAR_28->context.GetIntegerv(VAR_19, &VAR_36);

            if (VAR_36 & VAR_13)
                VAR_28->context.profile = VAR_4;
            else if (VAR_36 & VAR_14)
                VAR_28->context.profile = VAR_5;
            else if (FUNC_2("GL_ARB_compatibility"))
            {




                VAR_28->context.profile = VAR_4;
            }
        }


        if (FUNC_2("GL_ARB_robustness"))
        {



            GLint VAR_37;
            VAR_28->context.GetIntegerv(VAR_25,
                                        &VAR_37);

            if (VAR_37 == VAR_22)
                VAR_28->context.robustness = VAR_1;
            else if (VAR_37 == VAR_24)
                VAR_28->context.robustness = VAR_2;
        }
    }
    else
    {

        if (FUNC_2("GL_EXT_robustness"))
        {



            GLint VAR_38;
            VAR_28->context.GetIntegerv(VAR_25,
                                        &VAR_38);

            if (VAR_38 == VAR_22)
                VAR_28->context.robustness = VAR_1;
            else if (VAR_38 == VAR_24)
                VAR_28->context.robustness = VAR_2;
        }
    }

    if (FUNC_2("GL_KHR_context_flush_control"))
    {
        GLint VAR_39;
        VAR_28->context.GetIntegerv(VAR_20, &VAR_39);

        if (VAR_39 == VAR_23)
            VAR_28->context.release = VAR_9;
        else if (VAR_39 == VAR_21)
            VAR_28->context.release = VAR_8;
    }



    {
        PFNGLCLEARPROC VAR_40 = (PFNGLCLEARPROC)
            VAR_28->context.getProcAddress("glClear");
        VAR_40(VAR_12);
        VAR_28->context.swapBuffers(VAR_28);
    }

    FUNC_3((GLFWwindow*) VAR_31);
    return VAR_10;
}
