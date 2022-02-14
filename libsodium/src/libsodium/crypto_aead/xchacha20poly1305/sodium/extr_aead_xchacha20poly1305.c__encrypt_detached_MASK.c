
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned char crypto_onetimeauth_poly1305_state ;


 int FUNC_0 (unsigned char*,int ) ;
 unsigned char* VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;
 int FUNC_4 (unsigned char*,int,unsigned char const*,unsigned char const*) ;
 int FUNC_5 (unsigned char*,unsigned char const*,unsigned long long,unsigned char const*,unsigned int,unsigned char const*) ;
 int FUNC_6 (unsigned char*,int) ;

__attribute__((used)) static int
FUNC_7(unsigned char *VAR_2,
                  unsigned char *VAR_3,
                  unsigned long long *VAR_4,
                  const unsigned char *VAR_5,
                  unsigned long long VAR_6,
                  const unsigned char *VAR_7,
                  unsigned long long VAR_8,
                  const unsigned char *VAR_9,
                  const unsigned char *VAR_10,
                  const unsigned char *VAR_11)
{
    crypto_onetimeauth_poly1305_state VAR_12;
    unsigned char VAR_13[64U];
    unsigned char VAR_14[8U];

    (void) VAR_9;
    FUNC_4(VAR_13, sizeof VAR_13, VAR_10, VAR_11);
    FUNC_2(&VAR_12, VAR_13);
    FUNC_6(VAR_13, sizeof VAR_13);

    FUNC_3(&VAR_12, VAR_7, VAR_8);
    FUNC_3(&VAR_12, VAR_0, (0x10 - VAR_8) & 0xf);

    FUNC_5(VAR_2, VAR_5, VAR_6, VAR_10, 1U, VAR_11);

    FUNC_3(&VAR_12, VAR_2, VAR_6);
    FUNC_3(&VAR_12, VAR_0, (0x10 - VAR_6) & 0xf);

    FUNC_0(VAR_14, (uint64_t) VAR_8);
    FUNC_3(&VAR_12, VAR_14, sizeof VAR_14);

    FUNC_0(VAR_14, (uint64_t) VAR_6);
    FUNC_3(&VAR_12, VAR_14, sizeof VAR_14);

    FUNC_1(&VAR_12, VAR_3);
    FUNC_6(&VAR_12, sizeof VAR_12);

    if (VAR_4 != ((void*)0)) {
        *VAR_4 = VAR_1;
    }
    return 0;
}
