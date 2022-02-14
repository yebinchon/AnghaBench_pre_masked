
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,unsigned char const*,unsigned char const*) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned char const*,unsigned long long,unsigned char const*,unsigned char*) ;
 int FUNC_2 (unsigned char*,int) ;

int
FUNC_3(unsigned char *VAR_1, const unsigned char *VAR_2,
                         const unsigned char *VAR_3,
                         unsigned long long VAR_4, const unsigned char *VAR_5,
                         const unsigned char *VAR_6, const unsigned char *VAR_7)
{
    unsigned char VAR_8[VAR_0];
    int VAR_9;

    if (FUNC_0(VAR_8, VAR_6, VAR_7) != 0) {
        return -1;
    }
    VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_8);
    FUNC_2(VAR_8, sizeof VAR_8);

    return VAR_9;
}
