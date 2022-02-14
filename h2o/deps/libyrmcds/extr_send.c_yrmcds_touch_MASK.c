
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_5__ {scalar_t__ text_mode; } ;
typedef TYPE_1__ yrmcds ;
typedef int uint32_t ;
typedef int extras ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int *,size_t,char const*,int,char*,int ,int *) ;
 int FUNC_2 (TYPE_1__*,char const*,size_t,int ,int,int *) ;

yrmcds_error FUNC_3(yrmcds* VAR_2, const char* VAR_3, size_t VAR_4,
                          uint32_t VAR_5, int VAR_6, uint32_t* VAR_7) {
    if( VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0 )
        return VAR_0;

    if( VAR_2->text_mode )
        return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    char VAR_8[4];
    FUNC_0(VAR_5, VAR_8);
    return FUNC_1(VAR_2, VAR_1, 0, VAR_7, VAR_4, VAR_3,
                        sizeof(VAR_8), VAR_8, 0, ((void*)0));
}
