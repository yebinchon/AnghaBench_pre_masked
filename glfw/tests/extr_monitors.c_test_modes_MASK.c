
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ redBits; scalar_t__ greenBits; scalar_t__ blueBits; scalar_t__ refreshRate; int width; scalar_t__ height; } ;
typedef int GLFWwindow ;
typedef TYPE_1__ GLFWvidmode ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (TYPE_1__ const*) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int,scalar_t__,char*,int ,int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 () ;
 int VAR_10 ;
 double FUNC_9 () ;
 TYPE_1__* FUNC_10 (int *,int*) ;
 int FUNC_11 (int *,int*,scalar_t__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (double) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int) ;
 int FUNC_19 () ;
 int FUNC_20 (int ,scalar_t__) ;
 scalar_t__ FUNC_21 (int *) ;
 int VAR_11 ;
 int FUNC_22 (char*,...) ;

__attribute__((used)) static void FUNC_23(GLFWmonitor* VAR_12)
{
    int VAR_13, VAR_14;
    GLFWwindow* VAR_15;
    const GLFWvidmode* VAR_16 = FUNC_10(VAR_12, &VAR_14);

    for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
    {
        const GLFWvidmode* VAR_17 = VAR_16 + VAR_13;
        GLFWvidmode VAR_18;

        FUNC_20(VAR_3, VAR_17->redBits);
        FUNC_20(VAR_2, VAR_17->greenBits);
        FUNC_20(VAR_1, VAR_17->blueBits);
        FUNC_20(VAR_4, VAR_17->refreshRate);

        FUNC_22("Testing mode %u on monitor %s: %s\n",
               (unsigned int) VAR_13,
               FUNC_7(VAR_12),
               FUNC_1(VAR_17));

        VAR_15 = FUNC_5(VAR_17->width, VAR_17->height,
                                  "Video Mode Test",
                                  FUNC_8(),
                                  ((void*)0));
        if (!VAR_15)
        {
            FUNC_22("Failed to enter mode %u: %s\n",
                   (unsigned int) VAR_13,
                   FUNC_1(VAR_17));
            continue;
        }

        FUNC_14(VAR_15, VAR_9);
        FUNC_15(VAR_15, VAR_11);

        FUNC_12(VAR_15);
        FUNC_4(VAR_10);
        FUNC_18(1);

        FUNC_16(0.0);

        while (FUNC_9() < 5.0)
        {
            FUNC_2(VAR_6);
            FUNC_17(VAR_15);
            FUNC_13();

            if (FUNC_21(VAR_15))
            {
                FUNC_22("User terminated program\n");

                FUNC_19();
                FUNC_0(VAR_0);
            }
        }

        FUNC_3(VAR_8, &VAR_18.redBits);
        FUNC_3(VAR_7, &VAR_18.greenBits);
        FUNC_3(VAR_5, &VAR_18.blueBits);

        FUNC_11(VAR_15, &VAR_18.width, &VAR_18.height);

        if (VAR_18.redBits != VAR_17->redBits ||
            VAR_18.greenBits != VAR_17->greenBits ||
            VAR_18.blueBits != VAR_17->blueBits)
        {
            FUNC_22("*** Color bit mismatch: (%i %i %i) instead of (%i %i %i)\n",
                   VAR_18.redBits, VAR_18.greenBits, VAR_18.blueBits,
                   VAR_17->redBits, VAR_17->greenBits, VAR_17->blueBits);
        }

        if (VAR_18.width != VAR_17->width || VAR_18.height != VAR_17->height)
        {
            FUNC_22("*** Size mismatch: %ix%i instead of %ix%i\n",
                   VAR_18.width, VAR_18.height,
                   VAR_17->width, VAR_17->height);
        }

        FUNC_22("Closing window\n");

        FUNC_6(VAR_15);
        VAR_15 = ((void*)0);

        FUNC_13();
    }
}
