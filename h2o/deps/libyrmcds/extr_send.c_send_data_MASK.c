
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yrmcds_error ;
typedef int yrmcds_command ;
struct TYPE_4__ {size_t compress_size; } ;
typedef TYPE_1__ yrmcds ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int extras ;


 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int*,size_t,char const*,int,char*,size_t,char const*) ;

__attribute__((used)) static yrmcds_error FUNC_6(
    yrmcds* VAR_4, yrmcds_command VAR_5, const char* VAR_6, size_t VAR_7,
    const char* VAR_8, size_t VAR_9, uint32_t VAR_10, uint32_t VAR_11,
    uint64_t VAR_12, uint32_t* VAR_13) {
    if( VAR_4 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == 0 ||
        VAR_8 == ((void*)0) || VAR_9 == 0 )
        return VAR_0;

    int VAR_14 = 0;
    char VAR_15[8];
    FUNC_3(VAR_10, VAR_15);
    FUNC_3(VAR_11, &VAR_15[4]);
    yrmcds_error VAR_16 = FUNC_5(VAR_4, VAR_5, VAR_12, VAR_13, VAR_7, VAR_6,
                                  sizeof(VAR_15), VAR_15, VAR_9, VAR_8);
    if( VAR_14 )
        FUNC_2((void*)VAR_8);
    return VAR_16;
}
