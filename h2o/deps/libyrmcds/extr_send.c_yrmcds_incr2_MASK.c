
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_4__ {scalar_t__ text_mode; } ;
typedef TYPE_1__ yrmcds ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int extras ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *,size_t,char const*,int,char*,int ,int *) ;

yrmcds_error FUNC_3(yrmcds* VAR_4, const char* VAR_5, size_t VAR_6,
                          uint64_t VAR_7, uint64_t VAR_8, uint32_t VAR_9,
                          int VAR_10, uint32_t* VAR_11) {
    if( VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == 0 )
        return VAR_0;

    if( VAR_4->text_mode )
        return VAR_3;

    char VAR_12[20];
    FUNC_1(VAR_7, VAR_12);
    FUNC_1(VAR_8, &VAR_12[8]);
    FUNC_0(VAR_9, &VAR_12[16]);
    return FUNC_2(VAR_4, VAR_10 ? VAR_2 : VAR_1,
                        0, VAR_11, VAR_6, VAR_5,
                        sizeof(VAR_12), VAR_12, 0, ((void*)0));
}
