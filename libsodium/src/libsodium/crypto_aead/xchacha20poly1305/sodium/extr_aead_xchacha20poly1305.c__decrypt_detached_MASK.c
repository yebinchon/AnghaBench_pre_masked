
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned char crypto_onetimeauth_poly1305_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int ) ;
 unsigned char* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*) ;
 int FUNC_4 (unsigned char*,unsigned char const*,int) ;
 int FUNC_5 (unsigned char*,int,unsigned char const*,unsigned char const*) ;
 int FUNC_6 (unsigned char*,unsigned char const*,unsigned long long,unsigned char const*,unsigned int,unsigned char const*) ;
 int FUNC_7 (unsigned char*,unsigned char const*) ;
 int FUNC_8 (unsigned char*,int ,unsigned long long) ;
 int FUNC_9 (unsigned char*,int) ;

__attribute__((used)) static int
FUNC_10(unsigned char *VAR_2,
                  unsigned char *VAR_3,
                  const unsigned char *VAR_4,
                  unsigned long long VAR_5,
                  const unsigned char *VAR_6,
                  const unsigned char *VAR_7,
                  unsigned long long VAR_8,
                  const unsigned char *VAR_9,
                  const unsigned char *VAR_10)
{
    crypto_onetimeauth_poly1305_state VAR_11;
    unsigned char VAR_12[64U];
    unsigned char VAR_13[8U];
    unsigned char VAR_14[VAR_1];
    unsigned long long VAR_15;
    int VAR_16;

    (void) VAR_3;
    FUNC_5(VAR_12, sizeof VAR_12, VAR_9, VAR_10);
    FUNC_3(&VAR_11, VAR_12);
    FUNC_9(VAR_12, sizeof VAR_12);

    FUNC_4(&VAR_11, VAR_7, VAR_8);
    FUNC_4(&VAR_11, VAR_0, (0x10 - VAR_8) & 0xf);

    VAR_15 = VAR_5;
    FUNC_4(&VAR_11, VAR_4, VAR_15);
    FUNC_4(&VAR_11, VAR_0, (0x10 - VAR_15) & 0xf);

    FUNC_1(VAR_13, (uint64_t) VAR_8);
    FUNC_4(&VAR_11, VAR_13, sizeof VAR_13);

    FUNC_1(VAR_13, (uint64_t) VAR_15);
    FUNC_4(&VAR_11, VAR_13, sizeof VAR_13);

    FUNC_2(&VAR_11, VAR_14);
    FUNC_9(&VAR_11, sizeof VAR_11);

    FUNC_0(sizeof VAR_14 == 16U);
    VAR_16 = FUNC_7(VAR_14, VAR_6);
    FUNC_9(VAR_14, sizeof VAR_14);
    if (VAR_2 == ((void*)0)) {
        return VAR_16;
    }
    if (VAR_16 != 0) {
        FUNC_8(VAR_2, 0, VAR_15);
        return -1;
    }
    FUNC_6(VAR_2, VAR_4, VAR_15, VAR_9, 1U, VAR_10);

    return 0;
}
