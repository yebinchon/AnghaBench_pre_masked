
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*,unsigned long long,unsigned char const*,unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char const*,unsigned char const*) ;
 int FUNC_2 (unsigned char*,int) ;

int
FUNC_3(unsigned char *VAR_1, const unsigned char *VAR_2,
                                      unsigned long long VAR_3,
                                      const unsigned char *VAR_4,
                                      const unsigned char *VAR_5,
                                      const unsigned char *VAR_6)
{
    unsigned char VAR_7[VAR_0];
    int VAR_8;

    if (FUNC_1(VAR_7, VAR_5, VAR_6) != 0) {
        return -1;
    }
    VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
    FUNC_2(VAR_7, sizeof VAR_7);

    return VAR_8;
}
