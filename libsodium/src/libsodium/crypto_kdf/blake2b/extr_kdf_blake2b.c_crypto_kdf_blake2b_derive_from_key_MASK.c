
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,size_t,int *,int ,unsigned char const*,int ,unsigned char*,unsigned char*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (unsigned char*,char const*,int) ;
 int FUNC_3 (unsigned char*,int ,int) ;

int FUNC_4(unsigned char *VAR_8, size_t VAR_9,
                                       uint64_t VAR_10,
                                       const char VAR_11[VAR_5],
                                       const unsigned char VAR_12[VAR_6])
{
    unsigned char VAR_13[VAR_1];
    unsigned char VAR_14[VAR_2];

    FUNC_2(VAR_13, VAR_11, VAR_5);
    FUNC_3(VAR_13 + VAR_5, 0, sizeof VAR_13 - VAR_5);
    FUNC_0(VAR_14, VAR_10);
    FUNC_3(VAR_14 + 8, 0, (sizeof VAR_14) - 8);
    if (VAR_9 < VAR_4 ||
        VAR_9 > VAR_3) {
        VAR_7 = VAR_0;
        return -1;
    }
    return FUNC_1(VAR_8, VAR_9,
                                                    ((void*)0), 0,
                                                    VAR_12, VAR_6,
                                                    VAR_14, VAR_13);
}
