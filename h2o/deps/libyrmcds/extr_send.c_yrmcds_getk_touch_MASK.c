
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_4__ {scalar_t__ text_mode; } ;
typedef TYPE_1__ yrmcds ;
typedef int uint32_t ;
typedef int extras ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int *,size_t,char const*,int,char*,int ,int *) ;

yrmcds_error FUNC_2(yrmcds* VAR_4, const char* VAR_5, size_t VAR_6,
                               uint32_t VAR_7, int VAR_8, uint32_t* VAR_9) {
    if( VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == 0 )
        return VAR_0;

    if( VAR_4->text_mode )
        return VAR_3;

    char VAR_10[4];
    FUNC_0(VAR_7, VAR_10);
    return FUNC_1(VAR_4, VAR_8 ? VAR_2 : VAR_1,
                        0, VAR_9, VAR_6, VAR_5,
                        sizeof(VAR_10), VAR_10, 0, ((void*)0));
}
