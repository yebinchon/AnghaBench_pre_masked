
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yrmcds_error ;
typedef int yrmcds_cnt ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int body ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (int *,int ,scalar_t__*,int,char*,size_t,char const*) ;

yrmcds_error
FUNC_3(yrmcds_cnt* VAR_3, const char* VAR_4, size_t VAR_5,
                   uint32_t VAR_6, uint32_t VAR_7, uint32_t* VAR_8) {
    if( VAR_4 == ((void*)0) || VAR_5 == 0 || VAR_5 > VAR_0 ||
        VAR_6 == 0 || VAR_6 > VAR_7 )
        return VAR_1;

    char VAR_9[10];
    FUNC_1(VAR_6, VAR_9);
    FUNC_1(VAR_7, VAR_9 + 4);
    FUNC_0((uint16_t)VAR_5, VAR_9 + 8);
    return FUNC_2(VAR_3, VAR_2, VAR_8,
                        sizeof(VAR_9), VAR_9, VAR_5, VAR_4);
}
