
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int targets ;
typedef int XPointer ;
struct TYPE_8__ {scalar_t__ property; int requestor; } ;
struct TYPE_9__ {TYPE_2__ xselection; } ;
typedef TYPE_3__ XEvent ;
struct TYPE_7__ {scalar_t__ const UTF8_STRING; scalar_t__ PRIMARY; char* primarySelectionString; char* clipboardString; scalar_t__ helperWindowHandle; scalar_t__ INCR; int display; int GLFW_SELECTION; } ;
struct TYPE_10__ {TYPE_1__ x11; } ;
typedef scalar_t__ Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ const VAR_7 ;
 int FUNC_0 (int ,TYPE_3__*,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,TYPE_3__*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__ const,int ,scalar_t__,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ,scalar_t__,int ,int ,int ,int ,scalar_t__*,int*,unsigned long*,unsigned long*,unsigned char**) ;
 TYPE_4__ VAR_8 ;
 int FUNC_6 (int ,char*) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int VAR_9 ;
 char* FUNC_10 (char*,size_t) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static const char* FUNC_13(Atom VAR_10)
{
    char** VAR_11 = ((void*)0);
    const Atom VAR_12[] = { VAR_8.x11.UTF8_STRING, VAR_7 };
    const size_t VAR_13 = sizeof(VAR_12) / sizeof(VAR_12[0]);

    if (VAR_10 == VAR_8.x11.PRIMARY)
        VAR_11 = &VAR_8.x11.primarySelectionString;
    else
        VAR_11 = &VAR_8.x11.clipboardString;

    if (FUNC_4(VAR_8.x11.display, VAR_10) ==
        VAR_8.x11.helperWindowHandle)
    {


        return *VAR_11;
    }

    FUNC_9(*VAR_11);
    *VAR_11 = ((void*)0);

    for (size_t VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
    {
        char* VAR_15;
        Atom VAR_16;
        int VAR_17;
        unsigned long VAR_18, VAR_19;
        XEvent VAR_20, VAR_21;

        FUNC_2(VAR_8.x11.display,
                          VAR_10,
                          VAR_12[VAR_14],
                          VAR_8.x11.GLFW_SELECTION,
                          VAR_8.x11.helperWindowHandle,
                          VAR_1);

        while (!FUNC_1(VAR_8.x11.display,
                                       VAR_8.x11.helperWindowHandle,
                                       VAR_5,
                                       &VAR_20))
        {
            FUNC_12(((void*)0));
        }

        if (VAR_20.xselection.property == VAR_4)
            continue;

        FUNC_0(VAR_8.x11.display,
                      &VAR_21,
                      VAR_9,
                      (XPointer) &VAR_20);

        FUNC_5(VAR_8.x11.display,
                           VAR_20.xselection.requestor,
                           VAR_20.xselection.property,
                           0,
                           VAR_3,
                           VAR_6,
                           VAR_0,
                           &VAR_16,
                           &VAR_17,
                           &VAR_18,
                           &VAR_19,
                           (unsigned char**) &VAR_15);

        if (VAR_16 == VAR_8.x11.INCR)
        {
            size_t VAR_22 = 1;
            char* VAR_23 = ((void*)0);

            for (;;)
            {
                while (!FUNC_0(VAR_8.x11.display,
                                      &VAR_21,
                                      VAR_9,
                                      (XPointer) &VAR_20))
                {
                    FUNC_12(((void*)0));
                }

                FUNC_3(VAR_15);
                FUNC_5(VAR_8.x11.display,
                                   VAR_20.xselection.requestor,
                                   VAR_20.xselection.property,
                                   0,
                                   VAR_3,
                                   VAR_6,
                                   VAR_0,
                                   &VAR_16,
                                   &VAR_17,
                                   &VAR_18,
                                   &VAR_19,
                                   (unsigned char**) &VAR_15);

                if (VAR_18)
                {
                    VAR_22 += VAR_18;
                    VAR_23 = FUNC_10(VAR_23, VAR_22);
                    VAR_23[VAR_22 - VAR_18 - 1] = '\0';
                    FUNC_11(VAR_23, VAR_15);
                }

                if (!VAR_18)
                {
                    if (VAR_12[VAR_14] == VAR_7)
                    {
                        *VAR_11 = FUNC_8(VAR_23);
                        FUNC_9(VAR_23);
                    }
                    else
                        *VAR_11 = VAR_23;

                    break;
                }
            }
        }
        else if (VAR_16 == VAR_12[VAR_14])
        {
            if (VAR_12[VAR_14] == VAR_7)
                *VAR_11 = FUNC_8(VAR_15);
            else
                *VAR_11 = FUNC_7(VAR_15);
        }

        FUNC_3(VAR_15);

        if (*VAR_11)
            break;
    }

    if (!*VAR_11)
    {
        FUNC_6(VAR_2,
                        "X11: Failed to convert selection to string");
    }

    return *VAR_11;
}
