
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number; int closeable; } ;
typedef TYPE_1__ Slot ;
typedef int GLFWwindow ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (int,int) ;
 double FUNC_5 () ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (char*,char*,...) ;

__attribute__((used)) static void FUNC_9(GLFWwindow* VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    Slot* VAR_8 = FUNC_6(VAR_3);
    const char* VAR_9 = FUNC_4(VAR_4, VAR_5);

    if (VAR_9)
    {
        FUNC_8("%08x to %i at %0.3f: Key 0x%04x Scancode 0x%04x (%s) (%s) (with%s) was %s\n",
               VAR_2++, VAR_8->number, FUNC_5(), VAR_4, VAR_5,
               FUNC_1(VAR_4),
               VAR_9,
               FUNC_2(VAR_7),
               FUNC_0(VAR_6));
    }
    else
    {
        FUNC_8("%08x to %i at %0.3f: Key 0x%04x Scancode 0x%04x (%s) (with%s) was %s\n",
               VAR_2++, VAR_8->number, FUNC_5(), VAR_4, VAR_5,
               FUNC_1(VAR_4),
               FUNC_2(VAR_7),
               FUNC_0(VAR_6));
    }

    if (VAR_6 != VAR_1)
        return;

    switch (VAR_4)
    {
        case 129:
        {
            VAR_8->closeable = !VAR_8->closeable;

            FUNC_8("(( closing %s ))\n", VAR_8->closeable ? "enabled" : "disabled");
            break;
        }

        case 128:
        {
            const int VAR_10 = FUNC_3(VAR_3, VAR_0);
            FUNC_7(VAR_3, VAR_0, !VAR_10);

            FUNC_8("(( lock key mods %s ))\n", !VAR_10 ? "enabled" : "disabled");
            break;
        }
    }
}
