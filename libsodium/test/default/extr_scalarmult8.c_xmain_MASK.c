
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* outcome; int shared_hex; int pk_hex; int sk_hex; } ;


 int FUNC_0 (unsigned char*,unsigned char*,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 TYPE_1__* VAR_2 ;

int
FUNC_6(void)
{
    unsigned char VAR_3[VAR_1];
    unsigned char VAR_4[VAR_0];
    unsigned char VAR_5[VAR_0];
    unsigned char VAR_6[VAR_0];
    unsigned int VAR_7;
    int VAR_8;

    for (VAR_7 = 0U; VAR_7 < (sizeof VAR_2) / (sizeof VAR_2[0]); VAR_7++) {
        FUNC_4(VAR_3, VAR_1, VAR_2[VAR_7].sk_hex,
                       VAR_1 * 2, ((void*)0), ((void*)0), ((void*)0));
        FUNC_4(VAR_4, VAR_0, VAR_2[VAR_7].pk_hex,
                       VAR_0 * 2, ((void*)0), ((void*)0), ((void*)0));
        FUNC_4(VAR_5, VAR_0, VAR_2[VAR_7].shared_hex,
                       VAR_0 * 2, ((void*)0), ((void*)0), ((void*)0));
        FUNC_3(VAR_6, VAR_0);
        VAR_8 = FUNC_0(VAR_6, VAR_3, VAR_4);
        if (VAR_8 == 0) {
            if (FUNC_5(VAR_2[VAR_7].outcome, "acceptable") == 0) {
                FUNC_2("test case %u succeeded (%s)\n", VAR_7,
                       VAR_2[VAR_7].outcome);
            } else if (FUNC_5(VAR_2[VAR_7].outcome, "valid") != 0) {
                FUNC_2("*** test case %u succeeded, was supposed to be %s\n", VAR_7,
                       VAR_2[VAR_7].outcome);
            }
            if (FUNC_1(VAR_5, VAR_6, VAR_0) != 0) {
                FUNC_2("*** test case %u succeeded, but shared key is not %s\n",
                       VAR_7, VAR_2[VAR_7].outcome);
            }
        } else {
            if (FUNC_5(VAR_2[VAR_7].outcome, "acceptable") == 0) {
                FUNC_2("test case %u failed (%s)\n", VAR_7, VAR_2[VAR_7].outcome);
            } else if (FUNC_5(VAR_2[VAR_7].outcome, "valid") == 0) {
                FUNC_2("*** test case %u failed, was supposed to be %s\n", VAR_7,
                       VAR_2[VAR_7].outcome);
            }
        }
    }
    FUNC_2("OK\n");

    return 0;
}
