
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,char const* const,size_t,unsigned char*,int,int ,char*,int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (unsigned char*,int) ;

int
FUNC_3(char VAR_13[VAR_11],
                           const char *const VAR_14,
                           unsigned long long VAR_15,
                           unsigned long long VAR_16, size_t VAR_17)
{
    unsigned char VAR_18[VAR_10];

    FUNC_1(VAR_13, 0, VAR_11);
    if (VAR_15 > VAR_8 ||
        VAR_16 > VAR_6 ||
        VAR_17 > VAR_4) {
        VAR_12 = VAR_1;
        return -1;
    }
    if (VAR_15 < VAR_9 ||
        VAR_16 < VAR_7 ||
        VAR_17 < VAR_5) {
        VAR_12 = VAR_2;
        return -1;
    }
    FUNC_2(VAR_18, sizeof VAR_18);
    if (FUNC_0((uint32_t) VAR_16, (uint32_t) (VAR_17 / 1024U),
                              (uint32_t) 1U, VAR_14, (size_t) VAR_15, VAR_18,
                              sizeof VAR_18, VAR_3, VAR_13,
                              VAR_11) != VAR_0) {
        return -1;
    }
    return 0;
}
