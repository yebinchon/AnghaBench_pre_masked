
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned long long,char*,size_t,unsigned char const*,unsigned long long,size_t,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned char*,int,char*,int,unsigned char*,int,unsigned long long,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int,unsigned char*,size_t) ;
 int FUNC_8 (unsigned char*,int,char const*,int,int *,int *,int *) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(void)
{
    static struct {
        const char * passwd_hex;
        size_t passwd_len;
        const char * salt_hex;
        size_t outlen;
        unsigned long long opslimit;
        size_t memlimit;
        unsigned int lanes;
    } VAR_3[] = {
        { "a347ae92bce9f80f6f595a4480fc9c2fe7e7d7148d371e9487d75f5c23008ffae0"
          "65577a928febd9b1973a5a95073acdbeb6a030cfc0d79caa2dc5cd011cef02c08d"
          "a232d76d52dfbca38ca8dcbd665b17d1665f7cf5fe59772ec909733b24de97d6f5"
          "8d220b20c60d7c07ec1fd93c52c31020300c6c1facd77937a597c7a6",
          127,
          "5541fbc995d5c197ba290346d2c559dedf405cf97e5f95482143202f9e74f5c2",
          155, 4, 397645, 1 },
        { "a347ae92bce9f80f6f595a4480fc9c2fe7e7d7148d371e9487d75f5c23008ffae0"
          "65577a928febd9b1973a5a95073acdbeb6a030cfc0d79caa2dc5cd011cef02c08d"
          "a232d76d52dfbca38ca8dcbd665b17d1665f7cf5fe59772ec909733b24de97d6f5"
          "8d220b20c60d7c07ec1fd93c52c31020300c6c1facd77937a597c7a6",
          127,
          "5541fbc995d5c197ba290346d2c559dedf405cf97e5f95482143202f9e74f5c2",
          155, 3, 397645, 1 },
    };
    char VAR_4[256];
    unsigned char VAR_5[VAR_2];
    unsigned char VAR_6[256];
    char VAR_7[256 * 2 + 1];
    size_t VAR_8 = 0U;

    do {
        FUNC_8((unsigned char *) VAR_4, sizeof VAR_4,
                       VAR_3[VAR_8].passwd_hex, FUNC_9(VAR_3[VAR_8].passwd_hex), ((void*)0),
                       ((void*)0), ((void*)0));
        FUNC_8(VAR_5, sizeof VAR_5, VAR_3[VAR_8].salt_hex,
                       FUNC_9(VAR_3[VAR_8].salt_hex), ((void*)0), ((void*)0), ((void*)0));
        if (FUNC_1(VAR_6, (unsigned long long) VAR_3[VAR_8].outlen, VAR_4,
                          VAR_3[VAR_8].passwd_len, (const unsigned char *) VAR_5,
                          VAR_3[VAR_8].opslimit, VAR_3[VAR_8].memlimit,
                          FUNC_3()) != 0) {
            FUNC_6("[tv2] pwhash failure: [%u]\n", (unsigned int) VAR_8);
            continue;
        }
        FUNC_7(VAR_7, sizeof VAR_7, VAR_6, VAR_3[VAR_8].outlen);
        FUNC_6("%s\n", VAR_7);
    } while (++VAR_8 < (sizeof VAR_3) / (sizeof VAR_3[0]));

    if (FUNC_4(VAR_6, sizeof VAR_6, "password", FUNC_9("password"), VAR_5, 3,
                               1ULL << 12, 0) != -1) {
        FUNC_6("[tv2] pwhash should have failed (0)\n");
    }
    if (FUNC_4(VAR_6, sizeof VAR_6, "password", FUNC_9("password"), VAR_5, 3,
                               1, FUNC_5()) != -1) {
        FUNC_6("[tv2] pwhash should have failed (1)\n");
    }
    if (FUNC_4(VAR_6, sizeof VAR_6, "password", FUNC_9("password"), VAR_5, 3,
                               1ULL << 12, FUNC_5()) != -1) {
        FUNC_6("[tv2] pwhash should have failed (2)\n");
    }
    if (FUNC_4(VAR_6, sizeof VAR_6, "password", FUNC_9("password"), VAR_5, 2,
                               1ULL << 12, FUNC_5()) != -1) {
        FUNC_6("[tv2] pwhash should have failed (3)\n");
    }
    if (FUNC_4(VAR_6, 15, "password", FUNC_9("password"), VAR_5, 3,
                               1ULL << 12, FUNC_5()) != -1) {
        FUNC_6("[tv2] pwhash with a short output length should have failed\n");
    }
    if (FUNC_4(VAR_6, sizeof VAR_6, "password", 0x100000000ULL, VAR_5, 3,
                               1ULL << 12, FUNC_5()) != -1) {
        FUNC_6("[tv2] pwhash with a long password length should have failed\n");
    }
    FUNC_0(FUNC_4(VAR_6, sizeof VAR_6, "password", FUNC_9("password"), VAR_5,
                                  VAR_1, VAR_0, FUNC_2()) == -1);
}
