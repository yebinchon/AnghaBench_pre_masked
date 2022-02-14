
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_5__ {scalar_t__ text_mode; } ;
typedef TYPE_1__ yrmcds ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *,size_t,char const*,int ,int *,size_t,char const*) ;
 int FUNC_1 (TYPE_1__*,char const*,size_t,char const*,size_t,int,int *) ;

yrmcds_error FUNC_2(yrmcds* VAR_3, const char* VAR_4, size_t VAR_5,
                            const char* VAR_6, size_t VAR_7,
                            int VAR_8, uint32_t* VAR_9) {
    if( VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == 0 ||
        VAR_6 == ((void*)0) || VAR_7 == 0 )
        return VAR_0;

    if( VAR_3->text_mode )
        return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
                                   VAR_8, VAR_9);

    return FUNC_0(VAR_3, VAR_8 ? VAR_2 : VAR_1,
                        0, VAR_9, VAR_5, VAR_4, 0, ((void*)0), VAR_7, VAR_6);
}
