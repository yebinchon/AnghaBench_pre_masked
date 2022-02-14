
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,char const*,int,int,int) ;
 scalar_t__ FUNC_6 (char*,char*,int,int,int,int ) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*,char const*,int) ;
 int VAR_8 ;
 int FUNC_9 (char*,char*,unsigned int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (unsigned char const*,scalar_t__) ;
 scalar_t__ FUNC_13 (unsigned int) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char const*) ;

__attribute__((used)) static void
FUNC_16(void)
{
    char *VAR_9;
    char *VAR_10;
    char *VAR_11;
    const char *VAR_12 = "Correct Horse Battery Staple";

    VAR_11 = (char *) FUNC_13(VAR_6);
    VAR_9 = (char *) FUNC_13(VAR_7);
    VAR_10 = (char *) FUNC_13(VAR_7);
    FUNC_9(VAR_11, ">A 16-bytes salt", VAR_6);
    if (FUNC_5(VAR_9, VAR_12, FUNC_15(VAR_12), VAR_2,
                          VAR_1) != 0) {
        FUNC_10("pwhash_str failure\n");
    }
    if (FUNC_5(VAR_10, VAR_12, FUNC_15(VAR_12), VAR_2,
                          VAR_1) != 0) {
        FUNC_10("pwhash_str(2) failure\n");
    }
    if (FUNC_14(VAR_9, VAR_10) == 0) {
        FUNC_10("pwhash_str() doesn't generate different salts\n");
    }
    if (FUNC_7(VAR_9, VAR_2, VAR_1) != 0 ||
        FUNC_7(VAR_9, VAR_2, VAR_1) != 0) {
        FUNC_10("needs_rehash() false positive\n");
    }
    if (FUNC_7(VAR_9, VAR_2, VAR_1 / 2) != 1 ||
        FUNC_7(VAR_9, VAR_2 - 1, VAR_1) != 1 ||
        FUNC_7(VAR_9, VAR_2, VAR_1 * 2) != 1 ||
        FUNC_7(VAR_9, VAR_2 + 1, VAR_1) != 1) {
        FUNC_10("needs_rehash() false negative (0)\n");
    }
    if (FUNC_3(VAR_9, VAR_2, VAR_1 / 2) != 1 ||
        FUNC_3(VAR_9, VAR_2 - 1, VAR_1) != 1 ||
        FUNC_3(VAR_9, VAR_2, VAR_1 * 2) != 1 ||
        FUNC_3(VAR_9, VAR_2 + 1, VAR_1) != 1) {
        FUNC_10("needs_rehash() false negative (1)\n");
    }
    if (FUNC_1(VAR_9, VAR_2, VAR_1 / 2) != -1 ||
        FUNC_1(VAR_9, VAR_2 - 1, VAR_1) != -1 ||
        FUNC_1(VAR_9, VAR_2, VAR_1 * 2) != -1 ||
        FUNC_1(VAR_9, VAR_2 + 1, VAR_1) != -1) {
        FUNC_10("needs_rehash() false negative (2)\n");
    }
    if (FUNC_7(VAR_9, VAR_2, VAR_1 / 2) != 1) {
        FUNC_10("pwhash_str_needs_rehash() didn't handle argon2id\n");
    }
    if (FUNC_7(VAR_9 + 1, VAR_2, VAR_1) != -1 ||
        FUNC_3(VAR_9 + 1, VAR_2, VAR_1) != -1) {
        FUNC_10("needs_rehash() didn't fail with an invalid hash string\n");
    }
    if (FUNC_12((const unsigned char *) VAR_9 + FUNC_15(VAR_9),
                       VAR_5 - FUNC_15(VAR_9)) != 1 ||
        FUNC_12((const unsigned char *) VAR_10 + FUNC_15(VAR_10),
                       VAR_5 - FUNC_15(VAR_10)) != 1) {
        FUNC_10("pwhash_argon2id_str() doesn't properly pad with zeros\n");
    }
    if (FUNC_4(VAR_9, VAR_12, FUNC_15(VAR_12)) != 0) {
        FUNC_10("pwhash_argon2id_str_verify(1) failure\n");
    }
    if (FUNC_8(VAR_9, VAR_12, FUNC_15(VAR_12)) != 0) {
        FUNC_10("pwhash_str_verify(1') failure\n");
    }
    VAR_9[14]++;
    if (FUNC_8(VAR_9, VAR_12, FUNC_15(VAR_12)) != -1) {
        FUNC_10("pwhash_argon2id_str_verify(2) failure\n");
    }
    VAR_9[14]--;
    FUNC_0(VAR_9[VAR_7 - 1U] == 0);

    if (FUNC_5(VAR_10, VAR_12, 0x100000000ULL, VAR_2,
                          VAR_1) != -1) {
        FUNC_10("pwhash_str() with a large password should have failed\n");
    }
    if (FUNC_5(VAR_10, VAR_12, FUNC_15(VAR_12), 1, VAR_1) != 0) {
        FUNC_10("pwhash_str() with a small opslimit should not have failed\n");
    }
    if (FUNC_5(VAR_10, VAR_12, FUNC_15(VAR_12), 0, VAR_1) != -1) {
        FUNC_10("pwhash_argon2id_str() with a null opslimit should have failed\n");
    }
    if (FUNC_8("$argon2id$m=65536,t=2,p=1c29tZXNhbHQ"
                                 "$9sTbSlTio3Biev89thdrlKKiCaYsjjYVJxGAL3swxpQ",
                                 "password", 0x100000000ULL) != -1) {
        FUNC_10("pwhash_str_verify(invalid(0)) failure\n");
    }
    if (FUNC_8("$argon2id$m=65536,t=2,p=1c29tZXNhbHQ"
                                 "$9sTbSlTio3Biev89thdrlKKiCaYsjjYVJxGAL3swxpQ",
                                 "password", FUNC_15("password")) != -1) {
        FUNC_10("pwhash_str_verify(invalid(1)) failure %d\n", VAR_8);
    }
    if (FUNC_8("$argon2id$m=65536,t=2,p=1$c29tZXNhbHQ"
                                 "9sTbSlTio3Biev89thdrlKKiCaYsjjYVJxGAL3swxpQ",
                                 "password", FUNC_15("password")) != -1) {
        FUNC_10("pwhash_str_verify(invalid(2)) failure\n");
    }
    if (FUNC_8("$argon2id$m=65536,t=2,p=1$c29tZXNhbHQ"
                                 "$b2G3seW+uPzerwQQC+/E1K50CLLO7YXy0JRcaTuswRo",
                                 "password", FUNC_15("password")) != -1) {
        FUNC_10("pwhash_str_verify(invalid(3)) failure\n");
    }
    if (FUNC_8("$argon2id$v=19$m=65536,t=2,p=1c29tZXNhbHQ"
                                 "$wWKIMhR9lyDFvRz9YTZweHKfbftvj+qf+YFY4NeBbtA",
                                 "password", FUNC_15("password")) != -1) {
        FUNC_10("pwhash_str_verify(invalid(4)) failure\n");
    }
    if (FUNC_8("$argon2id$v=19$m=65536,t=2,p=1$c29tZXNhbHQ"
                                 "wWKIMhR9lyDFvRz9YTZweHKfbftvj+qf+YFY4NeBbtA",
                                 "password", FUNC_15("password")) != -1) {
        FUNC_10("pwhash_str_verify(invalid(5)) failure\n");
    }
    if (FUNC_8("$argon2id$v=19$m=65536,t=2,p=1$c29tZXNhbHQ"
                                 "$8iIuixkI73Js3G1uMbezQXD0b8LG4SXGsOwoQkdAQIM",
                                 "password", FUNC_15("password")) != -1) {
        FUNC_10("pwhash_str_verify(invalid(6)) failure\n");
    }
    if (FUNC_8("$argon2id$v=19$m=256,t=3,p=1$MDEyMzQ1Njc"
                                 "$G5ajKFCoUzaXRLdz7UJb5wGkb2Xt+X5/GQjUYtS2+TE",
                                 "password", FUNC_15("password")) != 0) {
        FUNC_10("pwhash_str_verify(valid(7)) failure\n");
    }
    if (FUNC_8("$argon2id$v=19$m=256,t=3,p=1$MDEyMzQ1Njc"
                                 "$G5ajKFCoUzaXRLdz7UJb5wGkb2Xt+X5/GQjUYtS2+TE",
                                 "passwore", FUNC_15("passwore")) != -1 || VAR_8 != VAR_0) {
        FUNC_10("pwhash_str_verify(invalid(7)) failure\n");
    }
    if (FUNC_8("$Argon2id$v=19$m=256,t=3,p=1$MDEyMzQ1Njc"
                                 "$G5ajKFCoUzaXRLdz7UJb5wGkb2Xt+X5/GQjUYtS2+TE",
                                 "password", FUNC_15("password")) != -1 || VAR_8 != VAR_0) {
        FUNC_10("pwhash_str_verify(invalid(8)) failure\n");
    }
    if (FUNC_8("$argon2id$v=19$m=256,t=3,p=2$MDEyMzQ1Njc"
                                 "$G5ajKFCoUzaXRLdz7UJb5wGkb2Xt+X5/GQjUYtS2+TE",
                                 "password", FUNC_15("password")) != -1 || VAR_8 != VAR_0) {
        FUNC_10("pwhash_str_verify(invalid(9)) failure\n");
    }
    FUNC_0(FUNC_6(VAR_9, "test", 4, VAR_2, VAR_1,
                                 VAR_4) == 0);
    FUNC_0(FUNC_4(VAR_9, "test", 4) == 0);
    FUNC_0(FUNC_3(VAR_9,
                                                   VAR_2, VAR_1) == 0);
    FUNC_0(FUNC_3(VAR_9,
                                                   VAR_2 / 2, VAR_1) == 1);
    FUNC_0(FUNC_3(VAR_9,
                                                   VAR_2, VAR_1 / 2) == 1);
    FUNC_0(FUNC_3(VAR_9, 0, 0) == 1);
    FUNC_0(FUNC_1(VAR_9, 0, 0) == -1);
    FUNC_0(FUNC_3(VAR_9 + 1,
                                                   VAR_2, VAR_1) == -1);
    FUNC_0(FUNC_1(VAR_9, 0, 0) == -1);
    FUNC_0(FUNC_1("", VAR_2, VAR_1) == -1);
    FUNC_0(FUNC_6(VAR_9, "test", 4, VAR_2, VAR_1,
                                 VAR_3) == 0);
    FUNC_0(FUNC_2(VAR_9, "test", 4) == 0);
    FUNC_0(FUNC_1(VAR_9,
                                                  VAR_2, VAR_1) == 0);
    FUNC_0(FUNC_1(VAR_9,
                                                  VAR_2 / 2, VAR_1) == 1);
    FUNC_0(FUNC_1(VAR_9,
                                                  VAR_2, VAR_1 / 2) == 1);
    FUNC_0(FUNC_1(VAR_9, 0, 0) == 1);
    FUNC_0(FUNC_3(VAR_9, 0, 0) == -1);
    FUNC_0(FUNC_1("", VAR_2, VAR_1) == -1);
    FUNC_0(FUNC_1(VAR_9 + 1,
                                                  VAR_2, VAR_1) == -1);
    FUNC_11(VAR_11);
    FUNC_11(VAR_9);
    FUNC_11(VAR_10);
}
