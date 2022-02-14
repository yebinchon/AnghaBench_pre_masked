
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_5__ {scalar_t__ text_mode; } ;
typedef TYPE_1__ yrmcds ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int extras ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *,size_t,char const*,int,char*,int ,int *) ;
 int FUNC_3 (TYPE_1__*,char const*,size_t,int ,int,int *) ;

yrmcds_error FUNC_4(yrmcds* VAR_3, const char* VAR_4, size_t VAR_5,
                         uint64_t VAR_6, int VAR_7, uint32_t* VAR_8) {
    if( VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == 0 )
        return VAR_0;

    if( VAR_3->text_mode )
        return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

    char VAR_9[20];
    FUNC_1(VAR_6, VAR_9);
    FUNC_1((uint64_t)0, &VAR_9[8]);
    FUNC_0(~(uint32_t)0, &VAR_9[16]);
    return FUNC_2(VAR_3, VAR_7 ? VAR_2 : VAR_1,
                        0, VAR_8, VAR_5, VAR_4,
                        sizeof(VAR_9), VAR_9, 0, ((void*)0));
}
