
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int major; int (* extensionSupported ) (char const*) ;scalar_t__ (* GetString ) (int ) ;scalar_t__ (* GetStringi ) (int ,int) ;int (* GetIntegerv ) (int ,int*) ;} ;
struct TYPE_6__ {TYPE_1__ context; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_7__ {int contextSlot; } ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 TYPE_4__ VAR_7 ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int ,int*) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char const*) ;

int FUNC_10(const char* VAR_8)
{
    _GLFWwindow* VAR_9;
    FUNC_4(VAR_8 != ((void*)0));

    FUNC_0(VAR_0);

    VAR_9 = FUNC_2(&VAR_7.contextSlot);
    if (!VAR_9)
    {
        FUNC_1(VAR_2,
                        "Cannot query extension without a current OpenGL or OpenGL ES context");
        return VAR_0;
    }

    if (*VAR_8 == '\0')
    {
        FUNC_1(VAR_1, "Extension name cannot be an empty string");
        return VAR_0;
    }

    if (VAR_9->context.major >= 3)
    {
        int VAR_10;
        GLint VAR_11;



        VAR_9->context.GetIntegerv(VAR_6, &VAR_11);

        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
        {
            const char* VAR_12 = (const char*)
                VAR_9->context.GetStringi(VAR_5, VAR_10);
            if (!VAR_12)
            {
                FUNC_1(VAR_3,
                                "Extension string retrieval is broken");
                return VAR_0;
            }

            if (FUNC_5(VAR_12, VAR_8) == 0)
                return VAR_4;
        }
    }
    else
    {


        const char* VAR_13 = (const char*)
            VAR_9->context.GetString(VAR_5);
        if (!VAR_13)
        {
            FUNC_1(VAR_3,
                            "Extension string retrieval is broken");
            return VAR_0;
        }

        if (FUNC_3(VAR_8, VAR_13))
            return VAR_4;
    }


    return VAR_9->context.extensionSupported(VAR_8);
}
