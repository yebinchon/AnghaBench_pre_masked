
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char*,unsigned long long,char*,size_t,unsigned char const*,unsigned long long,size_t) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char*,int,char const*,int ,int *,int *,int *) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(void)
{
    static struct {
        const char *passwd_hex;
        size_t passwdlen;
        const char *salt_hex;
        size_t outlen;
        unsigned long long opslimit;
        size_t memlimit;
    } VAR_1[] = {
        { "a347ae92bce9f80f6f595a4480fc9c2fe7e7d7148d371e9487d75f5c23008ffae0"
          "65577a928febd9b1973a5a95073acdbeb6a030cfc0d79caa2dc5cd011cef02c08d"
          "a232d76d52dfbca38ca8dcbd665b17d1665f7cf5fe59772ec909733b24de97d6f5"
          "8d220b20c60d7c07ec1fd93c52c31020300c6c1facd77937a597c7a6",
          127,
          "5541fbc995d5c197ba290346d2c559dedf405cf97e5f95482143202f9e74f5c2",
          155, 64, 1397645 },
        { "a347ae92bce9f80f6f595a4480fc9c2fe7e7d7148d371e9487d75f5c23008ffae0"
          "65577a928febd9b1973a5a95073acdbeb6a030cfc0d79caa2dc5cd011cef02c08d"
          "a232d76d52dfbca38ca8dcbd665b17d1665f7cf5fe59772ec909733b24de97d6f5"
          "8d220b20c60d7c07ec1fd93c52c31020300c6c1facd77937a597c7a6",
          127,
          "5541fbc995d5c197ba290346d2c559dedf405cf97e5f95482143202f9e74f5c2",
          155, 32768, 1397645 },
    };
    char VAR_2[256];
    unsigned char VAR_3[VAR_0];
    unsigned char VAR_4[256];
    char VAR_5[256 * 2 + 1];
    size_t VAR_6 = 0U;

    do {
        FUNC_3((unsigned char *) VAR_2, sizeof VAR_2,
                       VAR_1[VAR_6].passwd_hex, FUNC_4(VAR_1[VAR_6].passwd_hex), ((void*)0),
                       ((void*)0), ((void*)0));
        FUNC_3(VAR_3, sizeof VAR_3, VAR_1[VAR_6].salt_hex,
                       FUNC_4(VAR_1[VAR_6].salt_hex), ((void*)0), ((void*)0), ((void*)0));
        if (FUNC_0(
                VAR_4, (unsigned long long) VAR_1[VAR_6].outlen, VAR_2,
                VAR_1[VAR_6].passwdlen, (const unsigned char *) VAR_3,
                VAR_1[VAR_6].opslimit, VAR_1[VAR_6].memlimit) != 0) {
            FUNC_1("pwhash failure\n");
        }
        FUNC_2(VAR_5, sizeof VAR_5, VAR_4, VAR_1[VAR_6].outlen);
        FUNC_1("%s\n", VAR_5);
    } while (++VAR_6 < (sizeof VAR_1) / (sizeof VAR_1[0]));
}
