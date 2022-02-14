
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* outcome; int detached_ciphertext_hex; int mac_hex; int ad_hex; int message_hex; int nonce_hex; int key_hex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned char*,int *,unsigned char*,size_t,unsigned char*,unsigned char*,size_t,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_3 (char*,unsigned int,...) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*,size_t,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_9(void)
{
    unsigned char *VAR_4;
    unsigned char *VAR_5;
    unsigned char *VAR_6;
    unsigned char *VAR_7;
    unsigned char *VAR_8;
    unsigned char *VAR_9;
    unsigned char *VAR_10;
    size_t VAR_11;
    size_t VAR_12;
    size_t VAR_13;
    unsigned int VAR_14;

    VAR_7 = (unsigned char *) FUNC_6(VAR_1);
    VAR_10 = (unsigned char *) FUNC_6(VAR_2);
    VAR_9 = (unsigned char *) FUNC_6(VAR_0);

    for (VAR_14 = 0U; VAR_14 < (sizeof VAR_3) / (sizeof VAR_3[0]); VAR_14++) {
        FUNC_0(FUNC_8(VAR_3[VAR_14].key_hex) == 2 * VAR_1);
        FUNC_5(VAR_7, VAR_1, VAR_3[VAR_14].key_hex,
                       FUNC_8(VAR_3[VAR_14].key_hex), ((void*)0), ((void*)0), ((void*)0));

        FUNC_0(FUNC_8(VAR_3[VAR_14].nonce_hex) ==
               2 * VAR_2);
        FUNC_5(VAR_10, VAR_2,
                       VAR_3[VAR_14].nonce_hex, FUNC_8(VAR_3[VAR_14].nonce_hex), ((void*)0),
                       ((void*)0), ((void*)0));

        VAR_13 = FUNC_8(VAR_3[VAR_14].message_hex) / 2;
        VAR_8 = (unsigned char *) FUNC_6(VAR_13);
        FUNC_5(VAR_8, VAR_13, VAR_3[VAR_14].message_hex,
                       FUNC_8(VAR_3[VAR_14].message_hex), ((void*)0), ((void*)0), ((void*)0));

        VAR_11 = FUNC_8(VAR_3[VAR_14].ad_hex) / 2;
        VAR_4 = (unsigned char *) FUNC_6(VAR_11);
        FUNC_5(VAR_4, VAR_11, VAR_3[VAR_14].ad_hex, FUNC_8(VAR_3[VAR_14].ad_hex),
                       ((void*)0), ((void*)0), ((void*)0));

        VAR_12 = VAR_13;
        FUNC_0(FUNC_8(VAR_3[VAR_14].detached_ciphertext_hex) == 2 * VAR_13);
        FUNC_0(FUNC_8(VAR_3[VAR_14].mac_hex) == 2 * VAR_0);
        FUNC_5(VAR_9, VAR_0, VAR_3[VAR_14].mac_hex,
                       FUNC_8(VAR_3[VAR_14].mac_hex), ((void*)0), ((void*)0), ((void*)0));

        VAR_6 =
            (unsigned char *) FUNC_6(VAR_12);
        FUNC_5(VAR_6, VAR_12,
                       VAR_3[VAR_14].detached_ciphertext_hex,
                       FUNC_8(VAR_3[VAR_14].detached_ciphertext_hex), ((void*)0), ((void*)0),
                       ((void*)0));

        VAR_5 = (unsigned char *) FUNC_6(VAR_13);
        if (FUNC_1(
                VAR_5, ((void*)0), VAR_6, VAR_12,
                VAR_9, VAR_4, VAR_11, VAR_10, VAR_7) == 0) {
            if (FUNC_7(VAR_3[VAR_14].outcome, "valid") != 0) {
                FUNC_3("*** test case %u succeeded, was supposed to be %s\n", VAR_14,
                       VAR_3[VAR_14].outcome);
            }
            if (FUNC_2(VAR_5, VAR_8, VAR_13) != 0) {
                FUNC_3("Incorrect decryption of test vector #%u\n",
                       (unsigned int) VAR_14);
            }
        } else {
            if (FUNC_7(VAR_3[VAR_14].outcome, "invalid") != 0) {
                FUNC_3("*** test case %u failed, was supposed to be %s\n", VAR_14,
                       VAR_3[VAR_14].outcome);
            }
        }

        FUNC_4(VAR_8);
        FUNC_4(VAR_4);
        FUNC_4(VAR_5);
        FUNC_4(VAR_6);
    }

    FUNC_4(VAR_7);
    FUNC_4(VAR_9);
    FUNC_4(VAR_10);

    return 0;
}
